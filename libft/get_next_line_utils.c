/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:41:29 by dabdygal          #+#    #+#             */
/*   Updated: 2023/08/23 14:48:18 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	cut_n_chars(char **str, ssize_t n, ssize_t len)
{
	ssize_t	i;
	char	*tmp;

	if (n == len)
	{
		free(*str);
		*str = NULL;
		return (1);
	}
	tmp = (char *) malloc(sizeof(char) * (len - n));
	if (!tmp)
		return (-1);
	i = 0;
	while (i < (len - n))
	{
		tmp[i] = (*str)[n + i];
		i++;
	}
	free(*str);
	*str = tmp;
	return (1);
}
