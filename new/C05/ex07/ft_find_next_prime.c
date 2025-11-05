/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/08/19 12:23:52 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	aux;

	aux = nb;
	if (nb <= 2)
	{
		return (2);
	}
	i = 2;
	while (1)
	{
		if (aux % i == 0)
		{
			if (aux == i)
			{
				return (aux);
			}
			else
			{
				aux++;
				i = 2;
			}
		}
		i++;
	}
}
