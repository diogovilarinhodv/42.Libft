#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			cnt;
	unsigned char	*ps;

	cnt = 0;
	ps = (unsigned char *) s;
	while (cnt < n)
	{
		*(ps + cnt) = '\0';
		cnt++;
	}
}
