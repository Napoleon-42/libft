/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napoleon <napoleon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 17:59:11 by napoleon          #+#    #+#             */
/*   Updated: 2019/11/19 18:26:27 by napoleon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *res;
	int i;

	if(!(res = malloc((len + 1) * sizeof(char))))
		return 0;
	while (i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[len] = 0;
	return (res);	
}