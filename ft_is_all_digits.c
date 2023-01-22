/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_all_digits.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 08:04:27 by jergashe          #+#    #+#             */
/*   Updated: 2023/01/22 08:04:56 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_all_digits(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (ft_isdigit(str[index]) == 0 && ft_is_space_char(str[index]) == 0
			&& str[index] != '-' && str[index] != '+')
			return (0);
		index++;
	}
	return (1);
}
