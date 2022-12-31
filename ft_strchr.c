/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:30:04 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/19 17:54:51 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function checks if a string "s" contains
// the char "c". If yes returns a pointer to it
// If no returns Null.
char	*ft_strchr(const char *s, int c)
{
	int		count;
	char	ch;

	ch = c;
	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] == ch)
			return ((char *)&s[count]);
		count++;
	}
	if (s[count] == ch)
		return ((char *)&s[count]);
	return (NULL);
}
