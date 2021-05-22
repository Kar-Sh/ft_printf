/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshegunt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 14:48:06 by kshegunt          #+#    #+#             */
/*   Updated: 2021/01/21 14:48:10 by kshegunt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	un_c;

	ptr = (unsigned char *)str;
	un_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		*ptr = un_c;
		ptr++;
		i++;
	}
	return (str);
}
