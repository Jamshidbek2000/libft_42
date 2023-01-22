/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:48:11 by jergashe          #+#    #+#             */
/*   Updated: 2023/01/22 09:13:58 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function writes a char "ch"
// to the console and returns 1
// as a number of chars were printed
int	ft_print_char(char ch)
{
	write(1, &ch, 1);
	return (1);
}
