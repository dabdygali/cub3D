/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:30:25 by dabdygal          #+#    #+#             */
/*   Updated: 2023/11/20 17:28:12 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putendl_fd(const char *s, int fd)
{
	int	done;

	if (!s)
		return (write(fd, "(null)", 6));
	done = 0;
	while (s[done])
	{
		if (write(fd, &s[done], sizeof(char)) < 0)
			return (-1);
		done++;
	}
	if (write(fd, "\n", sizeof(char)) < 0)
		return (-1);
	done++;
	return (done);
}
