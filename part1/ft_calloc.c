/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napoleon <napoleon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 21:02:14 by napoleon          #+#    #+#             */
/*   Updated: 2019/11/18 22:29:58 by napoleon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>


void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	size_t	i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	result = malloc(size * nmemb);
	while (i <= nmemb)
	{
		((char*)result)[i] = 0;
		i++;
	}
	return (result);
}
