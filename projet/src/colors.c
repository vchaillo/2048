/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 17:59:56 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/01 18:10:49 by vchaillo         ###   ########.fr       */
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
	init_pair(1, COLOR_WHITE, COLOR_WHITE);
	init_pair(2, COLOR_WHITE, COLOR_BLACK);
	init_pair(3, COLOR_BLACK, COLOR_GREEN);
	init_pair(4, COLOR_BLACK, COLOR_BLUE);
	init_pair(5, COLOR_BLACK, COLOR_YELLOW);
	init_pair(6, COLOR_BLACK, COLOR_MAGENTA);
	init_pair(7, COLOR_BLACK, COLOR_CYAN);
	init_pair(8, COLOR_BLACK, COLOR_RED);
}
