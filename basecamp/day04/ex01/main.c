#include <stdio.h>

int ft_recursive_factorial(int nb);

int main(void)
{
	int i;
	long long int result;

	i = 5;

	result = ft_recursive_factorial(i);
	

	printf("%d\n",result);
	

	return(0);
}