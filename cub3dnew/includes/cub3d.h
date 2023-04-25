/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunoz   <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 03:32:44 by nmunoz            #+#    #+#             */
/*   Updated: 2023/04/25 03:32:44 by nmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef INCLUDES_CUB3D_H
#define INCLUDES_CUB3D_H

# include "../list/list.h"
# include "../miniLibX/mlx.h"

typedef struct s_screen_utils {
    int		bits_per_pixel;
	int		line_length;
	int		endian;
	char 	*addr;
} t_screen_utils;

typedef struct s_img
{
	void *holder;
	char *addr;
} t_img;

typedef struct s_window
{
    void *holder;
} t_window;

typedef struct s_screen
{
    void 		*holder;
    t_window	*window;
    t_img		*img;
    t_screen_utils	*utils;
} t_screen;


t_screen *init_screen(int width, int height, char *name);

#endif
