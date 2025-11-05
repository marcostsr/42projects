/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/08/16 16:34:35 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dirent.h>
#include <string.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	aux;
	int	neg;
	int	i;

	i = 0;
	aux = 0;
	neg = 1;
	while (str[i] != '\0')
	{
		while (str[i] != 0)
		{
			if (str[i] >= '0' && str[i] <= '9')
			{
				aux = aux * 10 + str[i] - '0';
				if (str[i + 1] < '0' || str[i + 1] > '9' )
					break ;
			}
		}
		i++; 
	}
	return (neg * aux);
}
