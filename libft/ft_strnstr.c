/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:09:25 by dabdygal          #+#    #+#             */
/*   Updated: 2024/02/01 14:45:55 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static size_t	fun_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_size;

	if (*needle == '\0')
		return ((char *) haystack);
	needle_size = fun_strlen(needle);
	while (len && *haystack && len >= needle_size)
	{
		if (*haystack == *needle)
		{
			i = 0;
			while (needle[i])
			{
				if (haystack[i] != needle[i])
					break ;
				i++;
			}
			if (i == needle_size)
				return ((char *) haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
