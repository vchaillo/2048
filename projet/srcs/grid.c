/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:19:30 by vchaillo          #+#    #+#             */
/*   Updated: 2015/02/28 16:16:02 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	draw_grid(t_env *e)
{
	int		i;

	getmaxyx(stdscr, e->nb_lines, e->nb_columns);
	i = 0;
	while (i <= 5)
	{
		wvline(stdscr, '|', e->nb_lines / 4);
		move(1, (e->nb_columns / 4) * i);
		i++;
	}
	i = 0;
	while (i <= 5)
	{
		whline(stdscr, '-', e->nb_columns - (e->nb_columns % 4));
		move(e->nb_lines / 4 * i, 0);
		i++;
	}
	e->nb_lines++;
}
