#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				cnt;
	unsigned char	*p;
	unsigned char	ch;

	p = (unsigned char *) s;
	ch = (unsigned char) c;
	cnt = 0;
	while (cnt < (int) n)
	{
		if (*(p + cnt) == ch)
			return ((void *)(p + cnt));
		cnt++;
	}
	return (NULL);
}
