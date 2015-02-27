/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:15:53 by vchaillo          #+#    #+#             */
/*   Updated: 2015/02/27 23:21:01 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

#include <curses.h>
# include "../libft/includes/libft.h"

enum	e_const
{
	WIN_VALUE = 2048
};

void	start_game(void);

#endif
