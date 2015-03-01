/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 21:14:32 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/01 03:04:26 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	init_game(t_env *e)
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
	fill_rand_case(e);
	fill_rand_case(e);
}

void	game(t_env *e, int key)
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

void	color_cases(t_env *e)
{
	int		x;
	int		y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (e->grid[y][x] == 0)
				x++;
			else
				paint_a_case(e, x, y, e->grid[y][x]);
		}
		y++;
	}
}

void	paint_a_case(t_env *e, int x, int y, int val)
{
	(void)e;
	(void)x;
	(void)y;
	(void)val;
}
