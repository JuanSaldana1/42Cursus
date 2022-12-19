/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tutorial.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 10:44:26 by jsaldana          #+#    #+#             */
/*   Updated: 2022/12/19 11:27:45 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibx/mlx.h"

int main()
{
    void *mlx = mlx_init();
    void *win = mlx_new_window(mlx, 640, 360, "Tutorial Window - Draw Pixel");

    mlx_pixel_put(mlx, win, 640/2, 360/2, 0xFFFFFF);

    mlx_loop(mlx);
}
