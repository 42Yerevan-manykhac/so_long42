/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:25:43 by manykhac          #+#    #+#             */
/*   Updated: 2022/09/18 16:30:45 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libs/mlx/mlx.h"
# include <math.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_info
{
	void	*mlx_win;
	void	*mlx;
	int		height;
	int		width;
	char	*res;
	int		count_c;
}t_info;

typedef struct s_var
{
	int	count_e;
	int	count_c;
	int	count_p;
	int	count_other;
}t_var;

int		check_map_name(char *str);
void	ft_putnbr_fd(int n);
void	ft_putchar_fd(char c);
void	take_text(char *str);
void	error1(void);
void	error2(void);
void	error3(void);
void	error4(void);
void	error5(void);
void	check_argc_argv(int argc, char **argv);
void	check_symbol(char *result, t_var *counts);
void	error6(void);
void	error7(void);
void	error8(void);
void	check_map(char *result, int count_c);
void	error9(void);
void	check_wall1(char *result, int height, t_info *info);
void	check_wall2(char *result, int height, int width);
void	error10(void);
void	error11(void);
void	open_window(int height, int width, char *result, t_info *info);
void	create_wall(int i, int heigth, t_info *info);
void	create_exit(int i, int heigth, t_info *info);
void	create_empty(int i, int heigth, t_info *info);
void	create_coin(int i, int heigth, t_info *info);
void	create_person(int i, int heigth, t_info *info);
int		event_key(int key, t_info *info);
void	create_all( t_info *info);
void	check_up(t_info *info, int *count1);
void	check_down(t_info *info, int *count1);
void	check_right(t_info *info, int *count1);
void	check_left(t_info *info, int *count1);
int		close_prog(void);
void	take_text2(int size, char *str, int fd);
void	ft_var(char *result);
void	check_map2(char *result, t_info info, int height);

#endif
