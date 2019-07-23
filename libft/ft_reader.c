
#include "libft.h"

int	ft_reader(const int fd, int n)
{
	char	*w;
	int	i;

	w = NULL;
	i = 0;
	if (n == 0)
		while (get_next_line(fd, &w) != 0)
		{
			ft_putendl(w);
			ft_strdel(&w);
		}
	else
		while (i++ < n)
		{
			get_next_line(fd, &w);
			ft_putendl(w);
			ft_strdel(&w);
		}
	return (1);
}
