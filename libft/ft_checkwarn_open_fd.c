/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkwarn_open_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:49:49 by dabdygal          #+#    #+#             */
/*   Updated: 2023/09/27 13:00:15 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_checkwarn_open_fd(int fd)
{
	if (fd < 0)
	{
		ft_putstr_fd("Failed to open the file\n", STDERR_FILENO);
		return (-1);
	}
	return (0);
}
