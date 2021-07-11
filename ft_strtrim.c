#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	char		*p;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, *(s1 + start)) != NULL)
		start++;
	while (ft_strchr(set, *(s1 + end - 1)) != NULL)
		end--;
	p = ft_substr(s1, start, end - start);
	return (p);
}
