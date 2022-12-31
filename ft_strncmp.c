/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:48:05 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/19 18:44:36 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function compares "n" chars at most
// (or until '\0' of any of strings)
// and returns difference if there is one.
// Need to cast result in unsigned char
// so that '\200' is greater than '\0'
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	while (s1[count] != '\0' && s2[count] != '\0' && count < n)
	{
		if (s1[count] != s2[count])
		{
			return ((unsigned char) s1[count] - (unsigned char) s2[count]);
		}
		count++;
	}
	if (count < n)
		return ((unsigned char) s1[count] - (unsigned char) s2[count]);
	return (0);
}
