
#ifndef FRACTOL_H
# define FRACTOL_H

# include "minilibx-linux/mlx.h"
# include <stdio.h>
# include <stdlib.h>

# define WIDTH 800
# define HEIGHT 600
# define MAX_ITER 100

// 環境によってkeyに割り当てられている数字が異なる。
# define KEY_ESC 65307
# define KEY_PLUS 61
# define KEY_MINUS 45
# define KEY_LEFT 65361
# define KEY_RIHGT 65363
# define KEY_UP 65362
# define KEY_DOWN 65364

typedef struct s_data
{
    void	*mlx_ptr;
	void	*win_ptr;
    void	*img_ptr;
    char 	*addr;
	int		bpp;
    int		size_line;
    int		endian;
	double	scale;
	double	offset_x;
    double	offset_y;
}				t_data;

// mlx,window,imgを作成する関数
void	init_mlx(t_data *data);

// マンデルブロ集合を作る関数
void	put_pixel_to_image(t_data *data, int x, int y, int color);
int		get_color(int iter, int max);
void	draw_mandelbrot(t_data *data);

// ジュリア集合を作る関数
void	draw_julia(t_data *data, double c_re, double c_im);

#endif