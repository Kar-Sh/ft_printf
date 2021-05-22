/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshegunt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 20:39:52 by kshegunt          #+#    #+#             */
/*   Updated: 2021/04/19 20:39:55 by kshegunt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printlib.h"
#include "libft/libft.h"

static	int		count(long n)
{
	size_t	c;

	c = (n > 0 ? 0 : 1);
	while (n != 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

static	char	*backwards(char *str)
{
	size_t	k;
	size_t	i;
	char	tmp;

	if (ft_strlen(str) % 2 == 0)
	{
		k = ft_strlen(str) / 2;
	}
	else
	{
		k = (ft_strlen(str) + 1) / 2;
	}
	i = 0;
	while (i < k)
	{
		tmp = str[i];
		str[i] = str[ft_strlen(str) - 1 - i];
		str[ft_strlen(str) - 1 - i] = tmp;
		i++;
	}
	return (str);
}

char			*ft_utoa(unsigned long n)
{
	size_t	i;
	char	*str;
	int		t;
	long	number;

	number = n;
	t = 0;
	if (!(str = (char *)malloc((count(number) + 1) * sizeof(char))))
		return (NULL);
	if (number < 0)
	{
		*str++ = '-';
		number *= -1;
		t = 1;
	}
	i = 0;
	if (number == 0)
		str[i++] = '0';
	while (number != 0)
	{
		str[i++] = (number % 10 + '0');
		number = number / 10;
	}
	str[i] = '\0';
	return (backwards(str) - t);
}
