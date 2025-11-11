/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/11/02 19:31:57 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Removes specified characters from the start and end of a string.
 * @param const char *s1
 * @param const char *set
 * @return char*
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		i;
	int		j;

	if (!set)
		return ((char *)s1);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	i = 0;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j]))
		j--;
	dest = ft_substr(s1, i, j - i + 1);
	return (dest);
}
