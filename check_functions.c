/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshegunt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:07:45 by kshegunt          #+#    #+#             */
/*   Updated: 2021/04/19 15:07:49 by kshegunt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "printlib.h"

void	width_check(char **str, t_flags *st, va_list args)
{
	if (**str == '*')
	{
		st->width = va_arg(args, int);
		if (st->width < 0)
		{
			if (st->zero)
				st->zero = 0;
			st->width *= -1;
			st->minus = 1;
		}
		(*str)++;
	}
	while (**str >= '0' && **str <= '9')
	{
		st->width = (st->width * 10) + (**str - '0');
		(*str)++;
	}
}

void	flags_check(char **str, t_flags *st)
{
	while (**str == '-' || **str == '0')
	{
		if (**str == '-')
			st->minus = 1;
		if (**str == '0')
			st->zero = 1;
		(*str)++;
	}
	if (st->minus && st->zero)
		st->zero = 0;
}

void	precision_check(char **str, t_flags *st, va_list args)
{
	if (**str == '.')
	{
		st->dot = 1;
		(*str)++;
		if (**str == '*')
		{
			st->prec = va_arg(args, int);
			if (st->prec < 0)
			{
				st->prec = 0;
				st->dot = 0;
			}
			(*str)++;
		}
		while (**str >= '0' && **str <= '9')
		{
			st->prec = (st->prec * 10) + (**str - '0');
			(*str)++;
		}
	}
}
