/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napoleon <napoleon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 19:42:12 by napoleon          #+#    #+#             */
/*   Updated: 2019/11/10 20:09:39 by napoleon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;
	
	if (little == 0)
		return (big);
	i = 0;
	j = 0;
	while (big[i] && len--)
	{
		if (big[i] == *little)
		{
			while ((big[i + j] == little[j]) && (big[i + j]))
				j++;
			if (little[j] == 0)
				return (&big[i]);
		}
		i++;
	}
	return (NULL);
}