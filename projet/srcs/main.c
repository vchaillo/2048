/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:02:56 by vchaillo          #+#    #+#             */
/*   Updated: 2015/02/28 16:53:18 by jbarbie          ###   ########.fr       */
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
	while ((key = getch()) != ESCAPE)
	{
		clear();
		draw_grid(&e);
	}
	endwin();
	return (0);
}
