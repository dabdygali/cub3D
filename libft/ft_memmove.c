/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:04:32 by dabdygal          #+#    #+#             */
/*   Updated: 2023/07/06 19:24:59 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*char_dst;
	char	*char_src;
	size_t	i;

	if (dst == NULL && src == NULL)
		return (dst);
	char_dst = (char *) dst;
	char_src = (char *) src;
	if (src < dst)
	{
		while (len--)
			char_dst[len] = char_src[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			char_dst[i] = char_src[i];
			i++;
		}
	}
	return (dst);
}
