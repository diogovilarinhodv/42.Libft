#include "libft.h"

static int	littleSize(const char *little)
{
	int	total_little;

	total_little = 0;
	while (*(little + total_little) != '\0')
		total_little++;
	return (total_little);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	inc_big;
	int	inc_little;
	int	total_little;

	inc_big = 0;
	inc_little = 0;
	total_little = littleSize(little);
	if (*little == '\0')
		return ((char *)big);
	while (*(big + inc_big) != '\0')
	{
		if (*(big + inc_big) == *(little + inc_little))
			inc_little++;
		else
		{
			inc_big -= inc_little;
			inc_little = 0;
		}
		if ((int)len <= inc_big && (int)len > -1)
			return (NULL);
		if (inc_little == total_little)
			return ((char *)(big + ((inc_big + 1) - total_little)));
		inc_big++;
	}
	return (NULL);
}
