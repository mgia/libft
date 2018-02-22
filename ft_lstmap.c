/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 22:11:05 by mtan              #+#    #+#             */
/*   Updated: 2018/02/21 22:11:16 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
