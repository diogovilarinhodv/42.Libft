#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*s;

	s = *lst;
	if (*lst != NULL)
	{
		while (s->next != NULL)
			s = s->next;
		s->next = new;
	}
	else
		*lst = new;
}
