/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 15:05:53 by gbaccell          #+#    #+#             */
/*   Updated: 2026/10/30 15:14:22 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	count;

	count = 0;
	while (count * count <= nb)
	{
		if (count * count == nb)
			return (count);
		count++;
	}
	return (0);
}
