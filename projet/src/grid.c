/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:19:30 by vchaillo          #+#    #+#             */
/*   Updated: 2015/02/28 21:36:02 by jbarbie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static void	print_help(t_env *e)
{
	move(e->nb_lines - 1, 0);
	printw("This is a fucking help: ← ↓ ↑ → Echap pour quitter et roule ta tete pour gagner !");
}

static void	get_size_case(t_env *e)
{
	e->case_h = ((e->nb_lines - 2) - (e->nb_lines % 4)) / 4;
	e->case_w = ((e->nb_columns - 1) - (e->nb_columns % 4)) / 4;
	if (e->case_w < 10 || e->case_h < 5)
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
		whline(stdscr, '-', e->case_w * 4);
		i++;
		move(e->case_h * i, 0);
	}
	i = 0;
	move(0, 0);
	while (i < 5)
	{
		wvline(stdscr, '|', e->case_h * 4 + 1);
		i++;
		move(0, e->case_w * i);
	}
	attroff(COLOR_PAIR(1));
}
