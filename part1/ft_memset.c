/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napoleon <napoleon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:10:07 by napoleon          #+#    #+#             */
/*   Updated: 2019/11/08 17:01:01 by napoleon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char *tmp;
	
	if (s = 0)
		return (s);
	tmp = (char *)s;
	while (n-- > 0)
		*(tmp++) = (unsigned char)c;
	return (s);
}