#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*temp;

	if(!(temp = (t_list *)malloc(sizeof(t_list) * content_size)))
		return (NULL);
	if (!content)
	{
		temp->content = NULL;
		temp->content_size = 0;
	}
	else
	{
		if (!(temp->content = (void *)malloc(content_size)))
			return (NULL);
		ft_memcpy(temp->content, content, content_size);
		temp->content_size = content_size;

	}
	temp->next = NULL;
	return (temp);
}

// t_list		*ft_lstnew(void const *content, size_t content_size)
// {
// 	t_list	*new;
//
// 	if (!(new = (t_list *)malloc(sizeof(t_list) * content_size)))
// 		return (NULL);
// 	if (!content)
// 	{
// 		new->content = NULL;
// 		new->content_size = 0;
// 	}
// 	else
// 	{
// 		if (!(new->content = (void *)malloc(content_size)))
// 			return (NULL);
// 		ft_memcpy(new->content, content, content_size);
// 		new->content_size = content_size;
// 	}
// 	new->next = NULL;
// 	return (new);
// }
