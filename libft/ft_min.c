/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:43:02 by dabdygal          #+#    #+#             */
/*   Updated: 2023/11/01 18:54:11 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Returns smaller int.
 * @details Function returns smaller value out of two.
 * @param x Integer argument to be compared.
 * @param y Integer argument to be compared.
 * @return Integer value, the smaller out of two.
*/
int	ft_min(int x, int y)
{
	if (x < y)
		return (x);
	else
		return (y);
}
