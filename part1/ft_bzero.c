/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napoleon <napoleon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:32:43 by napoleon          #+#    #+#             */
/*   Updated: 2019/11/08 12:57:47 by napoleon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned char *tmp;
	
	tmp = s;
	while (n > 0)
	{
		*tmp = 0;
		tmp++;
		n--;
	}
	return (s);
}