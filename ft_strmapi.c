#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		inc_s;

	inc_s = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	p = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (p == NULL)
		return (NULL);
	while (*(s + inc_s) != '\0')
	{
		*(p + inc_s) = (*f)(inc_s, *(s + inc_s));
		inc_s++;
	}
	*(p + inc_s) = '\0';
	return (p);
}
