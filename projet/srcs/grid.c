/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:19:30 by vchaillo          #+#    #+#             */
/*   Updated: 2015/02/28 15:27:12 by jbarbie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	draw_grid(void)
{
	int		nb_lines;
	int		nb_columns;
	int		i;

	getmaxyx(stdscr, nb_lines, nb_columns);
	i = 0;
	while (i <= 5)
	{
		wvline(stdscr, '|', nb_lines / 4);
		move(1, (nb_columns / 4) * i);
		i++;
	}
	i = 0;
	while (i <= 5)
	{
		whline(stdscr, '-', nb_columns - (nb_columns % 4));
		move(nb_lines / 4 * i, 0);
		i++;
	}
	nb_lines++;
}
