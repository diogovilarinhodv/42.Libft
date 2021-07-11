#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*s;

	s = lst;
	if (lst != NULL)
	{
		while (s->next != NULL)
			s = s->next;
		return (s);
	}
	else
		return (lst);
}
