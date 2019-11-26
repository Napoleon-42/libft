/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 14:29:07 by lnelson           #+#    #+#             */
/*   Updated: 2019/11/26 15:25:54 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int i;

	i = 0;
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] < str2[i])
			return ((unsigned char)(str1[i] - str2[i]));
		else if (str1[i] > str2[i])
			return ((unsigned char)(str1[i] - str2[i]));
		i++;
	}
	return (0);
}
