/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_2d_char_array.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:42:57 by jergashe          #+#    #+#             */
/*   Updated: 2023/01/08 18:44:19 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_2d_char_array(char **array_2d)
{
	int	i;

	i = 0;
	while (array_2d[i] != NULL)
		ft_putstr_fd(array_2d[i++], 1);
}
