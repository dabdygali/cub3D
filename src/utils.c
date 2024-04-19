/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 16:08:31 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/18 17:35:20 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	run_dda(t_data *d)
{
	int	hit;

	hit = 0;
	while (hit == 0)
	{
		if (d->side_dist_x < d->side_dist_y)
		{
			d->side_dist_x += d->delta_dist_x;
			d->map_x += d->step_x;
			d->side = 0;
		}
		else
		{
			d->side_dist_y += d->delta_dist_y;
			d->map_y += d->step_y;
			d->side = 1;
		}
		if (d->world_map[d->map_x][d->map_y] == 49)
			hit = 1;
	}
}

long int	get_time(t_data *d)
{
	struct timeval	tv;

	if (gettimeofday(&tv, NULL) == -1)
		error_msg("gettimeofday() failed in get_time()\n", d);
	return ((tv.tv_sec * (long int)1000) + (tv.tv_usec / 1000));
}

void	rotate_right(t_data *d, double rad)
{
	double	old_dir;
	double	old_plane_x;

	old_dir = d->dir_x;
	d->dir_x = d->dir_x * cos(-rad) - d->dir_y * \
		sin(-rad);
	d->dir_y = old_dir * sin(-rad) + d->dir_y * cos(-rad);
	old_plane_x = d->plane_x;
	d->plane_x = d->plane_x * cos(-rad) - d->plane_y * \
		sin(-rad);
	d->plane_y = old_plane_x * sin(-rad) + d->plane_y * \
		cos(-rad);
}

void	rotate_left(t_data *d, double rad)
{
	double	old_dir;
	double	old_plane_x;

	old_dir = d->dir_x;
	d->dir_x = d->dir_x * cos(rad) - d->dir_y * sin(rad);
	d->dir_y = old_dir * sin(rad) + d->dir_y * cos(rad);
	old_plane_x = d->plane_x;
	d->plane_x = d->plane_x * cos(rad) - d->plane_y * \
		sin(rad);
	d->plane_y = old_plane_x * sin(rad) + d->plane_y * \
		cos(rad);
}

uint32_t	get_hex_from_rgb(unsigned char r, unsigned char g, unsigned char b)
{
	return ((r << 16) | (g << 8) | b);
}
