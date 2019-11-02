/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deal_key.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 22:26:10 by mmounchi          #+#    #+#             */
/*   Updated: 2019/10/30 22:44:53 by mmounchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		deal_key_m(int key)
{
	if (key == 53)
		exit (1);
	else if (key == 126)
		printf("move: ^^\n");
	else if (key == 125)
		printf("move: vv\n");
	else if (key == 123)
		printf("move: <<\n");
	else if (key == 124)
		printf("move: >>\n");
	else if (key == 2)
		printf("To Darkness\n");
	else if (key == 37)
		printf("To Lightness\n");
	else if (key == 45)
		printf("To Normal\n");
	else if (key == 26)
		printf("B&W\n");
	return (0);
}

int		deal_mouse_m(int key)
{
	if (key == 5)
		printf("ZOOM(+)\n");
	else if (key == 4)
		printf("ZOOM(-)\n");
	return (0);
}

void	usage(void)
{
	ft_putstr("Usage:./fractol [fract_name]\n");
	ft_putstr("		1- Julia\n");
	ft_putstr("		2- Mandelbrot\n");
	ft_putstr("		3- Burningship\n");
	ft_putstr("		4- Sierpinski\n");
	return ;
}