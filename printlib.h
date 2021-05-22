/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printlib.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshegunt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 20:40:56 by kshegunt          #+#    #+#             */
/*   Updated: 2021/04/19 20:40:59 by kshegunt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTLIB_H
# define PRINTLIB_H
# include <stdarg.h>
# include <unistd.h>

typedef struct	s_flags
{
	int	minus;
	int zero;
	int	dot;
	int	prec;
	int	width;
	int	len;
}				t_flags;

void			printchar(va_list args, t_flags *st);
void			printnumber(char c, va_list args, t_flags *st);
void			printstr(va_list args, t_flags *st);
char			*ft_anybase(unsigned long n, const char *base);
void			printhex(char c, va_list args, t_flags *st);
void			flags_check(char **str, t_flags *st);
void			width_check(char **str, t_flags *st, va_list args);
void			precision_check(char **str, t_flags *st, va_list args);
void			printch(int quant, char ch, t_flags *st);
void			printpointer(va_list args, t_flags *st);
char			*ft_utoa(unsigned long n);
void			ft_putstr(char *str, t_flags *st);

#endif
