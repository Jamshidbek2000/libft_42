/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:55:16 by jergashe          #+#    #+#             */
/*   Updated: 2023/01/26 08:30:30 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function trims the string "s1"
// from character inside string "set"
// and returns a new allocated string
int	ft_strcontains(const char *str, char ch)
{
	int	tmp;

	tmp = 0;
	while (str[tmp] != '\0')
	{
		if (str[tmp] == ch)
			return (1);
		tmp++;
	}
	return (0);
}

int	ft_strstart(const char *str, const char *set)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (ft_strcontains(set, str[n]))
			n++;
		else
			return (n);
	}
	return (n);
}

int	ft_strend(const char *str, const char *set)
{
	int	n;

	n = ft_strlen(str) - 1;
	while (n >= 0)
	{
		if (ft_strcontains(set, str[n]))
			n--;
		else
			return (n);
	}
	return (n);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = ft_strstart(s1, set);
	end = ft_strend(s1, set) + 1;
	if (start >= end)
		end = start + 1;
	res = (char *) malloc(sizeof(char) * (end - start + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, &s1[start], end - start + 1);
	return (res);
}
