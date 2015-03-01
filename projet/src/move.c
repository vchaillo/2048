/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbie <jbarbie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 00:23:48 by jbarbie           #+#    #+#             */
/*   Updated: 2015/03/01 02:08:58 by jbarbie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	move_up(t_env *e)
{
	int	y;
	int	x;

	y = 1;
	x = 0;
	while (x < 4)
	{
		while (y < 4)
		{
			if (e->grid[x][y - 1] == 0)
			{
				e->grid[x][y - 1] = e->grid[x][y];
				e->grid[x][y] = 0;
			}
			else if (e->grid[x][y - 1] == e->grid[x][y])
			{
				e->grid[x][y - 1] *= 2;
				e->grid[x][y] = 0;
			}
			y++;
		}
		y = 1;
		x++;
	}		
}

void	move_down(t_env *e)
{
	int	y;
	int	x;

	y = 2;
	x = 0;
	while (x < 4)
	{
		while (y >= 0)
		{
			if (e->grid[x][y + 1] == 0)
			{
				e->grid[x][y + 1] = e->grid[x][y];
				e->grid[x][y] = 0;
			}
			else if (e->grid[x][y + 1] == e->grid[x][y])
			{
				e->grid[x][y + 1] *= 2;
				e->grid[x][y] = 0;
			}
			y--;
		}
		y = 2;
		x++;
	}
}

void	move_left(t_env *e)
{
		int	y;
	int	x;

	y = 1;
	x = 0;
	while (x < 4)
	{
		while (y < 4)
		{
			if (e->grid[x][y - 1] == 0)
			{
				e->grid[x][y - 1] = e->grid[x][y];
				e->grid[x][y] = 0;
			}
			else if (e->grid[x][y - 1] == e->grid[x][y])
			{
				e->grid[x][y - 1] *= 2;
				e->grid[x][y] = 0;
			}
			y++;
		}
		y = 1;
		x++;
	}
}

void	move_right(t_env *e)
{
	int	y;
	int	x;

	y = 1;
	x = 0;
	while (x < 4)
	{
		while (y < 4)
		{
			if (e->grid[x][y - 1] == 0)
			{
				e->grid[x][y - 1] = e->grid[x][y];
				e->grid[x][y] = 0;
			}
			else if (e->grid[x][y - 1] == e->grid[x][y])
			{
				e->grid[x][y - 1] *= 2;
				e->grid[x][y] = 0;
			}
			y++;
		}
		y = 1;
		x++;
	}
}
