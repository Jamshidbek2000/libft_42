/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:20:17 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/19 18:48:54 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// The function returns a pointer to a
// char "c" if it exists inside string "s"
// Otherwise returns NULL
char	*ft_strrchr(const char *s, int c)
{
	int		count;
	char	ch;
	char	*result;

	result = NULL;
	ch = c;
	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] == ch)
			result = (char *)&s[count];
		count++;
	}
	if (s[count] == ch)
		result = (char *)&s[count];
	return (result);
}
