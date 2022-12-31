/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:20:10 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/19 17:53:24 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function return a double array of chars
// which is filled with strings. 
// The strings are taken from a string "s". 
// The delimeter "c" is where the string needs to be cut
int	ft_count_delimited_words(char *s, char c)
{
	int	count;
	int	boo;
	int	index;

	index = 0;
	count = 0;
	boo = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c)
			boo = 0;
		else if (s[index] != c && boo == 0)
		{
			count++;
			boo = -1;
		}
		index++;
	}
	return (count);
}

int	ft_len_till_delimeter(char *s, char c)
{
	int	count;

	count = 0;
	while (s[count] != c && s[count] != '\0')
		count++;
	return (count);
}

void	ft_free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		array[i] = NULL;
		i++;
	}
	free(array);
	array = NULL;
}

void	ft_final_split(char *s, char c, char **result, int size)
{
	int	index_word;
	int	index_s;
	int	tmp;

	index_s = 0;
	index_word = 0;
	while (index_word < size)
	{
		while (s[index_s] == c)
			index_s++;
		if (s[index_s] != '\0')
		{
			result[index_word] = malloc(sizeof(char)
					*(ft_len_till_delimeter((char *) &s[index_s], c) + 1));
			if (!result[index_word])
			{
				ft_free_array(result);
				return ;
			}
			tmp = 0;
			while (s[index_s] != '\0' && s[index_s] != c)
				result[index_word][tmp++] = s[index_s++];
			result[index_word++][tmp] = '\0';
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		size;

	if (!s)
		return (NULL);
	size = ft_count_delimited_words((char *)s, c);
	result = malloc(sizeof(char *) * (size + 1));
	if (!result)
		return (NULL);
	result[size] = NULL;
	ft_final_split((char *)s, c, result, size);
	return (result);
}
