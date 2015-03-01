/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:02:56 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/01 20:30:57 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int		main(void)
{
	int		key;
	t_env	e;

	initscr();
	raw();
	curs_set(0);
	keypad(stdscr, TRUE);
	noecho();
	init_colors();
	init_game(&e);
	getmaxyx(stdscr, e.nb_lines, e.nb_columns);
	draw_menu(&e);
	while ((key = getch()) != ESCAPE)
	{
		clear();
		draw_grid(&e);
		movements(&e, key);
		e->fusion = FALSE;
		check_fusion(&e, key);
		if (e->fusion == TRUE)
			movements(&e, key);
		fill_rand_case(&e);
		color_cases(&e);
	}
	endwin();
	return (0);
}
