#include <string.h>
#include <stdio.h>
#include "ft_strdup.c"
#include "ft_calloc.c"

int main(int ac, const char **av)
{
/*	char src[] = "Salut mon pote";
	char dest1[15];
	char dest2[15];
	
	printf("True fonction: \n");

	memset(src, 'A', 14);
	printf("True fonction: \n");
	ft_memset(src, 'A', 14);
	//dest1[14]=0;
	//dest2[14]=0;*/

	int *array = ft_calloc(5, 16);
	array[2] = 2147483647;
	printf("my calloc array[2] %d, array[4] %d\n", array[2], array [4]);
	printf("True fonction: \n");
	printf("True fonction: %s | len:%d\n", av[1], strlen(av[1]));
	printf("  My fonction: %s | len:%d", ft_strdup(av[1]), strlen(ft_strdup(av[1])));
	return 0;
}
