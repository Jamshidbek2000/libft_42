/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:43:20 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/19 19:29:52 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function creates a new string which contains "len" number of 
// chars from "start" position from string "s" and returns it
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	size;
	size_t	len_s;

	if (!s || len < 0)
		return (NULL);
	len_s = ft_strlen(s);
	if (len_s <= start)
	{
		res = malloc(sizeof(char));
		res[0] = '\0';
		return (res);
	}
	if (len_s - start < len)
		size = len_s - start + 1;
	else
		size = len + 1;
	res = (char *) malloc(sizeof(char) * (size));
	if (!res)
		return (NULL);
	ft_strlcpy(res, (const char *)&s[start], (size));
	return (res);
}
