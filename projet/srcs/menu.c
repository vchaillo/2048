/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 16:14:06 by vchaillo          #+#    #+#             */
/*   Updated: 2015/02/28 16:48:38 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	draw_menu(t_env *e)
{
	move(e->nb_lines / 2, e->nb_columns / 2);
	printw("Welcome to best 2048 game ever!");
	move(e->nb_lines / 2 + 2, e->nb_columns / 2);
	printw("Press any key to start the game");
}
