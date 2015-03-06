/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   win_loose.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 22:28:27 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/01 23:28:24 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static void		draw_victory(t_env *e, int key)
{
	clear();
	move(e->nb_lines / 3, (e->nb_columns / 2) - 4);
	printw("YOU WIN!");
	move((e->nb_lines / 3) + 2, (e->nb_columns / 2) - 23);
	printw("Press twice escape or space to quit or continue");
	key = getch();
	if (key == 32)
		e->state = CONTINUE;
	if (key == ESCAPE)
		e->state = QUIT;
}

static void		is_win(t_env *e, int key)
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (e->grid[i][j] == WIN_VALUE)
				draw_victory(e, key);
			j++;
		}
		i++;
	}
}

static void		draw_loose(t_env *e)
{
	clear();
	move(e->nb_lines / 3, (e->nb_columns / 2) - 5);
	printw("YOU LOOSE!");
	move((e->nb_lines / 3) + 2, (e->nb_columns / 2) - 15);
	printw("Press any key to quit the game");
}

static int		is_loose(t_env *e)
{
	int		i;
	int		j;
	int		jl;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			jl = e->grid[i][j];
			if (jl == 0 || e->grid[i][j + 1] == jl || e->grid[i + 1][j] == jl ||
					e->grid[i][j + 1] == 0 || e->grid[i + 1][j] == 0)
				return (FALSE);
			j++;
		}
		i++;
	}
	if (e->grid[3][3] == 0)
		return (FALSE);
	e->state = QUIT;
	draw_loose(e);
	return (TRUE);
}

void			check_state(t_env *e, int key)
{
	is_loose(e);
	if (e->state == PLAY)
		is_win(e, key);
}
