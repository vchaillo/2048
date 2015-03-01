/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rand.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 21:44:32 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/01 06:19:57 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static	int		get_val(void)
{
	int		val;
	int		a;
	int		b;

	a = 2;
	b = 5;
	srand(time(NULL));
	val = rand() % (b - a) + a;
	if (val == 3)
		val = 2;
	return (val);
}

void			fill_rand_case(t_env *e)
{
	int		a;
	int		b;
	int		line;
	int		column;
	int		val;

	a = 0;
	b = 4;
	srand(time(NULL));
	line = rand() % (b - a) + a;
	column = rand() % (b - a) + a;
	val = get_val();
	e->grid[0][0] = 16;
	e->grid[0][1] = 32;
	e->grid[0][2] = 64;
	e->grid[0][3] = 128;
	e->grid[1][0] = 256;
	e->grid[1][1] = 512;
	e->grid[1][2] = 1024;
	e->grid[3][3] = 512;
	//e->grid[line][column] = val;
	e->grid[3][0] = val;
	move(7, 1);
	printw("line = %d", line);
	move(8, 1);
	printw("column = %d", column);
	move(9, 1);
	printw("val = %d", val);
}
