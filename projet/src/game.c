/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 21:14:32 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/01 17:58:00 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void			init_game(t_env *e)
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			e->grid[i][j] = 0;
			j++;
		}
		i++;
	}
/*	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			printw("%d", e->grid[i][j]);
			j++;
			move(i, e->ch);
		}
		i++;
	}*/
	fill_rand_case(e);
	fill_rand_case(e);
/*	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			printw("%d", e->grid[i][j]);
			j++;
			move(i + 10, e->ch * 2);
		}
		i++;
	}*/
}

void			game(t_env *e, int key)
{
	(void)key;
	(void)e;
/*	if (key == KEY_UP)
		move_up(e);
	if (key == KEY_DOWN)
		move_down(e);
	if (key == KEY_LEFT)
		move_left(e);
	if (key == KEY_RIGHT)
		move_right(e);
	fill_rand_case(e);*/
}
