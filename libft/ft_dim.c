/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dim.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:53:29 by dabdygal          #+#    #+#             */
/*   Updated: 2023/11/01 18:56:53 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Returns positive difference between two integers.
 * @details Function returns positive difference of two integers x and y.
 * @param x First integer argument.
 * @param y Second integer argument.
 * @return Difference between arguments as non-negative integer value,.
*/
int	ft_dim(int x, int y)
{
	if (x < y)
		return (y - x);
	else
		return (x - y);
}
