/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_close_window.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:12:57 by manykhac          #+#    #+#             */
/*   Updated: 2022/09/18 18:19:47 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	create_all(t_info *info)
{
	int	i;
	int	height;

	i = 0;
	height = 0;
	while (info->res[i] != '\0')
	{
		if (info->res[i] == '1')
			create_wall(i, height, info);
		else if (info->res[i] == 'E')
			create_exit(i, height, info);
		else if (info->res[i] == '0')
			create_empty(i, height, info);
		else if (info->res[i] == 'C')
			create_coin(i, height, info);
		else if (info->res[i] == 'P')
			create_person(i, height, info);
		else if (info->res[i] == '\n')
			height++;
		i++;
	}
}

int	close_prog(void)
{
	exit(EXIT_SUCCESS);
}

void	open_window(int h, int w, char *result, t_info *info)
{
	info->mlx = mlx_init();
	info->mlx_win = mlx_new_window(info->mlx, w * 50, h * 50, "So_long!");
	info->res = result;
	create_all(info);
	mlx_key_hook(info->mlx_win, event_key, info);
	mlx_hook(info->mlx_win, 17, 1L << 0, close_prog, &info);
	mlx_loop(info->mlx);
}
