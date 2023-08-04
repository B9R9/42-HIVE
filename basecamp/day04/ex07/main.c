#include <stdio.h>
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);

int main(void)
{
	int result;

	result = 1;
	result = ft_find_next_prime(224);
	

	printf("%d\n",result);

}