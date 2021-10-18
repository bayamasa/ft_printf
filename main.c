#include <stdio.h>
#include "ft_printf.h"

int main()
{
	// c
	printf("-----------------------\n");
	printf("ft return = %d\n", ft_printf("c = %c : ", 'a'));
	printf("real return = %d\n", printf("c = %c : ", 'a'));
	printf("-----------------------\n");
	// s
	printf("ft return = %d\n", ft_printf("s = %s : ", "hello world"));
	printf("real return = %d\n", printf("s = %s : ", "hello world"));
	printf("-----------------------\n");
	// d
	printf("ft return = %d\n", ft_printf("d = %d : ", INT_MIN));
	printf("real return = %d\n", printf("d = %d : ", INT_MIN));
	printf("-----------------------\n");
	// i
	printf("ft return = %i\n", ft_printf("d = %i : ", INT_MIN));
	printf("real return = %i\n", printf("d = %i : ", INT_MIN));
	printf("-----------------------\n");
	// u
	printf("ft return = %u\n", ft_printf("u = %u : ", UINT_MAX));
	printf("real return = %u\n", printf("u = %u : ", UINT_MAX));
	printf("-----------------------\n");
	// p
	int *a;
	int b = 100;
	a = &b;
	printf("ft return = %d\n", ft_printf("p = %p : ", a));
	printf("real return = %d\n", printf("p = %p : ", a));
	printf("-----------------------\n");
	// x
	printf("ft return = %d\n", ft_printf("x = %x : ", a));
	printf("real return = %d\n", printf("x = %x : ", a));
	printf("-----------------------\n");
	// X
	printf("ft return = %d\n", ft_printf("X = %X : ", a));
	printf("real return = %d\n", printf("X = %X : ", a));	
	printf("-----------------------\n");
	// %
	printf("ft return = %d\n", ft_printf("percent = %% : "));
	printf("real return = %d\n", printf("percent = %% : "));
	printf("-----------------------\n");
}
