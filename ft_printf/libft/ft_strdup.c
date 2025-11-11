/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/11/02 17:16:06 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Duplicates a string.
 * @param const char *s1.
 * @return char* — newly allocated duplicate.
 */
char	*ft_strdup(const char *s1)
{
	char	*dest;
	char	*src;
	int		i;

	src = (char *)s1;
	i = ft_strlen(s1);
	dest = malloc((i + 1) * sizeof(char));
	if (!dest)
		return (0);
	dest[i] = '\0';
	while (i > 0)
	{
		dest[i - 1] = src[i - 1];
		i--;
	}
	return (dest);
}
