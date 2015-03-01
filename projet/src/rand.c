/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rand.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 21:44:32 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/01 18:11:40 by vchaillo         ###   ########.fr       */
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
	e->grid[line][column] = val;
	move(7, 1);
	printw("line = %d", line);
	move(8, 1);
	printw("column = %d", column);
	move(9, 1);
	printw("val = %d", val);
}
