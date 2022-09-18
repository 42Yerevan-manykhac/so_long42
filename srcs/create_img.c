/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:45:35 by manykhac          #+#    #+#             */
/*   Updated: 2022/09/18 18:12:18 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	create_person(int i, int heigth, t_info *info)
{
	void	*img5;
	char	*relative_path5;
	int		img_w;
	int		img_h;
	int		x;

	x = ((i - heigth) % (info->width)) * 50;
	relative_path5 = "./img/p.xpm";
	img5 = mlx_xpm_file_to_image(info->mlx, relative_path5, &img_w, &img_h);
	mlx_put_image_to_window(info->mlx, info->mlx_win, img5, x, heigth * 50);
}

void	create_coin(int i, int heigth, t_info *info)
{
	void	*img4;
	char	*relative_path4;
	int		img_w;
	int		img_h;
	int		x;

	x = ((i - heigth) % (info->width)) * 50;
	relative_path4 = "./img/coin.xpm";
	img4 = mlx_xpm_file_to_image(info->mlx, relative_path4, &img_w, &img_h);
	mlx_put_image_to_window(info->mlx, info->mlx_win, img4, x, heigth * 50);
}

void	create_empty(int i, int heigth, t_info *info)
{
	void	*img3;
	char	*relative_path3;
	int		img_w;
	int		img_h;
	int		x;

	x = ((i - heigth) % (info->width)) * 50;
	relative_path3 = "./img/0.xpm";
	img3 = mlx_xpm_file_to_image(info->mlx, relative_path3, &img_w, &img_h);
	mlx_put_image_to_window(info->mlx, info->mlx_win, img3, x, heigth * 50);
}

void	create_exit(int i, int heigth, t_info *info)
{
	void	*img2;
	char	*relative_path2;
	int		img_w;
	int		img_h;
	int		x;

	x = ((i - heigth) % info->width) * 50;
	relative_path2 = "./img/e.xpm";
	img2 = mlx_xpm_file_to_image(info->mlx, relative_path2, &img_w, &img_h);
	mlx_put_image_to_window(info->mlx, info->mlx_win, img2, x, heigth * 50);
}

void	create_wall(int i, int heigth, t_info *info)
{
	void	*img1;
	char	*relative_path1;
	int		img_w;
	int		img_h;
	int		x;

	x = ((i - heigth) % info->width) * 50;
	relative_path1 = "./img/wall.xpm";
	img1 = mlx_xpm_file_to_image(info->mlx, relative_path1, &img_w, &img_h);
	mlx_put_image_to_window(info->mlx, info->mlx_win, img1, x, heigth * 50);
}
