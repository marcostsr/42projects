/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/08/20 15:04:57 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = 1;
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 || power == 0)
	{
		return (1);
	}
	while (power >= 1)
	{
		num = num * nb;
		power--;
	}
	return (num);
}
