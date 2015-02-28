/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:02:56 by vchaillo          #+#    #+#             */
/*   Updated: 2015/02/28 15:38:12 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int		main(void)
{
	int		key;

	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
	printw("Welcome to the best 2048 game!");
	move(2, 0);
	printw("Press a key to start the game");
	while ((key = getch()) != ESCAPE)
	{
		clear();
		draw_grid();
		printw("\n%d", key);
	}
	endwin();
	return (0);
}
