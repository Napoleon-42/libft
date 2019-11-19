/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napoleon <napoleon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:58:30 by napoleon          #+#    #+#             */
/*   Updated: 2019/11/07 20:24:10 by napoleon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *tmp;
	char *tmpp;

	tmp = dest + n - 1;
	tmpp = src + n - 1;
	while (n > 0)
	{
		tmp = tmpp;
		tmp--;
		tmpp--;
		n--;
	}
	return (dest);
}