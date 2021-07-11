#include "libft.h"

static int	count_splits(char const *s, char c)
{
	int	inc_s;
	int	result;

	inc_s = 0;
	result = 0;
	while (*(s + inc_s) != '\0')
	{
		if (*(s + inc_s) == c && *(s + (inc_s - 1)) != c && inc_s != 0)
			result++;
		inc_s++;
		if (*(s + inc_s) == '\0' && *(s + inc_s - 1) != c)
			result++;
	}
	return (result);
}

static char	**s_alloc(char **p, int y, int cnt)
{
	p[y] = (char *) malloc(sizeof(char) * (cnt + 1));
	if (p[y] == NULL)
		return (NULL);
	return (p);
}

static char	**s_allocater(char const *s, char c, char **p)
{
	int	inc_s;
	int	cnt;
	int	y;

	inc_s = 0;
	cnt = 0;
	y = 0;
	while (*(s + inc_s) != '\0')
	{
		if (*(s + inc_s) != c)
			cnt++;
		else if (*(s + inc_s - 1) != c && inc_s != 0)
		{
			if (!(s_alloc(p, y, cnt)))
				return (NULL);
			y++;
			cnt = 0;
		}
		if (*(s + inc_s) != c && *(s + inc_s + 1) == '\0')
			if (!(s_alloc(p, y, cnt)))
				return (NULL);
		inc_s++;
	}
	return (p);
}

static char	**s_attrib(char const *s, char c, char **p)
{
	int	inc_s;
	int	x;
	int	y;

	inc_s = 0;
	x = 0;
	y = 0;
	while (*(s + inc_s) != '\0')
	{
		if (*(s + inc_s) != c)
		{
			p[y][x] = *(s + inc_s);
			x++;
		}
		else if (*(s + inc_s - 1) != c && inc_s != 0)
		{
			p[y][x] = '\0';
			y++;
			x = 0;
		}
		if (*(s + inc_s + 1) == '\0' && *(s + inc_s) != c)
			p[y][x] = '\0';
		inc_s++;
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		n_splits;

	if (s == NULL)
		return (NULL);
	n_splits = count_splits(s, c);
	if (n_splits <= 0)
	{
		p = (char **) malloc(sizeof(char *) * 1);
		if (p == NULL)
			return (NULL);
		p[0] = NULL;
		return (p);
	}
	p = (char **) malloc(sizeof(char *) * (n_splits + 1));
	if (p == NULL)
		return (NULL);
	if (s_allocater(s, c, p) == NULL)
	{
		free(p);
		return (NULL);
	}
	s_attrib(s, c, p);
	p[n_splits] = NULL;
	return (p);
}
