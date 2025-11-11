/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/11/04 19:14:42 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatenates two strings into a new string.
 * @param const char *s1 - first string
 * @param const char *s2 - second string 
 * @return char* - the new string
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;
	int		j;
	int		z;

	z = 0;
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	dest = malloc((i + j + 1) * sizeof(char));
	if (!dest)
		return (0);
	while (z < i)
	{
		dest[z] = s1[z];
		z++;
	}
	z = 0;
	while (z < j)
	{
		dest[z + i] = s2[z];
		z++;
	}
	dest[z + i] = '\0';
	return (dest);
}
