/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argc_argv.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:32:56 by manykhac          #+#    #+#             */
/*   Updated: 2022/09/18 16:35:34 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	check_argc_argv(int argc, char **argv)
{
	char	*str;

	if (argc == 1)
		error1();
	else if (argc == 2)
	{
		if (check_map_name(argv[1]) == 0)
			error2();
		else
		{
			str = argv[1];
			take_text(str);
		}
	}
	else
		error3();
}
