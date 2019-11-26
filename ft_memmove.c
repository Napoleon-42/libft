/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 21:18:04 by napoleon          #+#    #+#             */
/*   Updated: 2019/11/26 13:38:02 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*desti;
	unsigned char	*source;
	size_t			i;

	i = 0;
	source = (unsigned char*)src;
	desti = (unsigned char*)dest;
	while (++i <= n)
		desti[n - i] = source[n - i];
	return (dest);
}
