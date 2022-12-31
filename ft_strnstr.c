/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:47:40 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/20 11:24:26 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function located string "needle"
// inside string "haystack"
// It compares at most "len" chars
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_haystack;
	size_t	len_needle;
	size_t	j;

	if (!haystack && len == 0)
		return (NULL);
	i = 0;
	len_haystack = ft_strlen(haystack);
	len_needle = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len_haystack && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && i + j < len
				&& haystack[i + j] != '\0' && needle[j] != '\0')
				j++;
			if (j == len_needle)
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
