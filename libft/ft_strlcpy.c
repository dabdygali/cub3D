/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:16:21 by dabdygal          #+#    #+#             */
/*   Updated: 2023/07/10 17:07:37 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		if (i < dstsize)
			dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	else
		if (dstsize)
			dst[dstsize - 1] = '\0';
	return (i);
}
