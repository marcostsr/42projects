/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/10/17 14:29:26 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	aux;

	i = 1;
	aux = 1;
	if (nb <= 0)
		return (0);
	while (aux < nb)
	{
		aux = i * i;
		if (aux > nb)
			return (0);
		if (aux == nb)
			return (i);
		i++ ;
	}
	return (0);
}
