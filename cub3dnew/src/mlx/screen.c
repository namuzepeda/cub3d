/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunoz   <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 03:47:30 by nmunoz            #+#    #+#             */
/*   Updated: 2023/04/25 03:47:30 by nmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

void	del_screen(t_screen *screen) {

}

t_screen_utils	*init_utils() {
	t_screen_utils *utils = calloc(sizeof(t_screen_utils), 1);
	return utils;
}

t_img	*init_image(t_screen *screen, int width, int height) {
	t_img *img = calloc(sizeof(t_img), 1);
	return (img);
}

t_window	*init_window(t_screen *screen, int width, int height, char *name) {
	t_window *window = calloc(sizeof(t_window), 1);
	if (!window)
		return NULL;
	window->holder = mlx_new_window(screen->holder, width, height, name);
	return window;
}

t_screen *init_screen(int width, int height, char *name) {
	t_screen *screen = calloc(sizeof(t_screen), 1);
	if(!screen)
		return NULL;
	screen->utils = init_utils();
	screen->holder = mlx_init();
	screen->window = init_window(screen, width, height, name);
	screen->img = init_image(screen, width, height);
	screen->img->addr = mlx_get_data_addr(screen->img->holder, &screen->utils->bits_per_pixel, &screen->utils->line_length,
			&screen->utils->endian);
	return screen;
}
