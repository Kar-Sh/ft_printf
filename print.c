/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshegunt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 20:46:01 by kshegunt          #+#    #+#             */
/*   Updated: 2021/04/19 20:46:12 by kshegunt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "printlib.h"

void	printch(int quant, char ch, t_flags *st)
{
	int		i;

	i = 0;
	while (i < quant)
	{
		write(1, &ch, 1);
		st->len += 1;
		i++;
	}
}

void	ft_putstr(char *str, t_flags *st)
{
	write(1, str, ft_strlen(str));
	st->len += ft_strlen(str);
}
