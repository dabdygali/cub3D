/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:44:43 by dabdygal          #+#    #+#             */
/*   Updated: 2023/07/06 19:40:35 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	to_return;
	int	sign;

	to_return = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else
		if (*str == '+')
			str++;
	while (*str == '0')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		to_return = (to_return * 10) + (*str - '0');
		str++;
	}
	to_return = sign * to_return;
	return (to_return);
}
