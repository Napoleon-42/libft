/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:39:01 by napoleon          #+#    #+#             */
/*   Updated: 2019/11/26 13:44:41 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int res_size;
	unsigned int j;

	j = 0;
	i = 0;
	ft_strlen(dest);
	if (ft_strlen(dest) > (int)size)
		res_size = size + ft_strlen(src);
	else if (ft_strlen(dest) <= (int)size)
		res_size = ft_strlen(dest) + ft_strlen(src);
	j = ft_strlen(dest);
	while (src[i] != '\0' && j + 1 < size)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (res_size);
}
