/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/08/14 21:37:41 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	i;
	long int	aux;
	long int	c;

	i = 0;
	aux = nb;
	if (aux < 0)
	{
		aux = -aux;
		write(1, "-", 1);
	}
	if (aux < 10)
	{
		c = aux + '0';
		write(1, &c, 1);
	}
	if (aux >= 10)
	{
		ft_putnbr(aux / 10);
		c = aux % 10 + '0';
		write(1, &c, 1);
	}
}
