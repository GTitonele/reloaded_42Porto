/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 10:50:07 by gbaccell          #+#    #+#             */
/*   Updated: 2026/10/31 11:29:21 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	main(int argc, char **argv)
{
	int	fd;
	int	result;

	if (argc < 2)
	{
		ft_putstr_fd("File name missing.\n", 2);
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr_fd("Too many arguments.\n", 2);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_fd("Cannot read file.\n", 2);
		return (1);
	}
	result = ft_display(fd);
	close(fd);
	return (result);
}
