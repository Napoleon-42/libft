/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 18:38:52 by napoleon          #+#    #+#             */
/*   Updated: 2019/11/26 15:44:11 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_strchar(const char c, const char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*res;
	int		size;

	i = 0;
	size = 0;
	while (s1[i])
	{
		if (ft_strchar(s1[i], set) == -1)
			size++;
		i++;
	}
	if (!(res = malloc(sizeof(char) * (size + 1))))
		return (0);
	i = 0;
	size = 0;
	res[size] = 0;
	while (s1[i])
	{
		if (ft_strchar(s1[i], set) == -1)
			res[size++] = s1[i];
		i++;
	}
	return (res);
}
