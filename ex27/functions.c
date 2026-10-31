/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 10:57:34 by gbaccell          #+#    #+#             */
/*   Updated: 2026/10/31 11:30:04 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

int	ft_display(int fd)
{
	char	buffer[4096];
	int		ret;

	ret = read(fd, buffer, 4096);
	while (ret > 0)
	{
		write(1, buffer, ret);
		ret = read(fd, buffer, 4096);
	}
	if (ret == -1)
	{
		ft_putstr_fd("Cannot read file.\n", 2);
		return (1);
	}
	return (0);
}
