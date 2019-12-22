#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <stdarg.h>
#include "libprintf.h"

int	main(void)
{
	printf("   %d\n", ft_printf("|%3.2d|", 10));
	printf("   %d\n", printf("|%3.2d|", 10));
	printf("------------------------------\n");
	printf("%d\n", ft_printf("|%-4.2d|", -10));
	printf("%d\n",    printf("|%-4.2d|", -10));
	printf("------------------------------\n");
	return (0);
} 
