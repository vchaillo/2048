/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:02:56 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/01 22:26:46 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static int		check_win_value(void)
{
	int		jl;

	jl = 1;
	while (jl < WIN_VALUE)
		jl *= 2;
	if (jl != WIN_VALUE || WIN_VALUE == 1)
		return (FALSE);
	return (TRUE);
}

static int		get_size_case(t_env *e)
{
	e->ch = ((e->nb_lines - 2) - (e->nb_lines % 4)) / 4;
	e->cw = ((e->nb_columns - 1) - (e->nb_columns % 4)) / 4;
	if (e->cw < 10 || e->ch < 5)
		return (FALSE);
	return (TRUE);
}

static int		do_game(t_env *e, int key)
{
	clear();
	if (!(get_size_case(e)))
		return (FALSE);
	draw_grid(e);
	e->move = FALSE;
	if (e->init == FALSE)
	{
		movements(e, key);
		e->fusion = FALSE;
		check_fusion(e, key);
		if (e->fusion == TRUE)
			movements(e, key);
		if (e->move == TRUE)
			fill_rand_case(e);
	}
	color_cases(e);
	e->init = FALSE;
	return (TRUE);
}

int				main(void)
{
	int			key;
	t_env		e;
	int			val;

	initscr();
	raw();
	curs_set(0);
	keypad(stdscr, TRUE);
	noecho();
	init_colors();
	init_game(&e);
	getmaxyx(stdscr, e.nb_lines, e.nb_columns);
	draw_menu(&e);
	while ((key = getch()) != ESCAPE && check_win_value())
	{
		val = do_game(&e, key);
		if (val == FALSE)
			break ;
	}
	endwin();
	if (val == FALSE)
		write(2, "Window is too small\n", 20);
	if (!(check_win_value()))
		write(2, "Incorrect WIN_VALUE\n", 20);
	return (0);
}
