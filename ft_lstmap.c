#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*curr;

	if (!lst || !(curr = ft_lstnew(NULL, 0)))
		return (NULL);
	curr = f(lst);
	head = curr;
	while (lst->next)
	{
		lst = lst->next;
		curr = f(lst);
		curr = curr->next;
	}
	return (head);
}
