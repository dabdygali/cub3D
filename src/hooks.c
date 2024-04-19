/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:19:38 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/18 17:13:08 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static void	w_s_keys(int key, t_data *d)
{
	if (key == KEY_W)
	{
		if (d->world_map[(int)(d->pos_x + d->dir_x * \
			d->move_speed)][(int)d->pos_y] != '1')
			d->pos_x += d->dir_x * d->move_speed;
		if (d->world_map[(int)d->pos_x][(int)(d->pos_y + \
			d->dir_y * d->move_speed)] != '1')
			d->pos_y += d->dir_y * d->move_speed;
	}
	if (key == KEY_S)
	{
		if (d->world_map[(int)(d->pos_x - d->dir_x * \
			d->move_speed)][(int)d->pos_y] != '1')
			d->pos_x -= d->dir_x * d->move_speed;
		if (d->world_map[(int)d->pos_x][(int)(d->pos_y - d->dir_y * \
		d->move_speed)] != '1')
			d->pos_y -= d->dir_y * d->move_speed;
	}
}

static void	a_d_keys(int key, t_data *d)
{
	if (key == KEY_D)
	{
		if (d->world_map[(int)(d->pos_x + d->plane_x * \
		d->move_speed)][(int)d->pos_y] != '1')
			d->pos_x += d->plane_x * d->move_speed;
		if (d->world_map[(int)d->pos_x][(int)(d->pos_y + \
			d->plane_y * d->move_speed)] != '1')
			d->pos_y += d->plane_y * d->move_speed;
	}
	if (key == KEY_A)
	{
		if (d->world_map[(int)(d->pos_x - d->plane_x * \
			d->move_speed)][(int)d->pos_y] != '1')
			d->pos_x -= d->plane_x * d->move_speed;
		if (d->world_map[(int)d->pos_x][(int)(d->pos_y - \
			d->plane_y * d->move_speed)] != '1')
			d->pos_y -= d->plane_y * d->move_speed;
	}
}

int	close_window(t_data *d)
{
	free_all(d);
	exit(0);
	return (0);
}

int	key_handler(int key, t_data *d)
{
	if (key != ESC)
	{
		if (key == KEY_W || key == KEY_S)
			w_s_keys(key, d);
		if (key == KEY_A || key == KEY_D)
			a_d_keys(key, d);
		if (key == KEY_LEFT_ARROW)
			rotate_left(d, d->rot_speed);
		if (key == KEY_RIGHT_ARROW)
			rotate_right(d, d->rot_speed);
		render(d);
	}
	if (key == ESC)
		close_window(d);
	return (0);
}
