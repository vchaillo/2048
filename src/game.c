/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 21:14:32 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/01 23:28:44 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void			init_game(t_env *e)
{
	int		i;
	int		j;

	i = 0;
	e->init = TRUE;
	e->state = PLAY;
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
