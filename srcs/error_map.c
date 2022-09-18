/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:16:25 by manykhac          #+#    #+#             */
/*   Updated: 2022/09/18 17:19:24 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	error6(void)
{
	write(1, "Error: Exit for a map must be more than 1\n", 42);
	exit (EXIT_FAILURE);
}

void	error7(void)
{
	write(1, "Error: Collectible for a map must be 1 or more\n", 47);
	exit (EXIT_FAILURE);
}

void	error8(void)
{
	write(1, "Error: Starting position must be 1\n", 35);
	exit (EXIT_FAILURE);
}

void	error9(void)
{
	write(1, "Error: Maps width and height is incorrect\n", 42);
	exit (EXIT_FAILURE);
}

void	error10(void)
{
	write(1, "Error: Other symbol\n", 20);
	exit (EXIT_FAILURE);
}
