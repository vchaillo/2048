/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:02:56 by vchaillo          #+#    #+#             */
/*   Updated: 2015/02/28 16:31:54 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int		main(void)
{
	int		key;
	t_env	e;

	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
	start_color();
	init_pair(1, COLOR_GREEN, COLOR_GREEN);
	getmaxyx(stdscr, e.nb_lines, e.nb_columns);
	printw("Welcome to the best 2048 game!");
	move(2, 0);
	printw("Press a key to start the game");
	while ((key = getch()) != ESCAPE)
	{
		clear();
		draw_grid(&e);
	}
	endwin();
	return (0);
}
