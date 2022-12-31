/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:47:40 by jergashe          #+#    #+#             */
/*   Updated: 2022/12/31 18:57:14 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function located string "needle"
// inside string "haystack"
// It compares at most "len" chars
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < n)
	{
		if (needle[j] == haystack[i])
		{
			start = i;
			while (i + j < n && needle[j] && needle[j] == haystack[i + j])
				j++;
			if (needle[j] == '\0')
				return ((char *)haystack + start);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
