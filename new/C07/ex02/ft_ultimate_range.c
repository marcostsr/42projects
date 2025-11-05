/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/08/19 18:33:06 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	i;

	i = 0;
	diff = max - min;
	if (diff <= 0)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		(*range) = malloc(diff * sizeof(int));
		if (*range == 0)
		{
			*range = NULL;
			return (-1);
		}
		while (i < diff)
		{
			(*range)[i] = min + i;
			i++;
		}
		return (diff);
	}
}
