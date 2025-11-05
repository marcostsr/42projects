/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/11/04 19:14:55 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Appends string src to dst, ensuring size limit.
 * @param *dst
 * @param const char *src
 * @param size_t size
 * @return size_t — total length of the string it tried to create.
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_leng;
	size_t	src_leng;
	size_t	i;

	dest_leng = ft_strlen(dest);
	src_leng = ft_strlen(src);
	if (size <= dest_leng)
		return (size + src_leng);
	i = 0;
	while (src[i] && i < size - dest_leng - 1)
	{
		dest[dest_leng + i] = src[i];
		i++;
	}
	dest[dest_leng + i] = '\0';
	return (dest_leng + src_leng);
}
