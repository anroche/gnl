/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 14:24:46 by anroche           #+#    #+#             */
/*   Updated: 2017/03/11 12:49:07 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "libft/libft.h"

int	get_next_line(int const fd, char **line);

int main(int ac, char **av)
{
	int fd;
	int val;
	int i;
	char *line;
	int ret = 0;
	ac = 0;

	val = 1;
	i = 1;
	fd = 0;
	line = NULL;
	fd = open(av[1], O_RDONLY);
	ret = get_next_line(fd, &line);

	ft_putstr("\n");
	ft_putnbr(ret);
	ft_putstr("|");
	ft_putstr(line);
	ft_putstr("|\n");


	ft_putstr("\n\n\n\n\ngnl2\n");
    ret = get_next_line(fd, &line);
	
	ft_putstr("\n");
	ft_putnbr(ret);
	ft_putstr("|");
	ft_putstr(line);


	close(fd);
	return (0);
}	
