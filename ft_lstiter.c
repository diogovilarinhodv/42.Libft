#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*s;

	s = lst;
	while (s != NULL)
	{
		(f)(s->content);
		s = s->next;
	}
}
