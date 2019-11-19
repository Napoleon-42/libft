#include <string.h>
#include <stdio.h>
#include "ft_itoa.c"
#include "ft_substr.c"
#include "ft_strtrim.c"
#include "ft_strmapi.c"

int main(int ac, char **av)
{

	/*char	test_mapi(unsigned int i, char c)
	{
		(void)i;
		if (c != '_')
			c = c - 32;
		return (c);
	}*/
	//printf("\nresults: %s", ft_strmapi("salut_mec_c_pas_du_caps", &test_mapi));

	(void)ac;
	//printf("  atoi test: %d | \nMy fonction: %s |\n", 2147483646, ft_itoa(2147483646));
		
	//printf("\n substr result: %s", ft_substr(av[1], atoi(av[2]), atoi(av[3])));

	//printf("String before: %s |\n String after: %s", av[1], ft_strtrim(av[1], av[2]));
	
	return 0;
}
