/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napoleon <napoleon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 22:11:40 by napoleon          #+#    #+#             */
/*   Updated: 2019/11/08 12:58:05 by napoleon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *mem, int c, size_t n)
{
	char *tmp;

	tmp = mem;
	while (n > 0)
	{
		if (*tmp == c)
			return (tmp);
		tmp++;
		n--;
	}
	return (NULL);
}