/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 13:19:43 by gbaccell          #+#    #+#             */
/*   Updated: 2026/10/30 13:31:17 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

void	ft_putchar(char c);
/* {
	write (1, &c, 1);
} */

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}
/* int main ()
{
	ft_is_negative (0);
	ft_is_negative (-1);
	ft_is_negative (1);
	return (0);
} */