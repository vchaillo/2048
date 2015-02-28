/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 17:59:56 by vchaillo          #+#    #+#             */
/*   Updated: 2015/02/28 21:06:07 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	init_colors(void)
{
	start_color();
	init_pair(1, COLOR_GREEN, COLOR_GREEN);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	init_pair(1, COLOR_GREEN, COLOR_GREEN);
	init_pair(1, COLOR_GREEN, COLOR_GREEN);
	init_pair(1, COLOR_GREEN, COLOR_GREEN);
}
