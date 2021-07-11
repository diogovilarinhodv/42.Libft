#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	inc;
	int	lastmatch;

	inc = 0;
	lastmatch = -1;
	while (*(s + inc) != '\0')
	{
		if (*(s + inc) == (char)c)
			lastmatch = inc;
		inc++;
	}
	if (c == '\0')
		return ((char *)(s + inc));
	if (lastmatch != -1)
		return ((char *)(s + lastmatch));
	return (NULL);
}
