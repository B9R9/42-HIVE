#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int        ft_atoi(char *str);

int        main(void)
{
printf("Real: %d\t My: %d\n", atoi("--1"), ft_atoi("--1"));
    printf("Real: %d\t My: %d\n", atoi("+-12"), ft_atoi("+-12"));
    printf("Real: %d\t My: %d\n", atoi("++12"), ft_atoi("++12"));
    printf("Real: %d\t My: %d\n", atoi("-+12"), ft_atoi("-+12"));
    printf("Real: %d\t My: %d\n", atoi("     12"), ft_atoi("     12"));
    printf("Real: %d\t My: %d\n", atoi("\t\v\f -12"), ft_atoi("\t\v\f -12"));
    printf("Real: %d\t My: %d\n", atoi("-     12"), ft_atoi("-     12"));
    printf("Real: %d\t My: %d\n", atoi("!-12"), ft_atoi("!-12"));
    printf("Real: %d\t My: %d\n", atoi("!12"), ft_atoi("!12"));
    printf("Real: %d\t My: %d\n", atoi("+12+12"), ft_atoi("+12+12"));
    printf("Real: %d\t My: %d\n", atoi("123456789"), ft_atoi("123456789"));
    printf("Real: %d\t My: %d\n", atoi("0"), ft_atoi("0"));
    printf("Real: %d\t My: %d\n", atoi("0123"), ft_atoi("0123"));
    printf("Real: %d\t My: %d\n", atoi("-01234"), ft_atoi("-01234"));
    printf("Real: %d\t My: %d\n", atoi("-2147483648"), ft_atoi("-2147483648"));
    printf("Real: %d\t My: %d\n", atoi("2147483647"), ft_atoi("2147483647"));
    printf("Real: %d\t My: %d\n", atoi("+12-12"), ft_atoi("+12-12"));
    printf("Real: %d\t My: %d\n", atoi("-12-12"), ft_atoi("-12-12"));
    printf("Real: %d\t My: %d\n", atoi(""), ft_atoi(""));
    printf("Real: %d\t My: %d\n", atoi(" "), ft_atoi(" "));
    printf("Real: %d\t My: %d\n", atoi("a"), ft_atoi("a"));
    printf("Real: %d\t My: %d\n", atoi("a1"), ft_atoi("a1"));
    printf("Real: %d\t My: %d\n", atoi("12a12"), ft_atoi("12a12"));
    printf("Real: %d\t My: %d\n", atoi("   12 12"), ft_atoi("   12 12"));
return (0);
}