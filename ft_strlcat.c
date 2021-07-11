#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	inc_dst;
	int	inc_src;
	int	start_dst_val;

	start_dst_val = ft_strlen(dst);
	inc_dst = ft_strlen(dst);
	inc_src = 0;
	if ((size_t)inc_dst > size)
		return (ft_strlen(src) + size);
	while (*(src + inc_src) != '\0' && (size_t) inc_dst < size)
	{
		*(dst + inc_dst) = *(src + inc_src);
		inc_src++;
		inc_dst++;
	}
	if ((size_t)inc_dst == size && inc_src != 0)
		*(dst + (inc_dst - 1)) = '\0';
	else
		*(dst + inc_dst) = '\0';
	return (ft_strlen(src) + (size_t)start_dst_val);
}
