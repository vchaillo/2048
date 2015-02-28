/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:15:53 by vchaillo          #+#    #+#             */
/*   Updated: 2015/02/28 16:43:58 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H
# include <curses.h>
# include "libft.h"

# define ESCAPE 27

enum	e_const
{
	WIN_VALUE = 2048
};

typedef struct	s_env
{
	int		nb_lines;
	int		nb_columns;
}				t_env;

void	draw_grid(t_env *e);
void	draw_menu(t_env *e);

#endif
