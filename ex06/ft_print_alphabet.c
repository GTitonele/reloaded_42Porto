/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:27:29 by gbaccell          #+#    #+#             */
/*   Updated: 2026/10/30 12:44:35 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

void	ft_putchar(char c);
/* {
	write (1, &c, 1);
} */

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		ft_putchar (c);
		c += 1;
	}
}
/* int main ()
{
	ft_print_alphabet();
	return (0);
} */