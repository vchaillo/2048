/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbie <jbarbie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 00:23:48 by jbarbie           #+#    #+#             */
/*   Updated: 2015/03/01 20:28:13 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static void		move_up(t_env *e)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	while (i++ < 4)
	{
		j = 0;
		while (j++ < 4)
		{
			if ((j + 1) < 4 && e->grid[j + 1][i] != 0)
			{
				tmp = j;
				while (tmp >= 0 && e->grid[tmp][i] == 0)
				{
					e->grid[tmp][i] = e->grid[tmp + 1][i];
					e->grid[tmp + 1][i] = 0;
					tmp--;
					j--;
				}
			}
		}
	}
}

static void		move_down(t_env *e)
{
	int		i;
	int		j;
	int		tmp;

	i = 4;
	while (--i >= 0)
	{
		j = 4;
		while (--j >= 0)
		{
			if ((j - 1) >= 0 && e->grid[j - 1][i] != 0)
			{
				tmp = j;
				while (tmp >= 0 && e->grid[tmp][i] == 0)
				{
					e->grid[tmp][i] = e->grid[tmp - 1][i];
					e->grid[tmp - 1][i] = 0;
					tmp++;
					j++;
				}
			}
		}
	}
}

static void		move_left(t_env *e)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	while (i++ < 4)
	{
		j = 0;
		while (j++ < 4)
		{
			if ((j + 1) < 4 && e->grid[i][j + 1] != 0)
			{
				tmp = j;
				while (tmp >= 0 && e->grid[i][tmp] == 0)
				{
					e->grid[i][tmp] = e->grid[i][tmp + 1];
					e->grid[i][tmp + 1] = 0;
					tmp--;
					j--;
				}
			}
		}
	}
}

static void		move_right(t_env *e)
{
	int		i;
	int		j;
	int		tmp;

	i = 4;
	while (--i >= 0)
	{
		j = 4;
		while (--j >= 0)
		{
			if ((j - 1) >= 0 && e->grid[i][j - 1] != 0)
			{
				tmp = j;
				while (tmp < 4 && e->grid[i][tmp] == 0)
				{
					e->grid[i][tmp] = e->grid[i][tmp - 1];
					e->grid[i][tmp - 1] = 0;
					tmp++;
					j++;
				}
			}
		}
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
}
