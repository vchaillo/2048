/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:02:56 by vchaillo          #+#    #+#             */
/*   Updated: 2015/02/27 23:49:45 by vchaillo         ###   ########.fr       */
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
	printw("Hello 42");
	while ((key = getch()) != 27)
		printw("\n%d", key);
	endwin();
	start_game();
	return (0);
}
