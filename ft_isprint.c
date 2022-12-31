/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:04:18 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/19 17:21:53 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The function checks if a character "c" is printable or not
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
