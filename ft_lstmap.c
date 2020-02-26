/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 18:40:00 by lnelson           #+#    #+#             */
/*   Updated: 2020/02/03 16:42:14 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*temp;
	t_list	*begin;

	if (!lst || !(begin = ft_lstnew(f(lst->content))))
		return (NULL);
	ptr = begin;
	while (lst != 0)
	{
		if (!(temp = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&begin, del);
			return (0);
		}
		ptr->next = temp;
		lst = lst->next;
		ptr = ptr->next;
	}
	return (begin);
}
