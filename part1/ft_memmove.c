/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napoleon <napoleon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 21:18:04 by napoleon          #+#    #+#             */
/*   Updated: 2019/11/05 22:06:39 by napoleon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;
	char	tmpp[n];
	int i;

	i = 0;
	tmp = src;
	while (i < n)
	{
		tmpp[i] = tmp[i];
		i++;
	}
	tmp = dest;
	while (n > 0)
	{
		*(tmp + n) = tmpp[n];
		n++;
	}
	return (dest);
}