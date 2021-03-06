/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:15:53 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/01 23:29:51 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

# include <curses.h>
# include <unistd.h>
# include <stdlib.h>
# include <time.h>

# define ESCAPE 27
# define FALSE 0
# define TRUE 1
# define CONTINUE 0
# define LOOSE 1
# define PLAY 3
# define QUIT 4

enum			e_const
{
	WIN_VALUE = 2048
};

typedef struct	s_env
{
	int			nb_lines;
	int			nb_columns;
	int			ch;
	int			cw;
	int			fusion;
	int			move;
	int			init;
	int			state;
	int			grid[4][4];
}				t_env;

void			draw_grid(t_env *e);
void			draw_menu(t_env *e);
void			init_colors(void);
void			init_game(t_env *e);
void			fill_rand_case(t_env *e);
void			movements(t_env *e, int key);
void			check_fusion(t_env *e, int key);
void			color_cases(t_env *e);
void			check_state(t_env *e, int key);
#endif
