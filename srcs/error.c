/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:11:48 by manykhac          #+#    #+#             */
/*   Updated: 2022/09/18 17:14:19 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	error1(void)
{
	write(1, "Error: ./so_long [map-name]\n", 28);
	exit (EXIT_FAILURE);
}

void	error2(void)
{
	write(1, "Error: Your file must be [.ber]\n", 32);
	exit (EXIT_FAILURE);
}

void	error3(void)
{
	write(1, "Error: Must be 2 arguments\n", 27);
	exit (EXIT_FAILURE);
}

void	error4(void)
{
	write(1, "Error: Can't open that file\n", 28);
	exit (EXIT_FAILURE);
}

void	error5(void)
{
	write(1, "Error: File is empty\n", 21);
	exit (EXIT_FAILURE);
}
