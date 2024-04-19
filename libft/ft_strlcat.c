/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:36:36 by dabdygal          #+#    #+#             */
/*   Updated: 2023/07/06 18:11:54 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	i = 0;
	j = 0;
	while (j < dstsize && dst[j])
		j++;
	dst_len = j;
	while (src[i])
	{
		if (j < dstsize - 1 && j != dstsize)
		{
			dst[j] = src[i];
			j++;
		}
		i++;
	}
	if (j != dstsize)
		dst[j] = '\0';
	return (dst_len + i);
}
