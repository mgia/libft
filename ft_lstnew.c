/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 22:12:51 by mtan              #+#    #+#             */
/*   Updated: 2018/02/21 22:12:52 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//
// t_list	*ft_lstnew(void const *content, size_t content_size)
// {
// 	t_list	*temp;
//
// 	if (!(temp = (t_list *)malloc(sizeof(t_list))))
// 		return (NULL);
// 	if (!content)
// 	{
// 		temp->content = NULL;
// 		temp->content_size = 0;
// 	}
// 	else
// 	{
// 		if (!(temp->content = (void *)ft_memalloc(content_size)))
// 			return (NULL);
// 		ft_memcpy(temp->content, content, content_size);
// 		temp->content_size = content_size;
// 	}
// 	temp->next = NULL;
// 	return (temp);
// }

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*res;

	if ((res = (t_list *)malloc(sizeof(t_list))))
	{
		if (!content)
		{
			res->content = NULL;
			res->content_size = 0;
		}
		else
		{
			if (!(res->content = ft_memalloc(content_size)))
				return (NULL);
			res->content = ft_memcpy(res->content, content, content_size);
			res->content_size = content ? content_size : 0;
		}
		res->next = NULL;
	}
	return (res);
}
