/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:14:42 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/19 17:41:28 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function copies n elements from array "src"
// to array "dst" and returns the first elements of
// "dst" or NULL if "dst" or "src" are NULL
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	count;
	char	*new_dst;
	char	*new_src;

	if (!dst && !src)
		return (NULL);
	new_dst = (char *)dst;
	new_src = (char *)src;
	count = 0;
	while (count < n)
	{
		new_dst[count] = new_src[count];
		count++;
	}
	return (dst);
}
