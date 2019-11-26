/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 14:22:25 by lnelson           #+#    #+#             */
/*   Updated: 2019/11/26 13:38:28 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	get_all_sizes(char const *s1, char const *s2, int *res)
{
	int i;

	res[0] = 0;
	res[1] = 0;
	i = 0;
	while (s1[i])
	{
		res[0]++;
		res[1]++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		res[1]++;
		i++;
	}
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		sizes[2];
	char	*res;

	i = 0;
	get_all_sizes(s1, s2, sizes);
	if (!(res = malloc((sizes[1] + 1) * sizeof(char))))
		return (NULL);
	res[sizes[1]] = 0;
	while (i < sizes[1])
	{
		if (i < sizes[0])
			res[i] = s1[i];
		else
			res[i] = s2[i - sizes[0]];
		i++;
	}
	return (res);
}
