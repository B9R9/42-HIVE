#include <unistd.h>
#include <stdio.h>
#include <string.h>

char		*ft_strcpy(char *dest, char *src);

int		main(void)
{
	
	char src[] = "Hello";
	char dst []= "-----";

	// printf("This is the copy: %s\n", ft_strncpy(dest, src, unsigned int n);
	// printf("This is dest avant: %s\n", dst);
	// printf("This is strcopy version: %s\n", strcpy(dst, src));
	// printf("This is dest apres: %s\n", dst);

	printf("This is dest avant: %s\n", dst);
	// printf("This is dest avant: %c\n", ft_strncpy(dst,src));
	ft_strcpy(dst, src);
	printf("This is dest apres: %s\n", dst);

	// printf("This is ft_strcopy version: %s\n", ft_strncpy(dst, src));
}