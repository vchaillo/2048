/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:19:30 by vchaillo          #+#    #+#             */
/*   Updated: 2015/02/28 01:20:56 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	draw_grid(void)
{
	int		nb_lines;
	int		nb_columns;
	int		i;

	getmaxyx(stdscr, nb_lines, nb_columns);
//	printw("\nlines : %d, columns : %d", nb_lines, nb_columns);
	i = 0;
	while (i <= 5)
	{
		whline(stdscr, '|', 1);
		move(1, nb_columns / 4 * i);
		i++;
	}
	i = 0;
	while (i <= 5)
	{
		whline(stdscr, '-', nb_columns);
		move(nb_lines / 4 * i, 0);
		i++;
	}
	nb_lines++;
}
