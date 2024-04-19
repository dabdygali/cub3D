/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:39:18 by dabdygal          #+#    #+#             */
/*   Updated: 2024/02/16 17:44:04 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_getenv(const char *name, char **envp)
{
	size_t	len;
	size_t	i;

	if (!name || !envp || ft_strchr(name, '='))
		return (NULL);
	len = ft_strlen(name);
	i = 0;
	while (envp[i])
	{
		if (!ft_strncmp(name, envp[i], len) && envp[i][len] == '=')
			return ((char *)(envp[i] + len + 1));
		i++;
	}
	return (NULL);
}
