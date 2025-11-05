/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/08/06 19:37:13 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	n;
	int	i;
	int	aux;

	i = 0;
	while (i < (size - 1))
	{
		n = i + 1;
		while (n < size)
		{
			if (tab[i] > tab[n])
			{
				aux = tab[i];
				tab[i] = tab[n];
				tab[n] = aux;
			}
			n++;
		}
		i++;
	}
}
