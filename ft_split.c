/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 14:04:34 by lnelson           #+#    #+#             */
/*   Updated: 2019/11/26 14:58:42 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count_word(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] == c)
		i++;
	while (str[i] != 0)
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != c)
				i++;
		}
		else
			while (str[i] == c && str[i] != 0)
				i++;
	}
	return (count);
}

static int	ft_size_w(char const *str, int i, char c)
{
	int	j;

	j = 0;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

char		**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		n_word;

	i = 0;
	n_word = 0;
	if (!(res = malloc(sizeof(char*) * (ft_count_word((char*)s, c) + 1))))
		return (0);
	while (n_word != ft_count_word((char*)s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		if (!(res[n_word] = malloc(sizeof(char) * (1 + ft_size_w(s, i, c)))))
			return (0);
		j = 0;
		while (s[i] != c && s[i])
			res[n_word][j++] = s[i++];
		res[n_word][j] = 0;
		n_word++;
	}
	res[n_word] = 0;
	return (res);
}
