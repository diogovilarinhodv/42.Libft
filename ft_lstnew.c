#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*s;

	s = (t_list *) malloc(sizeof(t_list));
	if (s == NULL)
		return (NULL);
	s->content = content;
	s->next = NULL;
	return (s);
}
