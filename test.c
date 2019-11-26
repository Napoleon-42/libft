#include <string.h>
#include <stdio.h>
#include "ft_strdup.c"
#include "ft_calloc.c"
#include "ft_memset.c"
#include "ft_memmove.c"
#include "ft_memcmp.c"
#include "ft_strchr.c"
#include "ft_strnstr.c"
#include "ft_strlen.c"
#include "ft_strchr.c"

int main(int ac, const char **av)
{
	char src[] = "see FF your FF return FF now FF";
	char src1[] = "FF";
	char dest1[15];
	char dest2[15];
	dest1[14]=0;
	dest2[14]=0;
	(void)ac;
	printf("The strlen function: %d\n", ft_strlen(av[1]));

//	memmove(src + 5, src, 9);
	printf("True fonction: %s\n", strnstr(src, src1, strlen(src)));
//	ft_memmove(src1 + 5, src1, 9);
	printf("  My fonction: %s\n", ft_strnstr(src, src1, strlen(src)));
	/*int *array = ft_calloc(5, 16);
	array[2] = 2147483647;
	printf("my calloc array[2] %d, array[4] %d\n", array[2], array [4]);
	printf("True fonction: \n");
	printf("True fonction: %s | len:%d\n", av[1], strlen(av[1]));
	printf("  My fonction: %s | len:%d", ft_strdup(av[1]), strlen(ft_strdup(av[1])));*/
	return 0;
}
