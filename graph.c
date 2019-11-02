#include "fractol.h"

void  graph_coplex_m(t_data w)
{
	int i;
	int j;
	double s1;
	double s2;

	i = 0;
	s1 = (double)WIN_HEIGHT/4;
	s2 = (double)WIN_HEIGHT/4;
	while (i < WIN_HEIGHT)
	{
		j = 0;
		while (j < WIN_WIDTH)
		{
			w.x = (double)i/s1 - 2;
			w.y = (double)j/s2 - 2;
			ft_z_mandelbrot(&w,i ,j);
			j++;
		}
		i++;
	}
}

void  graph_coplex_j(t_data w)
{
	int i;
	int j;
	double s1;
	double s2;

	i = 0;
	s1 = (double)WIN_HEIGHT/4;
	s2 = (double)WIN_HEIGHT/4;
	while (i < WIN_HEIGHT)
	{
		j = 0;
		while (j < WIN_WIDTH)
		{
			w.x = (double)i/s1 - 2;
			w.y = (double)j/s2 - 2;
			ft_z_julia(&w,i ,j);
			j++;
		}
		i++;
	}
}

void  graph_coplex_b(t_data w)
{
	int i;
	int j;
	double s1;
	double s2;

	i = 0;
	s1 = (double)WIN_HEIGHT/4;
	s2 = (double)WIN_HEIGHT/4;
	while (i < WIN_HEIGHT)
	{
		j = 0;
		while (j < WIN_WIDTH)
		{
			w.x = (double)i/s1 - 2;
			w.y = (double)j/s2 - 2;
			ft_z_burningship(&w,i ,j);
			j++;
		}
		i++;
	}
}