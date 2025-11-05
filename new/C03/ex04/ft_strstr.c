/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/08/17 18:43:36 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	if (to_find[0] == 0)
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		n = 0;
		while (str[i + n] == to_find[n] && str[i + n] != '\0')
		{
			if (to_find[n + 1] == '\0')
			{
				return (str + i);
			}
			n++;
		}
		i++;
	}
	return (0);
}
