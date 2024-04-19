/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 21:12:06 by dabdygal          #+#    #+#             */
/*   Updated: 2023/07/12 14:21:01 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static long	calc_size(long a)
{
	long	size;
	long	i;

	size = 2;
	i = 10;
	while (a / i)
	{
		size++;
		i *= 10;
	}
	if (a < 0)
		size++;
	return (size);
}

char	*ft_itoa(int n)
{
	long	i;
	long	size;
	char	*str;
	long	a;

	a = n;
	size = calc_size(a);
	str = (char *) malloc(sizeof(char) * size--);
	if (!str)
		return (NULL);
	*str = 0;
	if (a < 0)
	{
		*str = '-';
		a = -a;
	}
	str[size--] = 0;
	i = 10;
	while (size > 0 || (size >= 0 && *str != '-'))
	{
		str[size] = (char)((a % i) / (i / 10) + 48);
		i *= 10;
		size--;
	}
	return (str);
}
