#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	cnt;

	cnt = 0;
	if (s != NULL)
	{
		while (*(s + cnt) != '\0')
		{
			write(fd, (s + cnt), 1);
			cnt++;
		}
	}
}
