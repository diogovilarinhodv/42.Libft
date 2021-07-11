#include "libft.h"

static char	*allocate_one(void)
{
	char	*p;

	p = malloc(1);
	if (p == NULL)
		return (NULL);
	*p = '\0';
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	cnt;

	cnt = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (allocate_one());
	if (ft_strlen(s + start) < len)
		p = malloc(ft_strlen(s + start) + 1);
	else
		p = malloc(len + 1);
	if (p == NULL)
		return (NULL);
	while (cnt < len && *(s + cnt) != '\0')
	{
		*(p + cnt) = *(s + start + cnt);
		cnt++;
	}
	*(p + cnt) = '\0';
	return (p);
}
