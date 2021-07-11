#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*psrc;
	unsigned char	*pdest;
	size_t			cnt;

	psrc = (unsigned char *)src;
	pdest = (unsigned char *)dest;
	cnt = 0;
	if (psrc == NULL && pdest == NULL)
		return (NULL);
	while (cnt < n)
	{
		*(pdest + cnt) = *(psrc + cnt);
		cnt++;
	}
	return (dest);
}
