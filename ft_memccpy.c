#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			cnt;
	unsigned char	*psrc;
	unsigned char	*pdest;

	cnt = 0;
	psrc = (unsigned char *)src;
	pdest = (unsigned char *)dest;
	while (cnt < n)
	{
		*(pdest + cnt) = *(psrc + cnt);
		if ((unsigned char) c == *(psrc + cnt))
			return ((dest + cnt + 1));
		cnt++;
	}
	return (NULL);
}
