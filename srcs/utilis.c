/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:18:21 by manykhac          #+#    #+#             */
/*   Updated: 2022/09/18 18:18:33 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	ft_putchar_fd(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_fd(int n)
{
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar_fd('-');
		nb = -n;
	}
	else
		nb = n;
	if (nb >= 10)
		ft_putnbr_fd(nb / 10);
	ft_putchar_fd((char)(nb % 10 + 48));
}
