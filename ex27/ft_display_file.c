/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:43:09 by coder             #+#    #+#             */
/*   Updated: 2022/09/03 23:25:22 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "my.h"

#define BUF_SIZE 4096

int	main(int argc, char **argv)
{
	int		file;
	int		read_file;
	char	buf[BUF_SIZE + 1];

	if (argc == 1)
		return (ft_putstr(2, "File name missing.\n"), 0);
	else if (argc > 2)
		return (ft_putstr(2, "Too many arguments.\n"), 0);
	file = open(argv[1], O_RDONLY);
	read_file = read(file, buf, BUF_SIZE);
	buf[read_file] = '\0';
	ft_putstr(1, buf);
	return (0);
}
