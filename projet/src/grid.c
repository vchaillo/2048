/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:19:30 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/01 21:34:53 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static void	print_help(t_env *e)
{
	move(e->nb_lines - 1, 0);
	printw("Up,Down,Right,Left,Echap.");
}

static void	get_size_case(t_env *e)
{
	e->ch = ((e->nb_lines - 2) - (e->nb_lines % 4)) / 4;
	e->cw = ((e->nb_columns - 1) - (e->nb_columns % 4)) / 4;
	if (e->cw < 10 || e->ch < 5)
	{
		endwin();
		write(2, "Window too small\n", 17);
		exit (0);
	}
}

void		draw_grid(t_env *e)
{
	int		i;

	getmaxyx(stdscr, e->nb_lines, e->nb_columns);
	get_size_case(e);
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
