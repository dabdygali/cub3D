/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:05:51 by dabdygal          #+#    #+#             */
/*   Updated: 2024/04/18 16:33:33 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "cub3d.h"
#include <stdio.h>
#include <errno.h>

// static void	print_content(t_assets *c)
// {
// 	int	i;
// 	int	j;

// 	printf("North Texture	\"%s\"\n", c->tex_path[0]);
// 	printf("South Texture	\"%s\"\n", c->tex_path[2]);
// 	printf("West Texture	\"%s\"\n", c->tex_path[3]);
// 	printf("East Texture	\"%s\"\n", c->tex_path[1]);
// 	printf("Floor %i,%i,%i\n",c->floor_rgb[0],c->floor_rgb[1],c->floor_rgb[2]);
// 	printf("Ceiling %i,%i,%i\n",c->ceil_rgb[0],c->ceil_rgb[1],c->ceil_rgb[2]);
// 	printf("MAP:\n");
// 	i = 0;
// 	while (i < c->row_qty)
// 	{
// 		j = 0;
// 		while (j < c->col_qty)
// 		{
// 			printf("%c", c->map[i][j]);
// 			j++;
// 		}
// 		printf("\n");
// 		i++;
// 	}
// }

int	main(int argc, char *argv[])
{
	t_data		data;
	t_assets	content;

	(void)argc;
	(void)argv;
	errno = 0;
	init_content(&content);
	if (parse(argc, argv, &content) <= 0)
		return (EXIT_FAILURE);
	init(&data, &content);
	render(&data);
	mlx_key_hook(data.win, key_handler, &data);
	mlx_hook(data.win, 17, 0, close_window, &data);
	mlx_loop(data.mlx);
	return (EXIT_SUCCESS);
}
