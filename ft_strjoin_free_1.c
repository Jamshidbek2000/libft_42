/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 18:16:06 by jergashe          #+#    #+#             */
/*   Updated: 2022/12/31 18:16:25 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free_1(char *s1, char *s2)
{
	size_t	size;
	char	*res;
	size_t	tmp1;
	size_t	tmp2;

	if (s1 == NULL)
	{
		s1 = malloc(1);
		s1[0] = '\0';
	}
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = (char *) malloc(size * sizeof(char));
	if (!res)
		return (NULL);
	tmp1 = -1;
	tmp2 = -1;
	while (s1[++tmp1] != '\0')
		res[tmp1] = s1[tmp1];
	while (s2[++tmp2] != '\0')
		res[tmp1 + tmp2] = s2[tmp2];
	res[tmp1 + tmp2] = '\0';
	free(s1);
	return (res);
}
