/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 22:26:10 by mmounchi          #+#    #+#             */
/*   Updated: 2019/10/30 22:44:53 by mmounchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

#include "mlx.h"
#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <stdlib.h>

#define WIN_HEIGHT 1000
#define WIN_WIDTH 1000
#define ITERATION 50
#define WHITE 0xFFD700
#define BLACK 0x000000
#define ZOOM 100
#define IMAX 2
#define IMIN -2
#define RMAX 2
#define RMIN -2
#define NCOLOR 51800/ITERATION
#define DCOLOR 0xFFB6C1/11
#define LCOLOR 0xFFF5EE
#define BWCOLOR 0x696969/5

typedef struct		s_data
{
	void			*mlx_ptr;
	void			*win_ptr;
	void			*img_ptr;
	int				*data;
	int				endian;
	int				size_l;
	int				b;
	double 			x;
	double 			y;
	double 			ci;
	double 			cr;
	double 			xr;
	double 			yi;
	double 			zoom;
}					t_data;

typedef struct		s_color
{
    int 			R[256];
    int 			G[256];
    int 			B[256];
} 					t_color;

void		ft_putchar(char c);
void		ft_putstr(char const *s);
void		usage(void);
void		cmp(char *av);
int			ft_strcmp(char const *s1, char const *s2);
int			deal_key_m(int key);
int			deal_mouse_m(int key);
void  		graph_coplex_m(t_data w);
void  		graph_coplex_j(t_data w);
void  		graph_coplex_b(t_data w);
void		ft_z_mandelbrot(t_data *w, int i, int j);
void		ft_z_julia(t_data *w, int i, int j);
void		ft_z_burningship(t_data *w, int i, int j);
void		ft_mandelbrot(t_data w);
void		ft_julia(t_data w);
void		ft_burningship(t_data w);

#endif