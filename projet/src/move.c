/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbie <jbarbie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 00:23:48 by jbarbie           #+#    #+#             */
/*   Updated: 2015/03/01 18:44:01 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static void		move_up(t_env *e)
{
	e->c.y = 1;
	e->c.x = 0;
	e->c.v = 1;
	while (e->c.x < 4)
	{
		while (e->c.y < 4)
		{
			while (e->grid[e->c.x][e->c.y - e->c.v] == 0)
			{
				e->grid[e->c.x][e->c.y - e->c.v] = e->grid[e->c.x][e->c.y];
				e->grid[e->c.x][e->c.y] = 0;
				e->c.v++;
			}
			if (e->grid[e->c.x][e->c.y - 1] == e->grid[e->c.x][e->c.y])
			{
				e->grid[e->c.x][e->c.y - 1] *= 2;
				e->grid[e->c.x][e->c.y] = 0;
			}
			e->c.y++;
		}
		e->c.y = 1;
		e->c.x++;
	}
}

static void		move_down(t_env *e)
{
	e->c.y = 2;
	e->c.x = 0;
	e->c.v = 1;
	while (e->c.x < 4)
	{
		while (e->c.y >= 0)
		{
			while (e->grid[e->c.x][e->c.y + e->c.v] == 0)
			{
				e->grid[e->c.x][e->c.y + e->c.v] = e->grid[e->c.x][e->c.y];
				e->grid[e->c.x][e->c.y] = 0;
				e->c.v++;
			}
			e->c.v = 1;
			if (e->grid[e->c.x][e->c.y + 1] == e->grid[e->c.x][e->c.y])
			{
				e->grid[e->c.x][e->c.y + 1] *= 2;
				e->grid[e->c.x][e->c.y] = 0;
			}
			e->c.y--;
		}
		e->c.y = 2;
		e->c.x++;
	}
}

static void		move_left(t_env *e)
{
	e->c.y = 0;
	e->c.x = 1;
	e->c.v = 1;
	while (e->c.y < 4)
	{
		while (e->c.x < 4)
		{
			while (e->grid[e->c.x - 1][e->c.y] == 0)
			{
				e->grid[e->c.x - 1][e->c.y] = e->grid[e->c.x][e->c.y];
				e->grid[e->c.x][e->c.y] = 0;
				e->c.v++;
			}
			if (e->grid[e->c.x - 1][e->c.y] == e->grid[e->c.x][e->c.y])
			{
				e->grid[e->c.x - 1][e->c.y] *= 2;
				e->grid[e->c.x][e->c.y] = 0;
			}
			e->c.x++;
		}
		e->c.x = 1;
		e->c.y++;
	}
}

static void		move_right(t_env *e)
{
	e->c.y = 0;
	e->c.x = 2;
	e->c.v = 1;
	while (e->c.y < 4)
	{
		while (e->c.x >= 0)
		{
			while (e->grid[e->c.x + 1][e->c.y] == 0)
			{
				e->grid[e->c.x + 1][e->c.y] = e->grid[e->c.x][e->c.y];
				e->grid[e->c.x][e->c.y] = 0;
				e->c.v++;
			}
			if (e->grid[e->c.x + 1][e->c.y] == e->grid[e->c.x][e->c.y])
			{
				e->grid[e->c.x + 1][e->c.y] *= 2;
				e->grid[e->c.x][e->c.y] = 0;
			}
			e->c.x--;
		}
		e->c.x = 2;
		e->c.y++;
	}
}

void			movements(t_env *e, int key)
{
	if (key == KEY_UP)
		move_up(e);
	if (key == KEY_DOWN)
		move_down(e);
	if (key == KEY_LEFT)
		move_left(e);
	if (key == KEY_RIGHT)
		move_right(e);
	fill_rand_case(e);
}
