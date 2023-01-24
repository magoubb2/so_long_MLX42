/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margueritebaronbeliveau <margueritebaro    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:44:49 by mabaron-          #+#    #+#             */
/*   Updated: 2023/01/23 19:44:45 by margueriteb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "MLX42/include/MLX42/MLX42.h" //minilibx
# include <string.h> //pour la function strerror: This function returns a pointer to the error string describing error errnum.
# include "./libft/libft.h"
# include <stdio.h>
#define WIDTH 1080
#define HEIGHT 1920

//typedef struct s_data
//{
//	void	*mlx;
//}	t_data;


		/* error mesage */	
void	error_mapNotRespected(void);
void	error_noValidEntryPath(void);

			/* parsing */
char    read_map(char *map);
char	**str_2d(char *map);

#endif

