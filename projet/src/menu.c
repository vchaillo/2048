/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 16:14:06 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/01 22:07:12 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	draw_menu(t_env *e)
{
	attron(COLOR_PAIR(2));
	move(e->nb_lines / 3, (e->nb_columns / 2) - 15);
	printw("Welcome to best 2048 game ever!");
	move(e->nb_lines / 3 + 2, (e->nb_columns / 2) - 18);
	printw("Press space button to start the game");
	attron(COLOR_PAIR(2));
}
