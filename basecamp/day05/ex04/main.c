#include <unistd.h>
#include <stdio.h>
#include <string.h>

char		ft_strncpy(char *dest, char *src,unsigned int n);

int		main(void)
{
	
	char src[] = "Hello csigvciv";
	char dst []= "-----";

	// printf("This is the copy: %s\n", ft_strncpy(dest, src, unsigned int n);
	// printf("This is dest avant: %s\n", dst);
	// printf("This is strcopy version: %s\n", strcpy(dst, src));
	// printf("This is dest apres: %s\n", dst);

	printf("This is dest avant: %s\n", dst);
	// printf("This is dest avant: %c\n", ft_strncpy(dst,src));
	ft_strncpy(dst, src,2);
	printf("This is dest apres: %s\n", dst);

	// printf("This is ft_strcopy version: %s\n", ft_strncpy(dst, src));
}