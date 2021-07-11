#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*s;
	t_list	*temp;

	s = *lst;
	while (s != NULL)
	{
		temp = s->next;
		ft_lstdelone(s, del);
		s = temp;
	}
	*lst = NULL;
}
