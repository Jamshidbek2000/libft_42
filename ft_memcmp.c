/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:35:44 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/19 17:39:09 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function compares at most "n" chars of 2 strings
// And return the difference or 0 if they are identical
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			count;
	unsigned char	*new_s1;
	unsigned char	*new_s2;

	if (!s1 && !s2)
	{
		return (0);
	}
	new_s1 = (unsigned char *)s1;
	new_s2 = (unsigned char *)s2;
	count = 0;
	while (count < n)
	{
		if (new_s1[count] != new_s2[count])
		{
			return (new_s1[count] - new_s2[count]);
		}
		count++;
	}
	return (0);
}
