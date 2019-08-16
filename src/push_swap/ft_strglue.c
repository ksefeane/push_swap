
#include "../../inc/push_swap.h"

char	*ft_strglue(char **s)
{
	char	*w;
	char	*h;
	int	i;

	if (!s)
		return (NULL);
	w = ft_strnew(0);
	h = NULL;
	i = 0;
	while (s[i])
	{
		h = w;
		w = ft_strjoin(w, s[i]);
		free(h);
		h = w;
		w = ft_strjoin(w, "\n");
		free(h);
		i++;
	}
	return (w);
}
