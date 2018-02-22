/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 17:40:55 by mtan              #+#    #+#             */
/*   Updated: 2018/02/21 17:41:09 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memalloc(size_t size)
// {
// 	unsigned char *ptr;
//
// 	ptr = NULL;
// 	if (size)
// 	{
// 		ptr = (unsigned char *)malloc(size);
// 		if (!ptr)
// 			return (NULL);
// 		while (size)
// 			ptr[--size] = 0;
// 	}
// 	return ((void *)ptr);
// }

void	*ft_memalloc(size_t size)
{
	void	*res;

	if ((res = malloc(size)))
		ft_bzero(res, size);
	return (res);
}
