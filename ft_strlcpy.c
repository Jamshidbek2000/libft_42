/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:00:37 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/19 18:32:13 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// dstsize > 0 because if user gives negative int
// the program will make it positive
// because size_t accepts only positive nums

#include "libft.h"

// The function copies "dstsize" number of chars from
// "scr" to "dst" and returns length of "src"
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	res;

	res = ft_strlen(src);
	count = 0;
	if (dstsize > 0)
	{
		while (src[count] != '\0' && count < dstsize - 1)
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = '\0';
	}
	return (res);
}
