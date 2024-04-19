/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:25:39 by dabdygal          #+#    #+#             */
/*   Updated: 2024/02/16 17:17:45 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @brief Writes string on a given file descriptor
 * @details Functions writes the string s until null-terminator to a 
 * file descriptor fd. If s is null then "(null)" is written.
 * @param s Pointer to a string to be written.
 * @param fd File descriptor.
 * @return On success returns number of bytes written. If error occured -1 is 
 * returned.
*/
int	ft_putstr_fd(const char *const s, int fd)
{
	int	done;

	if (!s)
		return (write (fd, "(null)", 6));
	done = 0;
	while (s[done])
	{
		if (write(fd, &s[done], sizeof(char)) < 0)
			return (-1);
		done++;
	}
	return (done);
}
