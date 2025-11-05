/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/10/17 16:00:58 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	diff;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	diff = max - min;
	range = malloc(diff * 4);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
