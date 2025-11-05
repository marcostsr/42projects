/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/11/04 20:26:59 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	cond1(unsigned char *dest2, unsigned char *src2, size_t i)
{
	while (i > 0)
	{
		dest2[i - 1] = src2[i - 1];
		i--;
	}
}

static void	cond2(unsigned char *dest2, unsigned char *src2, size_t i, size_t n)
{
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
}

/**
 * @brief Copies bytes between memory areas (handles overlapping)
 * @param void *dst
 * @param const void *src
 * @param size_t n
 * @return void* — destination pointer
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src2;
	unsigned char	*dest2;

	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (0);
	if (src2 < dest2 && dest2 < src2 + n)
		cond1(dest2, src2, n);
	else
		cond2(dest2, src2, 0, n);
	return (dest2);
}
