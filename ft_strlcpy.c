#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	inc;

	inc = 0;
	if (dst == NULL && src == NULL)
		return (0);
	while (*(src + inc) != '\0' && (size_t)inc < size)
	{
		*(dst + inc) = *(src + inc);
		inc++;
	}
	if ((size_t) inc == size && inc != 0)
		*(dst + (inc - 1)) = '\0';
	else if (size != 0)
		*(dst + inc) = '\0';
	return (ft_strlen(src));
}
