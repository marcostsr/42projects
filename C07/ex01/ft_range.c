/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/08/19 18:14:21 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	diff;
	int	*range2;
	int	i;

	i = 0;
	diff = max - min;
	if (diff <= 0)
		return (0);
	range2 = malloc(diff * sizeof(int) + 1);
	while (i <= diff)
	{
		range2[i] = min + i;
		i++;
	}
	return (range2);
}
