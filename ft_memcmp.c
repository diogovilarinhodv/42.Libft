#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			cnt;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	cnt = 0;
	if (n == 0)
		return (0);
	while (cnt < n)
	{
		if (*(p1 + cnt) != *(p2 + cnt))
			return (*(p1 + cnt) - *(p2 + cnt));
		cnt++;
	}
	return (0);
}
