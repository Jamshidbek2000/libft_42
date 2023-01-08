/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_2d_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:39:08 by jergashe          #+#    #+#             */
/*   Updated: 2023/01/08 18:44:08 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_2d_array(void **array_2d)
{
	int	i;

	if (array_2d == NULL)
		return ;
	i = 0;
	while (array_2d[i] != NULL)
	{
		if (array_2d[i] == NULL)
			return ;
		free(array_2d[i]);
		i++;
	}
	free(array_2d);
}
