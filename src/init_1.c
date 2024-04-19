/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:16:11 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/18 17:16:39 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

t_texture	**init_texture(t_data *d, t_assets *content)
{
	t_texture	**tex;
	int			i;

	tex = (t_texture **)malloc(sizeof(t_texture *) * 4);
	i = -1;
	while (++i < 4)
		tex[i] = (t_texture *)malloc(sizeof(t_texture));
	i = -1;
	while (++i < 4)
	{
		tex[i]->path = content->tex_path[i];
		tex[i]->img = mlx_xpm_file_to_image(d->mlx, tex[i]->path, \
			&tex[i]->width, &tex[i]->height);
		if (tex[i]->img == NULL)
			error_msg("ERROR: tex[i]->img is NULL", d);
		tex[i]->buf = mlx_get_data_addr(tex[i]->img, &tex[i]->pix_bits, \
			&tex[i]->l_bytes, &tex[i]->endi);
	}
	return (tex);
}
