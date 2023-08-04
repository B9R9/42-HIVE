#include <stdio.h>
#include <unistd.h>

int ft_fibonacci(int index);

int main(void)
{
	int fibobifo;

	fibobifo = ft_fibonacci(50);
	printf("%d\n", fibobifo);
}