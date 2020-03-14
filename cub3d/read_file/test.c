#include <mlx.h>

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int test(int key)
{
	printf ("%d\n", key);
	return (1);
}
int	main(void)
{
	void *p = mlx_init();
	void *w = mlx_new_window(p, 100, 100, "test");
	mlx_hook(w, 2, 1L<<0, test, (void*)0);
	mlx_loop(p);
	return (0);
}
