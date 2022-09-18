/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_text.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:26:34 by manykhac          #+#    #+#             */
/*   Updated: 2022/09/18 20:48:34 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	check_map2(char *result, t_info info, int height)
{
	int	i;
	int	width;

	width = 0;
	i = 0;
	while (result[i] != '\0')
	{
		if (result[i] == '\n')
		{
			height++;
			i++;
			if (info.width == width)
				width = 0;
			else
				error9();
		}
		width++;
		i++;
	}
	height++;
	info.height = height;
	check_wall1(result, height, &info);
}

void	check_map(char *result, int count_c)
{
	t_info	info;
	int		i;
	int		height;

	i = 0;
	height = 0;
	while (result[i] != '\n')
		i++;
	info.width = i;
	info.count_c = count_c;
	check_map2(result, info, height);
}

void	check_symbol(char *result, t_var *counts )
{
	int	i;

	i = 0;
	while (result[i++] != '\0')
	{
		if (result[i] == 'E')
			counts->count_e++;
		else if (result[i] == 'C')
			counts->count_c++;
		else if (result[i] == 'P')
			counts->count_p++;
		else if (result[i] != '0' && result[i] != '1' && result[i] != 'E'
			&& result[i] != 'C' && result[i] != 'P'
			&& result[i] != '\n' && result[i] != '\0')
			counts->count_other++;
	}
	if (counts->count_e < 1)
		error6();
	if (counts->count_c < 1)
		error7();
	if (counts->count_p != 1)
		error8();
	if (counts->count_other > 0)
		error10();
	check_map(result, counts->count_c);
}

void	take_text2(int size, char *str, int fd)
{
	char	*result;

	result = (char *)malloc((sizeof(char) * size));
	result[size - 1] = '\0';
	fd = open(str, O_RDONLY);
	read(fd, result, size);
	close(fd);
	ft_var(result);
}

void	take_text(char *str)
{
	int		len;
	int		fd;
	int		size;
	char	*ptr;

	size = 0;
	ptr = (char *)malloc((sizeof(char)));
	fd = open(str, O_RDONLY);
	if (fd == -1)
		error4();
	len = read(fd, ptr, 1);
	size++;
	if (len < 1)
		error5();
	while (len)
	{
		len = read(fd, ptr, 1);
		size++;
	}
	free(ptr);
	close(fd);
	take_text2(size, str, fd);
}
