/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 17:55:41 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/01 18:44:41 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static void		paint_case(t_env *e, int color, int line, int column)
{
	int		y;

	attron(COLOR_PAIR(color));
	y = 0;
	while (y < e->ch - 1)
	{
		whline(stdscr, ' ', e->cw - 1);
		y++;
		move((e->ch * line + 1) + y, (e->cw * column + 1));
	}
}

static void		paint_a_case_2(t_env *e, int x, int y, int val)
{
	if (val == 16 || val == 1024 || val == 65536)
	{
		paint_case(e, 6, y, x);
		move((e->ch * y + 1) + (e->ch / 2), (e->cw * x + 1) + (e->cw / 2));
		printw("%d", val);
		attroff(COLOR_PAIR(6));
	}
	if (val == 32 || val == 2048 || val == 131072)
	{
		paint_case(e, 7, y, x);
		move((e->ch * y + 1) + (e->ch / 2), (e->cw * x + 1) + (e->cw / 2));
		printw("%d", val);
		attroff(COLOR_PAIR(7));
	}
	if (val == 64 || val == 4096)
	{
		paint_case(e, 8, y, x);
		move((e->ch * y + 1) + (e->ch / 2), (e->cw * x + 1) + (e->cw / 2));
		printw("%d", val);
		attroff(COLOR_PAIR(8));
	}
}

static void		paint_a_case_1(t_env *e, int x, int y, int val)
{
	move(e->ch * y + 1, e->cw * x + 1);
	if (val == 2 || val == 128 || val == 8192)
	{
		paint_case(e, 3, y, x);
		move((e->ch * y + 1) + (e->ch / 2), (e->cw * x + 1) + (e->cw / 2));
		printw("%d", val);
		attroff(COLOR_PAIR(3));
	}
	if (val == 4 || val == 256 || val == 16384)
	{
		paint_case(e, 4, y, x);
		move((e->ch * y + 1) + (e->ch / 2), (e->cw * x + 1) + (e->cw / 2));
		printw("%d", val);
		attroff(COLOR_PAIR(4));
	}
	if (val == 8 || val == 512 || val == 32768)
	{
		paint_case(e, 5, y, x);
		move((e->ch * y + 1) + (e->ch / 2), (e->cw * x + 1) + (e->cw / 2));
		printw("%d", val);
		attroff(COLOR_PAIR(5));
	}
	else
		paint_a_case_2(e, x, y, val);
}

void			color_cases(t_env *e)
{
	int		x;
	int		y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (e->grid[y][x] == 0)
				x++;
			else
			{
				paint_a_case_1(e, x, y, e->grid[y][x]);
				x++;
			}
		}
		y++;
	}
}
