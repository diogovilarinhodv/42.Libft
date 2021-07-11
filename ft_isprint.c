int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (c);
	else
		return (0);
}
