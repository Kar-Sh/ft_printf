/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshegunt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 15:53:36 by kshegunt          #+#    #+#             */
/*   Updated: 2021/02/01 15:56:04 by kshegunt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*neww;

	if (!(neww = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	neww->content = content;
	neww->next = NULL;
	return (neww);
}
