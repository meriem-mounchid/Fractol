/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 15:14:48 by mmounchi          #+#    #+#             */
/*   Updated: 2019/10/30 22:39:47 by mmounchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	cmp(char *av)
{
	t_data w;

	if (ft_strcmp(av, "Julia") == 0)
		ft_julia(w);
	else if (ft_strcmp(av, "Mandelbrot") == 0)
		ft_mandelbrot(w);
	else if (ft_strcmp(av, "Burningship") == 0)
		ft_burningship(w);
	else if (ft_strcmp(av, "Sierpinski") == 0)
		printf("Sierpinski\n");
	else
		usage();
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		cmp(argv[1]);
	else
		usage();
	return (0);
}