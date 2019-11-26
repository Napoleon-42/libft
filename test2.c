#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "libft.h"

int main(int ac, char **av)
{

	/*char	test_mapi(unsigned int i, char c)
	{
		(void)i;
		if (c != '_')
			c = c - 32;
		return (c);
	}*/
	
	ft_strlen("he toi, cac vac");

	(void)ac;
	//printf("  atoi test: %d | \nMy fonction: %s |\n", 2147483646, ft_itoa(2147483646));
		
	//printf("\n substr result: %s", ft_substr(av[1], atoi(av[2]), atoi(av[3])));
	
	printf("String before: %s |\n String after: %s", av[1], ft_strtrim(av[1], av[2]));

	//printf("My strjoin result: %s", ft_strjoin(av[1], av[2]));
	char **lol;
	lol = ft_split(av[1], av[2][0]);
	printf("so here is the first and last word: | %s | %s |", lol[0], lol[6]);
	/*int fd;
	fd = open(av[1], O_APPEND | O_CREAT | O_WRONLY);
	printf("my fd = %d", fd);
	ft_putchar_fd('A', fd);
	ft_putendl_fd("", fd);
	ft_putnbr_fd(2147483648, fd);
	ft_putendl_fd("", fd);
	ft_putstr_fd("le test passe bien, lol", fd);
	ft_putendl_fd("", fd);
	ft_putendl_fd("le endl passe bien aussi lol", fd);
	ft_putstr_fd("test du $", fd);*/
	return 0;
}
