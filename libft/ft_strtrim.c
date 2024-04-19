/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:12:20 by dabdygal          #+#    #+#             */
/*   Updated: 2023/07/12 16:50:51 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*skip_beginning(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (*s1 == set[i] && *s1)
		{
			s1++;
			i = 0;
			continue ;
		}
		i++;
	}
	return ((char *) s1);
}

static char	*skip_end(char const *s1, char const *set)
{
	size_t	i;
	char	*tmp;

	if (*s1 == 0)
		return ((char *) s1);
	tmp = (char *) s1;
	while (*s1)
		s1++;
	s1--;
	i = 0;
	while (set[i])
	{
		if (*s1 == set[i] && s1 > tmp)
		{
			s1--;
			i = 0;
			continue ;
		}
		i++;
	}
	return ((char *) s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strtrim;
	char	*end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	s1 = skip_beginning(s1, set);
	if (*s1 == 0)
	{
		strtrim = (char *) malloc(sizeof(char));
		*strtrim = 0;
		return (strtrim);
	}
	end = skip_end(s1, set);
	strtrim = (char *) malloc(sizeof(char) * (end - s1 + 2));
	if (!strtrim)
		return (NULL);
	i = 0;
	while (s1 + i <= end)
	{
		strtrim[i] = s1[i];
		i++;
	}
	strtrim[i] = 0;
	return (strtrim);
}
