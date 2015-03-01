/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:19:30 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/01 23:37:03 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static void	print_help(t_env *e)
{
	attron(COLOR_PAIR(2));
	move(e->nb_lines - 3, 0);
	printw("Use up, down, right, left arrows to move.");
	move(e->nb_lines - 1, 0);
	printw("Press Echap to quit.");
	attroff(COLOR_PAIR(2));
}

void		draw_grid(t_env *e)
{
	int		i;

	getmaxyx(stdscr, e->nb_lines, e->nb_columns);
	print_help(e);
	attron(COLOR_PAIR(1));
	i = 0;
	move(0, 0);
	while (i < 5)
	{
		whline(stdscr, '-', e->cw * 4);
		i++;
		move(e->ch * i, 0);
	}
	i = 0;
	move(0, 0);
	while (i < 5)
	{
		wvline(stdscr, '|', e->ch * 4 + 1);
		i++;
		move(0, e->cw * i);
	}
	attroff(COLOR_PAIR(1));
}
