/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 07:46:36 by jergashe          #+#    #+#             */
/*   Updated: 2023/01/25 07:46:58 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrt(int num)
{
	int	res;

	if (num < 4)
		return (1);
	res = 2;
	while (res * res < num)
		res++;
	if (res * res > num)
	{
		if ((res * res - num) < ((res - 1) * (res - 1) + (-num)))
			return (res);
	}
	return (res - 1);
}
