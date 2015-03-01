/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rand.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 21:44:32 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/01 05:14:32 by vchaillo         ###   ########.fr       */
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

	(void)val;
	a = 0;
	b = 4;
	srand(time(NULL));
	line = rand() % (b - a) + a;
	srand(time(NULL));
	column = rand() % (b - a) + a;
	val = get_val();
	if (e->grid[line][column] != 0)
		fill_rand_case(e);
	else
	//	e->grid[line][column] = 2;
		e->grid[0][0] = 4;
}
