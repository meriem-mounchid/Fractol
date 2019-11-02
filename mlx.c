
#include "fractol.h"

void	ft_mandelbrot(t_data w)
{
	w.mlx_ptr = mlx_init();
	w.win_ptr = mlx_new_window(w.mlx_ptr, WIN_HEIGHT, WIN_WIDTH, "Fractol");
	w.img_ptr = mlx_new_image(w.mlx_ptr, WIN_WIDTH, WIN_HEIGHT);
	w.data = (int *)mlx_get_data_addr(w.img_ptr, &w.b, &w.size_l, &w.endian);
	graph_coplex_m(w);
	mlx_put_image_to_window(w.mlx_ptr, w.win_ptr, w.img_ptr, 0, 0);
	mlx_key_hook(w.win_ptr, &deal_key_m, &w);
	mlx_mouse_hook(w.win_ptr, &deal_mouse_m, &w);
	mlx_loop(w.mlx_ptr);
}

void	ft_julia(t_data w)
{
	w.mlx_ptr = mlx_init();
	w.win_ptr = mlx_new_window(w.mlx_ptr, WIN_HEIGHT, WIN_WIDTH, "Fractol");
	w.img_ptr = mlx_new_image(w.mlx_ptr, WIN_WIDTH, WIN_HEIGHT);
	w.data = (int *)mlx_get_data_addr(w.img_ptr, &w.b, &w.size_l, &w.endian);
	graph_coplex_j(w);
	mlx_put_image_to_window(w.mlx_ptr, w.win_ptr, w.img_ptr, 0, 0);
	mlx_key_hook(w.win_ptr, &deal_key_m, &w);
	mlx_mouse_hook(w.win_ptr, &deal_mouse_m, &w);
	mlx_loop(w.mlx_ptr);
}

void	ft_burningship(t_data w)
{
	w.mlx_ptr = mlx_init();
	w.win_ptr = mlx_new_window(w.mlx_ptr, WIN_HEIGHT, WIN_WIDTH, "Fractol");
	w.img_ptr = mlx_new_image(w.mlx_ptr, WIN_WIDTH, WIN_HEIGHT);
	w.data = (int *)mlx_get_data_addr(w.img_ptr, &w.b, &w.size_l, &w.endian);
	graph_coplex_b(w);
	mlx_put_image_to_window(w.mlx_ptr, w.win_ptr, w.img_ptr, 0, 0);
	mlx_key_hook(w.win_ptr, &deal_key_m, &w);
	mlx_mouse_hook(w.win_ptr, &deal_mouse_m, &w);
	mlx_loop(w.mlx_ptr);
}