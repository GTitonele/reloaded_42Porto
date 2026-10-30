/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 16:45:08 by gbaccell          #+#    #+#             */
/*   Updated: 2026/10/30 17:17:14 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*v;

	if (min >= max)
		return (NULL);
	size = max - min;
	v = malloc(sizeof(int) * size);
	if (v == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		v[i] = min;
		i++;
		min++;
	}
	return (v);
}
