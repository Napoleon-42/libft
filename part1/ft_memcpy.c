/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napoleon <napoleon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:44:46 by napoleon          #+#    #+#             */
/*   Updated: 2019/11/08 14:20:06 by napoleon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *tmp;
	char *tmpp;
	
	tmp = (char *) dest;
	tmpp = (char *) src;
	if (!n || dest == src)
		return (dest);
	while (n--)
		*tmp++ = *tmpp++;
	return (dest);
}