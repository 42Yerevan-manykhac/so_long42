/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_var.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 20:23:43 by manykhac          #+#    #+#             */
/*   Updated: 2022/09/18 20:25:06 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	ft_var(char *result)
{
	t_var	counts;
	int		count_e;
	int		count_c;
	int		count_p;
	int		count_other;

	count_e = 0;
	count_c = 0;
	count_p = 0;
	count_other = 0;
	counts.count_e = count_e;
	counts.count_c = count_c;
	counts.count_e = count_e;
	counts.count_p = count_p;
	check_symbol(result, &counts);
}
