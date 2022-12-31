/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:43:51 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/19 17:50:39 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function writes to a file under file descriptor "fd"
// the number "n"
void	ft_putnbr_fd(int n, int fd)
{
	long	new_n;

	new_n = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		new_n = new_n * (-1);
	}
	if (new_n >= 10)
	{
		ft_putnbr_fd(new_n / 10, fd);
	}
	ft_putchar_fd(new_n % 10 + '0', fd);
}
