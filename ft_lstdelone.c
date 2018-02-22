/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 22:11:05 by mtan              #+#    #+#             */
/*   Updated: 2018/02/21 22:11:16 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
// {
// 	t_list	*elem;
//
// 	if (alst)
// 	{
// 		elem = *alst;
// 		del(elem->content, elem->content_size);
// 		free(elem);
// 		*alst = NULL;
// 	}
// }

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst || !del)
		return ;
	if (alst && *alst)
	{
		if (del)
			del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
	}
}
