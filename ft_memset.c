/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:56:48 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/19 17:47:47 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function sets "n" bytes from "mem" to "c"
void	*ft_memset(void *b, int c, size_t len)
{
	size_t			count;
	unsigned char	*p;

	p = b;
	count = 0;
	while (count < len)
	{
		*p = c;
		p++;
		count++;
	}
	return (b);
}
