/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 17:59:56 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/01 18:05:21 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	init_colors(void)
{
	start_color();
	init_color(COLOR_WHITE, 300, 300, 300);
	init_color(COLOR_GREEN, 800, 800, 800);
	init_color(COLOR_BLUE, 1000, 1000, 800);
	init_color(COLOR_YELLOW, 1000, 1000, 600);
	init_color(COLOR_MAGENTA, 1000, 600, 200);
	init_color(COLOR_CYAN, 1000, 400, 0);
	init_color(COLOR_RED, 1000, 200, 0);
	init_pair(1, COLOR_WHITE, COLOR_WHITE);		//grid edges
	init_pair(2, COLOR_WHITE, COLOR_BLACK);		//menu strings
	init_pair(3, COLOR_BLACK, COLOR_GREEN);		//2, 128, 8192
	init_pair(4, COLOR_BLACK, COLOR_BLUE);		//4, 256, 16384
	init_pair(5, COLOR_BLACK, COLOR_YELLOW);	//8, 512, 32768
	init_pair(6, COLOR_BLACK, COLOR_MAGENTA);	//16, 1024, 65536
	init_pair(7, COLOR_BLACK, COLOR_CYAN);		//32, 2048, 131072
	init_pair(8, COLOR_BLACK, COLOR_RED);		//64, 4096

	attron(COLOR_PAIR(3));
	move(1, 1);
	printw("couleur du 2");
	attroff(COLOR_PAIR(3));

	attron(COLOR_PAIR(4));
	move(2, 1);
	printw("couleur du 4");
	attroff(COLOR_PAIR(4));

	attron(COLOR_PAIR(5));
	move(3, 1);
	printw("couleur du 8");
	attroff(COLOR_PAIR(5));

	attron(COLOR_PAIR(6));
	move(4, 1);
	printw("couleur du 16");
	attroff(COLOR_PAIR(6));

	attron(COLOR_PAIR(7));
	move(5, 1);
	printw("couleur du 32");
	attroff(COLOR_PAIR(7));

	attron(COLOR_PAIR(8));
	move(6, 1);
	printw("couleur du 64");
	attroff(COLOR_PAIR(8));

}
