/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napoleon <napoleon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 19:21:14 by napoleon          #+#    #+#             */
/*   Updated: 2019/11/19 20:49:31 by napoleon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *res;
	
	i = 0;
	while (s[i])
		i++;
	if(!(res = malloc(sizeof(char) * (i + 1))))
		return (0);
	res[i + 1] = 0;
	i = 0;
	while (s[i])
	{
		res[i] = f(1, s[i]);
		i++;
	}
	return (res);
}