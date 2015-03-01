/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rand.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 21:44:32 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/01 21:06:17 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static	int		get_val(void)
{
	int		val;

	val = rand() % (5 - 2) + 2;
	if (val == 3)
		val = 2;
	return (val);
}

void			fill_rand_case(t_env *e)
{
	int		line;
	int		column;
	int		val;
	int		boobool;

	boobool = FALSE;
	srand(time(NULL));
	while (boobool == FALSE)
	{
		line = rand() % (4 - 0) + 0;
		column = rand() % (4 - 0) + 0;
		if (e->grid[line][column] == 0)
			boobool = TRUE;
	}
	val = get_val();
	e->grid[line][column] = val;
}
