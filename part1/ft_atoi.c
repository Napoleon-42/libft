/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napoleon <napoleon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:44:24 by napoleon          #+#    #+#             */
/*   Updated: 2019/11/08 16:51:01 by napoleon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int res;
	int i;
	int sign;

	i = 0;
	sign = 1;
	res = 0;
	while (nptr[i] && (nptr[i] == ' ' || (nptr[i] >=7 && nptr[i] <= 13)))
		i++;
	if (nptr[i] == '-')
		sign = -1;
	if (nptr[i] == 45 || nptr[i] == 43)
		i++;
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		res = res * 10	+ (nptr[i] - 48);
		i++;
	}
	return (res * sign);
}