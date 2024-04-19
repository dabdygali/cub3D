/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:17:39 by dabdygal          #+#    #+#             */
/*   Updated: 2024/02/01 15:38:58 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief Frees the allocation and sets the pointer as NULL.
 * @details Frees allocations that were created via the preceding allocation 
 * functions. Sets the pointer \p ptr to NULL.
 * @param ptr A pointer to be freed.
 * @return Does not return anything.
*/
void	ft_free(void **ptr)
{
	if (*ptr)
		free(*ptr);
	*ptr = NULL;
}
