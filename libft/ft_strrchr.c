/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:02:05 by dabdygal          #+#    #+#             */
/*   Updated: 2023/07/10 14:24:03 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*to_return;

	to_return = NULL;
	while (*s)
	{
		if (*s == (char) c)
		{
			to_return = (char *) s;
		}
		s++;
	}
	if (c == 0)
	{
		return ((char *) s);
	}
	return (to_return);
}
