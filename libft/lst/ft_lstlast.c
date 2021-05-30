/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 14:39:53 by lnelson           #+#    #+#             */
/*   Updated: 2021/05/30 19:52:07 by napoleon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *begin_list)
{
	t_list	*temp;

	temp = begin_list;
	if (temp)
		while (temp->next)
		{
			temp = temp->next;
		}
	return (temp);
}
