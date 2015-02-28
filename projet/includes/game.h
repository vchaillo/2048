/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:15:53 by vchaillo          #+#    #+#             */
/*   Updated: 2015/02/28 15:36:08 by jbarbie          ###   ########.fr       */
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

void	draw_grid(void);

#endif
