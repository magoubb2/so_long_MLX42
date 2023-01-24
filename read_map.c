/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaron- <mabaron-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:39:31 by mabaron-          #+#    #+#             */
/*   Updated: 2023/01/18 13:03:20 by mabaron-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// 1.read the map to check if its O.K.

/* 1.the function reads the file one byte at a time using and counts
    the number of bytes read while what is read is one 

2.allocate memory for a char array that is large 
enough to store all of the bytes read from the file.

3.this time it reads the entire contents
of the file into the newly allocated memory

4.adds a null terminator at the end of the char array, 
so that it can be treated as a string and return the store_map.*/

char    read_map(char *map)
{
    char *store_map;
    int fd;
    int count;
    char buff;
    
    count = 0;
    fd = open(map, O_RDONLY);
    while (read(fd, &buff, 1) == 1)
        count++;
    store_map = (char *) malloc(sizeof(char) * (count + 1));
    close(fd); //closes the file descriptor and re-opens the file
    fd = open(map, O_RDONLY);
    read(fd, store_map, count);
    store_map[count] = '\0';
    return (store_map);
}

