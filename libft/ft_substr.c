/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:23:25 by dabdygal          #+#    #+#             */
/*   Updated: 2023/07/11 10:56:36 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	subsize;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	if ((size_t) start > i)
		start = i;
	subsize = i + 1 - start;
	if (i + 1 - start > len)
		subsize = len + 1;
	substr = (char *) malloc(sizeof(char) * subsize);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < subsize && subsize != 1)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[subsize - 1] = 0;
	return (substr);
}
