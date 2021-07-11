#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cnt;

	cnt = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		cnt++;
	}
	return (cnt);
}
