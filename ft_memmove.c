/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:53:42 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/19 17:47:11 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function copies "len" number of elements from "src" to
// "dst". The function allows overlaping and deal with them.
// The function returns a pointer to a first element of "dst"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	count;
	char	*new_dst;
	char	*new_src;

	if (!src && !dst)
		return (NULL);
	new_src = (char *)src;
	new_dst = (char *)dst;
	count = 0;
	if (new_dst > new_src)
	{
		while (count < len)
		{
			new_dst[len - 1 - count] = new_src[len - 1 - count];
			count++;
		}
		return ((void *)new_dst);
	}
	while (count < len)
	{
		new_dst[count] = new_src[count];
		count++;
	}
	return ((void *)new_dst);
}
