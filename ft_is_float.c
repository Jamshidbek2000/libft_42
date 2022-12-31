/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_float.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 18:06:20 by jergashe          #+#    #+#             */
/*   Updated: 2022/12/31 18:07:39 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_float(char *str)
{
	if (!*str)
		return (0);
	if (*str == '-')
		if (!ft_isdigit(*(++str)))
			return (0);
	while (*str && *str != '.')
		if (!ft_isdigit(*str++))
			return (0);
	if (*str == '.')
	{
		if (!ft_isdigit(*(++str)))
			return (0);
		while (*str)
			if (!ft_isdigit(*str++))
				return (0);
	}
	return (1);
}
