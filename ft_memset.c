#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			cnt;
	unsigned char	*ps;

	ps = (unsigned char *) s;
	cnt = 0;
	while (cnt < n)
	{
		*(ps + cnt) = (unsigned char) c;
		cnt++;
	}
	return (s);
}
