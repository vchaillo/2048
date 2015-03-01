/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:15:53 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/01 02:59:40 by vchaillo         ###   ########.fr       */
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

typedef struct	s_coord
{
	int			x;
	int			y;
	int			v;
}				t_coord;

typedef struct	s_env
{
	int			nb_lines;
	int			nb_columns;
	int			case_h;
	int			case_w;
	int			grid[4][4];
	t_coord		c;
}				t_env;

void			draw_grid(t_env *e);
void			draw_menu(t_env *e);
void			init_colors(void);
void			init_game(t_env *e);
void			fill_rand_case(t_env *e);
void			game(t_env *e, int key);
void			move_up(t_env *e);
void			move_down(t_env *e);
void			move_left(t_env *e);
void			move_right(t_env *e);
void			color_cases(t_env *e);
void			paint_a_case(t_env *e, int x, int y, int val);

#endif
