#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			cnt;
	unsigned char	*psrc;
	unsigned char	*pdest;

	psrc = (unsigned char *)src;
	pdest = (unsigned char *)dest;
	cnt = 0;
	if (psrc == NULL && pdest == NULL)
		return (NULL);
	if (psrc > pdest)
	{
		while (cnt < n)
		{
			*(pdest + cnt) = *(psrc + cnt);
			cnt++;
		}
		return (dest);
	}
	while (n)
	{
		*(pdest + (n - 1)) = *(psrc + (n - 1));
		n--;
	}
	return (dest);
}
