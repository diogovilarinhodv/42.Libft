#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	inc;

	inc = 0;
	while (*(s + inc) != '\0')
	{
		if (*(s + inc) == (char)c)
			break ;
		inc++;
	}
	if (*(s + inc) != '\0' || c == '\0')
		return ((char *)(s + inc));
	return (NULL);
}
