/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:15:53 by vchaillo          #+#    #+#             */
/*   Updated: 2015/02/28 22:25:54 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

# include <curses.h>
# include <unistd.h>
# include <stdlib.h>
# include <time.h>

# define ESCAPE 27

enum			e_const
{
	WIN_VALUE = 2048
};

typedef struct	s_env
{
	int			nb_lines;
	int			nb_columns;
	int			case_h;
	int			case_w;
	int			grid[4][4];
}				t_env;

void			draw_grid(t_env *e);
void			draw_menu(t_env *e);
void			init_colors(void);
void			init_game(t_env *e);
void			fill_rand_case(t_env *e);

#endif
