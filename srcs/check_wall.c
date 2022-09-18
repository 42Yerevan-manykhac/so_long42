/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:41:38 by manykhac          #+#    #+#             */
/*   Updated: 2022/09/18 17:20:33 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	error11(void)
{
	write(1, "Error: Wall is invalid\n", 23);
	exit (EXIT_FAILURE);
}

void	check_wall2(char *result, int height, int width)
{
	int	i;

	i = 1;
	while (i <= height)
	{
		if (result[(i - 1) * (width + 1)] != '1')
			error11();
		i++;
	}
	i = 1;
	while (i <= height)
	{
		if (result[(i - 1) * (width + 1) + width - 1] != '1')
			error11();
		i++;
	}
}

void	check_wall1(char *result, int height, t_info *info)
{
	int	i;

	i = 0;
	while (i < info->width)
	{
		if (result[i] != '1')
			error11();
		i++;
	}
	i = height * info->width - height + 1;
	while (i < height * info->width + height - 1)
	{
		if (result[i] != '1')
			error11();
		i++;
	}
	check_wall2(result, height, info->width);
	open_window(height, info->width, result, info);
}
