/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_strv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:28:26 by dabdygal          #+#    #+#             */
/*   Updated: 2024/03/02 14:33:09 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	strv_size(const char **strv)
{
	size_t	i;

	if (!strv)
		return (0);
	i = 0;
	while (strv[i])
		i++;
	return (i);
}

static void	free_strv(char **strv)
{
	while (*strv)
	{
		free(*strv);
		*strv = NULL;
		strv++;
	}
}

char	**ft_copy_strv(const char **strv)
{
	int		size;
	char	**envp;
	int		i;

	if (strv == NULL)
		return (NULL);
	size = strv_size((const char **)strv);
	envp = (char **)malloc(sizeof(char *) * (size + 1));
	if (!envp)
		return (NULL);
	i = 0;
	while (i < size)
	{
		envp[i] = ft_strdup(strv[i]);
		if (envp[i] == NULL)
		{
			free_strv(envp + size + 1);
			return (NULL);
		}
		i++;
	}
	envp[i] = NULL;
	return (envp);
}
