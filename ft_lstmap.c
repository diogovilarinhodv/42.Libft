#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*s;
	t_list	*s_source;

	if (lst == NULL || f == NULL)
		return (NULL);
	s = ft_lstnew(f(lst->content));
	if (s == NULL)
		return (NULL);
	s_source = s;
	lst = lst->next;
	while (lst != NULL)
	{
		s->next = ft_lstnew(f(lst->content));
		if (s->next == NULL)
		{
			ft_lstclear(&s_source, del);
			return (NULL);
		}
		s = s->next;
		lst = lst->next;
	}
	s->next = NULL;
	return (s_source);
}
