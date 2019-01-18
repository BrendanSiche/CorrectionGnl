 #include <sys/types.h>
 #include <sys/stat.h>
 #include <fcntl.h>
 #include "./libft/libft.h"
 #include "get_next_line.h"

int		main(int argc, char **argv)
{
	int				fd1;
	int				fd2;
	int				i;
	char			*alias;

	fd1 = open(argv[1], O_RDWR);
	fd2 = open(argv[2], O_RDWR);
	i = 5;
	while (i > 0)
	{
		get_next_line(fd1, &alias);
		ft_putendl(alias);
		get_next_line(fd2, &alias);
		ft_putendl(alias);
		i--;
	}
	close(fd1);
	close(fd2);
	return (0);
}