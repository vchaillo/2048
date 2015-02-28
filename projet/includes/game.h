/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:15:53 by vchaillo          #+#    #+#             */
/*   Updated: 2015/02/28 00:18:36 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

#include <curses.h>
# include "../libft/includes/libft.h"

# define ESCAPE 27

enum	e_const
{
	WIN_VALUE = 2048
};

void	draw_grid(void);

#endif