/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:02:56 by vchaillo          #+#    #+#             */
/*   Updated: 2015/02/28 18:08:21 by vchaillo         ###   ########.fr       */
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
	init_colors();
	getmaxyx(stdscr, e.nb_lines, e.nb_columns);
	draw_menu(&e);
	while ((key = getch()) != ESCAPE)
	{
		clear();
		draw_grid(&e);
	}
	endwin();
	return (0);
}
