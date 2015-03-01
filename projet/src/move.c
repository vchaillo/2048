/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbie <jbarbie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 00:23:48 by jbarbie           #+#    #+#             */
/*   Updated: 2015/03/01 03:37:28 by jbarbie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	move_up(t_env *e)
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

void	move_down(t_env *e)
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

void	move_left(t_env *e)
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

void	move_right(t_env *e)
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
