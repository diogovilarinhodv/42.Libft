#include "libft.h"

static int	n_amount(int n, int fd)
{
	int	cnt;

	cnt = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write(fd, "-2147483648", 11);
			return (-1);
		}
		write(fd, "-", 1);
		n *= (-1);
	}
	while (n > 0)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

static int	mult(int amount)
{
	int	base;

	base = 1;
	while (amount > 0)
	{
		base *= 10;
		amount--;
	}
	return (base);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		amount;
	char	c;

	amount = n_amount(n, fd);
	if (n < 0)
		n = -n;
	if (amount == 0)
		write(fd, "0", 1);
	else if (amount > 0)
	{
		while (amount > 0)
		{
			c = (n / mult(amount - 1) + '0');
			write(fd, &c, 1);
			n %= mult(amount - 1);
			amount--;
		}
	}
}
