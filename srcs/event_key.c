/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_key.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:21:39 by manykhac          #+#    #+#             */
/*   Updated: 2022/09/18 17:44:42 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	check_left(t_info *info, int *count1)
{
	int	i;

	i = 0;
	while (info->res[i] != 'P')
		i++;
	if (info->res[i - 1] == 'E' && info->count_c == 0)
	{
		mlx_destroy_window(info->mlx, info->mlx_win);
		exit(EXIT_SUCCESS);
	}
	else if (info->res[i - 1] == '0' || info->res[i - 1] == 'C')
	{
		if (info->res[i - 1] == 'C')
			info->count_c = info->count_c - 1;
		info->res[i - 1] = 'P';
		info->res[i] = '0';
		(*count1)++;
		ft_putnbr_fd(*count1);
		write(1, "\n", 1);
		mlx_clear_window(info->mlx, info->mlx_win);
		create_all(info);
	}
}

void	check_right(t_info *info, int *count1)
{
	int	i;

	i = 0;
	while (info->res[i] != 'P')
		i++;
	if (info->res[i + 1] == 'E' && info->count_c == 0)
	{
		mlx_destroy_window(info->mlx, info->mlx_win);
		exit(EXIT_SUCCESS);
	}
	else if (info->res[i + 1] == '0' || info->res[i + 1] == 'C')
	{
		if (info->res[i + 1] == 'C')
			info->count_c = info->count_c - 1;
		info->res[i + 1] = 'P';
		info->res[i] = '0';
		(*count1)++;
		ft_putnbr_fd(*count1);
		write(1, "\n", 1);
		mlx_clear_window(info->mlx, info->mlx_win);
		create_all(info);
	}
}

void	check_down(t_info *info, int *count1)
{
	int	i;

	i = 0;
	while (info->res[i] != 'P')
		i++;
	if (info->res[i + info->width + 1] == 'E' && info->count_c == 0)
	{
		mlx_destroy_window(info->mlx, info->mlx_win);
		exit(EXIT_SUCCESS);
	}
	else if (info->res[i + info->width + 1] == '0'
		|| info->res[i + info->width + 1] == 'C')
	{
		if (info->res[i + info->width + 1] == 'C')
			info->count_c = info->count_c - 1;
		info->res[i + info->width + 1] = 'P';
		info->res[i] = '0';
		(*count1)++;
		ft_putnbr_fd(*count1);
		write(1, "\n", 1);
		mlx_clear_window(info->mlx, info->mlx_win);
		create_all(info);
	}
}

void	check_up(t_info *info, int *count1)
{
	int	i;

	i = 0;
	while (info->res[i] != 'P')
		i++;
	if (info->res[i - info->width - 1] == 'E' && info->count_c == 0)
	{
		mlx_destroy_window(info->mlx, info->mlx_win);
		exit(EXIT_SUCCESS);
	}
	if (info->res[i - info->width - 1] == '0'
		|| info->res[i - info->width - 1] == 'C')
	{
		if (info->res[i - info->width - 1] == 'C')
			info->count_c = info->count_c - 1;
		info->res[i - info->width - 1] = 'P';
		info->res[i] = '0';
		(*count1)++;
		ft_putnbr_fd(*count1);
		write(1, "\n", 1);
		mlx_clear_window(info->mlx, info->mlx_win);
		create_all(info);
	}
}

int	event_key(int key, t_info *info)
{
	static int	count1;

	if (key == 13 || key == 126)
		check_up(info, &count1);
	else if (key == 1 || key == 125)
		check_down(info, &count1);
	else if (key == 2 || key == 124)
		check_right(info, &count1);
	else if (key == 0 || key == 123)
		check_left(info, &count1);
	else if (key == 53)
	{
		mlx_destroy_window(info->mlx, info->mlx_win);
		exit(EXIT_SUCCESS);
	}
	return (0);
}
