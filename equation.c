/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 14:57:06 by mmounchi          #+#    #+#             */
/*   Updated: 2019/10/30 22:44:50 by mmounchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_z_mandelbrot(t_data *w, int i, int j)
{
	int z;
	double tmp;

	w->cr = w->x;
	w->ci = w->y;
	w->xr = w->x;
	w->yi = w->y;
	z = 0;
	while (w->xr * w->xr + w->yi * w->yi < 4 && z <= ITERATION)
	{
		tmp = w->xr;
		w->xr = w->xr * w->xr - w->yi * w->yi + w->cr;
		w->yi = 2 * w->yi * tmp + w->ci;
		z++;
	}
	if (z <= ITERATION)
		w->data[j * WIN_WIDTH + i] = z*LCOLOR;
	else
		w->data[j * WIN_WIDTH + i] = BLACK;
}

void	ft_z_julia(t_data *w, int i, int j)
{
	int z;
	double tmp;

	w->cr = 0.285;
	w->ci = 0.01;
	w->xr = w->x;
	w->yi = w->y;
	z = 0;
	while (w->xr * w->xr + w->yi * w->yi < 4 && z <= ITERATION)
	{
		tmp = w->xr;
		w->xr = w->xr * w->xr - w->yi * w->yi + w->cr;
		w->yi = 2 * w->yi * tmp + w->ci;
		z++;
	}
	if (z <= ITERATION)
		w->data[j * WIN_WIDTH + i] = z*LCOLOR;
	else
		w->data[j * WIN_WIDTH + i] = BLACK;
}

void	ft_z_burningship(t_data *w, int i, int j)
{
	int z;
	double tmp;

	w->cr = w->x;
	w->ci = w->y;
	w->xr = w->x;
	w->yi = w->y;
	z = 0;
	while (w->xr * w->xr + w->yi * w->yi < 4 && z <= ITERATION)
	{
		tmp = w->xr;
		w->xr = w->xr * w->xr - w->yi * w->yi + w->cr;
		w->yi = 2 * fabs(w->yi * tmp) + w->ci;
		z++;
	}
	if (z <= ITERATION)
		w->data[j * WIN_WIDTH + i] = z*LCOLOR;
	else
		w->data[j * WIN_WIDTH + i] = BLACK;
}