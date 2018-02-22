#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*temp;

	temp = new;
	temp->next = *alst;
	*alst = temp;
}
