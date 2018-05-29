/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:07:33 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/28 11:07:34 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*temp;

	while (lst != NULL)
	{
		temp = f(lst);
		if (!temp)
			return (NULL);
		ret = (t_list*)ft_memalloc(sizeof(temp));
		if (!ret)
			return (NULL);
		ret = temp;
		ret->content_size = temp->content_size;
		ret->next = temp;
		lst = lst->next;
	}
	return (ret);
}
