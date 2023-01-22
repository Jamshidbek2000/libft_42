/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:01:58 by jergashe          #+#    #+#             */
/*   Updated: 2023/01/22 09:12:40 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function prints unsigned decimal number "number"
// and retuns the length of it
int	ft_print_unsigned(unsigned int number)
{
	ft_putnbr_fd(number, 1);
	if (number == 0)
		return (1);
	return (get_len_num(number));
}
