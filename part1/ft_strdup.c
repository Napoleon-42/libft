/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napoleon <napoleon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 19:30:28 by napoleon          #+#    #+#             */
/*   Updated: 2019/11/17 20:02:55 by napoleon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *c)
{
	char 	*tmp;
	int		size;
	char	*res;
	
	size = 0;
	tmp = c;
	while (tmp[size])
		size ++;
	if(!(res = malloc(sizeof(char) * size)))
		return 0;
	size = 0;
	while (tmp[size])
	{
		res[size] = tmp[size];
		size ++;
	}
	res[size] = 0;
	return res;
}