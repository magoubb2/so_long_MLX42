/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaron- <mabaron-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:06:20 by mabaron-          #+#    #+#             */
/*   Updated: 2023/01/15 16:29:10 by mabaron-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

mlx_image_t	*g_img;

int main(void)
{
	mlx_t *mlx;

	mlx = mlx_init(WIDTH, HEIGHT, "so_long", true);
	if (!mlx)
		exit(EXIT_FAILURE);
	//g_img = mlx_new_image(mlx, 1080, 1920);

	mlx_loop(mlx);
}
