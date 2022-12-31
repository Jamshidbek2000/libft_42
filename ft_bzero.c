/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:55:44 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/19 17:16:04 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function takes a pointer variable 
// And fills it with n \0 value
void	ft_bzero(void *s, size_t n)
{
	size_t	count;
	char	*c;

	count = 0;
	c = (char *)s;
	while (count < n)
	{
		c[count] = '\0';
		count++;
	}
}
