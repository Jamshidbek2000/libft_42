/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:53:52 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/19 17:21:03 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The function checks if a character "c" is from ASCII table
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
