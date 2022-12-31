/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:12:03 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/19 17:18:19 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function return pointer variable filled with \0
// The variable needs to have "count" number of "size" sized bytes 
void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (size > 0 && (SIZE_MAX / size) < count)
		return (NULL);
	res = malloc(size * count);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, size * count);
	return (res);
}
