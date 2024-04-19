/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:34:22 by dabdygal          #+#    #+#             */
/*   Updated: 2023/07/18 15:49:57 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putnbr_fd(int n, int fd)
{
	long	i;
	long	a;
	char	c;
	int		done;

	a = n;
	done = 0;
	if (a < 0)
	{
		write(fd, "-", sizeof(char));
		done++;
		a = -a;
	}
	i = 10;
	while (a / i)
		i *= 10;
	i /= 10;
	while (i > 0)
	{
		c = (char)((a / i) % 10 + 48);
		write(fd, &c, sizeof(char));
		done++;
		i /= 10;
	}
	return (done);
}
