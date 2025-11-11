/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/11/04 19:16:28 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares two strings up to n characters.
 * @param const char *s1
 * @param const char *s2
 * @param size_t n
 * @return int - (S1 - S2)
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	if (s1[0] == '\0' )
		return (-(unsigned char)s2[0]);
	if (s2[0] == '\0' )
		return ((unsigned char)s1[0]);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
	{
		i++;
		if (i == n)
			return ((unsigned char)s1[i - 1] - (unsigned char)s2[i - 1]);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
