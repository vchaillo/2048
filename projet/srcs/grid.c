/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:19:30 by vchaillo          #+#    #+#             */
/*   Updated: 2015/02/28 16:48:29 by jbarbie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static void	get_size_case(t_env *e)
{
	e->case_h = e->nb_lines - (e->nb_lines % 4) / 4; 
	e->case_w = e->nb_columns - (e->nb_columns % 4) / 4; 
}

void	draw_grid(t_env *e)
{
	int		i;

	getmaxyx(stdscr, e->nb_lines, e->nb_columns);
	get_size_case(e);
	attron(COLOR_PAIR(1));
	i = 0;
	while (i <= 5)
	{
		whline(stdscr, '-', e->nb_columns - (e->nb_columns % 4));
		move(e->nb_lines / 4 * i, 0);
		i++;
	}
	i = 0;
	while (i <= 5)
	{
		wvline(stdscr, '|', e->nb_lines - (e->nb_lines % 5) + 1);
		move(0, (e->nb_columns / 4) * i);
		i++;
	}
	e->nb_lines++;
	attroff(COLOR_PAIR(1));
}
