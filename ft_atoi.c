/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:37:39 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/19 17:15:10 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function returns int version of a char *str
// First need to skip all the possible space chars
// Second take care of signs '-' and '+'
// Last get number part
int	ft_atoi(const char *str)
{
	int		count;
	long	result;
	int		sign;

	count = 0;
	result = 0;
	sign = 1;
	while (str[count] == '\r' || str[count] == '\t' || str[count] == ' '
		|| str[count] == '\f' || str[count] == '\v' || str[count] == '\n')
		count++;
	if (str[count] == '-')
	{
		sign = -1;
		count++;
	}
	else if (str[count] == '+')
		count++;
	if (ft_isdigit(str[count]) == 0)
		return (0);
	while (ft_isdigit(str[count]) != 0)
	{
		result = result * 10 + (str[count] - '0');
		count++;
	}
	return (result * sign);
}
