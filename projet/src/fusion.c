/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fusion.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbie <jbarbie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 19:46:26 by jbarbie           #+#    #+#             */
/*   Updated: 2015/03/01 20:16:10 by jbarbie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static void	fusion_up(t_env *e)
{
	int x;
	int y;

	x = 0;
	while (x < 4)
	{
		y = 1;
		while (y < 4)
		{
			if (e->grid[y][x] == e->grid[y - 1][x] && e->grid[y][x] != 0)
			{
				e->grid[y - 1][x] *= 2;
				e->grid[y][x] = 0;
			}
			y++;
		}
		x++;
	}
}

static void	fusion_down(t_env *e)
{
	int x;
	int y;

	x = 0;
	while (x < 4)
	{
		y = 2;
		while (y > 0)
		{
			if (e->grid[y][x] == e->grid[y + 1][x] && e->grid[y][x] != 0)
			{
				e->grid[y + 1][x] *= 2;
				e->grid[y][x] = 0;
			}
			y--;
		}
		x++;
	}
}

static void	fusion_left(t_env *e)
{
	int x;
	int y;

	y = 0;
	while (y < 4)
	{
		x = 1;
		while (x < 4)
		{
			if (e->grid[y][x] == e->grid[y][x - 1] && e->grid[y][x] != 0)
			{
				e->grid[y][x - 1] *= 2;
				e->grid[y][x] = 0;
			}
			x++;
		}
		y++;
	}
}

static void	fusion_right(t_env *e)
{
	int x;
	int y;

	y = 0;
	while (y < 4)
	{
		x = 2;
		while (x > 0)
		{
			if (e->grid[y][x] == e->grid[y][x + 1] && e->grid[y][x] != 0)
			{
				e->grid[y][x + 1] *= 2;
				e->grid[y][x] = 0;
			}
			x--;
		}
		y++;
	}
}


void		check_fusion(t_env *e, int key)
{
	if (key == KEY_UP)
		fusion_up(e);
	if (key == KEY_DOWN)
		fusion_down(e);
	if (key == KEY_LEFT)
		fusion_left(e);
	if (key == KEY_RIGHT)
		fusion_right(e);
}
