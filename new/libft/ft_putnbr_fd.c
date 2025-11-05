/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/11/04 19:12:38 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes an integer to a given file descriptor.
 * @param int n
 * @param int fd - file to write on
 * @return void
 */
void	ft_putnbr_fd(int n, int fd)
{
	long int	aux;
	char		c;

	aux = n;
	if (aux < 0)
	{
		aux = -aux;
		ft_putchar_fd('-', fd);
	}
	if (aux < 10)
	{
		c = aux + '0';
		ft_putchar_fd(c, fd);
	}
	if (aux >= 10)
	{
		ft_putnbr_fd(aux / 10, fd);
		c = aux % 10 + '0';
		ft_putchar_fd(c, fd);
	}
}
