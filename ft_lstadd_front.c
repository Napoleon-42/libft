/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 14:36:38 by lnelson           #+#    #+#             */
/*   Updated: 2019/11/26 15:03:25 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnews(void *content)
{
	t_list	*new;

	if (!(new = malloc(sizeof(t_list))))
		return (0);
	new->next = 0;
	new->content = content;
	return (new);
}

void	ft_lstadd_front(t_list **begin_list, void *content)
{
	t_list list;
	t_list *p_list;

	p_list = &list;
	if (*begin_list == 0)
		*begin_list = ft_lstnews(content);
	else
	{
		p_list->content = content;
		p_list->next = *begin_list;
		*begin_list = p_list;
	}
}
