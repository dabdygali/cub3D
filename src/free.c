/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:56:14 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/18 17:12:59 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	clean_content(t_assets *c)
{
	t_row_list	*tmp;
	t_row_list	*tmp2;
	int			i;

	free(c->tex_path[0]);
	free(c->tex_path[1]);
	free(c->tex_path[2]);
	free(c->tex_path[3]);
	tmp = c->rowlist;
	while (tmp)
	{
		tmp2 = tmp->next;
		if (tmp->row)
			free(tmp->row);
		if (tmp)
			free(tmp);
		tmp = tmp2;
	}
	i = -1;
	while (c->map && ++i < c->row_qty)
		if (c->map[i])
			free(c->map[i]);
	if (c->map)
		free(c->map);
}

static void	clean_textures(t_data *d)
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		mlx_destroy_image(d->mlx, d->texture[i]->img);
		free(d->texture[i]);
	}
	free(d->texture);
}

void	error_msg(char *str, t_data *data)
{
	printf("%s\n", str);
	if (data)
		free_all(data);
	exit(0);
}

void	free_all(t_data *d)
{
	clean_content(d->assets);
	clean_textures(d);
	mlx_destroy_image(d->mlx, d->img);
	mlx_destroy_window(d->mlx, d->win);
	return ;
}
