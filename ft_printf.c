/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshegunt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:09:22 by kshegunt          #+#    #+#             */
/*   Updated: 2021/04/19 20:38:49 by kshegunt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "printlib.h"

void	printpercent(t_flags *my_struct)
{
	if (!my_struct->minus && !my_struct->zero && my_struct->width)
		printch(my_struct->width - 1, ' ', my_struct);
	else if (!my_struct->minus && my_struct->zero && my_struct->width)
		printch(my_struct->width - 1, '0', my_struct);
	printch(1, '%', my_struct);
	if (my_struct->minus && !my_struct->zero && my_struct->width)
		printch(my_struct->width - 1, ' ', my_struct);
}

void	fill_struct(t_flags *my_struct)
{
	my_struct->minus = 0;
	my_struct->zero = 0;
	my_struct->prec = 0;
	my_struct->width = 0;
	my_struct->dot = 0;
	my_struct->len = 0;
}

void	handle_signs(char c, va_list args, t_flags *my_struct)
{
	if (c == 'c')
		printchar(args, my_struct);
	else if (c == 'd' || c == 'i' || c == 'u')
		printnumber(c, args, my_struct);
	else if (c == 's')
		printstr(args, my_struct);
	else if (c == 'x' || c == 'X')
		printhex(c, args, my_struct);
	else if (c == 'p')
		printpointer(args, my_struct);
}

void	sign_check(char **str, va_list args, t_flags *my_struct)
{
	char	*signs;
	int		j;

	(*str)++;
	j = 0;
	flags_check(str, my_struct);
	width_check(str, my_struct, args);
	precision_check(str, my_struct, args);
	signs = ft_strdup("cspdiuxX");
	while (signs[j] != '\0')
	{
		if (**str == signs[j])
		{
			handle_signs(signs[j], args, my_struct);
			break ;
		}
		j++;
	}
	if (**str == '%')
		printpercent(my_struct);
}

int		ft_printf(const	char *format, ...)
{
	va_list		args;
	int			i;
	int			count;
	char		*str;
	t_flags		my_struct;

	count = 0;
	str = (char *)format;
	i = 0;
	va_start(args, format);
	while (*str != '\0')
	{
		fill_struct(&my_struct);
		if (*str == '%')
			sign_check(&str, args, &my_struct);
		else
			printch(1, *str, &my_struct);
		count += my_struct.len;
		str++;
	}
	va_end(args);
	return (count);
}
