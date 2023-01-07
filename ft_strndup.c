/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:07:21 by jergashe          #+#    #+#             */
/*   Updated: 2023/01/07 18:12:57 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*result;
	size_t	index;

	result = malloc(n + 1);
	if (result == NULL)
		return (NULL);
	index = 0;
	while (s[index] != '\0')
	{
		result[index] = s[index];
		index++;
	}
	result[index] = '\0';
	return (result);
}
