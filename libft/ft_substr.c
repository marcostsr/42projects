/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/11/04 19:17:36 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Extracts a substring from a string.
 * @param const char *s
 * @param unsigned int start
 * @param size_t len.
 * @return char*
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*dest;
	char	*src;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	src = (char *)s;
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (0);
	j = 0;
	while (j < len)
	{
		dest[j] = src[start + j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
