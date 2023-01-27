/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 07:11:47 by jergashe          #+#    #+#             */
/*   Updated: 2023/01/27 07:16:20 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_read_line(char **line)
{
	char	*buffer;
	char	input;
	int		bytes_read;
	int		buffer_index;

	buffer_index = 0;
	buffer = (char *)malloc(BUFFER_SIZE);
	if (!buffer)
		return (-1);
	bytes_read = read(0, &input, 1);
	while (bytes_read && input != '\n' && input != '\0')
	{
		buffer[buffer_index] = input;
		buffer_index++;
		bytes_read = read(0, &input, 1);
	}
	buffer[buffer_index] = '\0';
	*line = ft_strdup(buffer);
	free(buffer);
	return (buffer_index);
}
