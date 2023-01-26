/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:13:29 by jergashe          #+#    #+#             */
/*   Updated: 2023/01/26 08:29:38 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function returns a 
// new allocated string (pointer to a 1 variable)
// where strings "s1" and "s2" are joined
// And puts "\0" in the end.
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*res;
	size_t	tmp1;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = (char *) malloc(size * sizeof(char));
	if (!res)
		return (NULL);
	tmp1 = 0;
	while (s1[tmp1] != '\0')
	{
		res[tmp1] = s1[tmp1];
		tmp1++;
	}
	ft_strlcpy(&res[tmp1], s2, size - tmp1);
	return (res);
}
