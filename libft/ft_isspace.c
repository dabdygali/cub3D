/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:05:08 by dabdygal          #+#    #+#             */
/*   Updated: 2023/10/27 17:11:48 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Function tests for white-space characters.
 * @details Function tests if a character is one of the following:
 * '\t' '\n' '\v' '\f' '\t' ' '
 * @param c A character to be tested.
 * @return Returns zero if the character test false and returns non-zero if
 * the character tests true.
*/
int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r')
		return (1);
	if (c == ' ')
		return (1);
	return (0);
}
