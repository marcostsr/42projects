/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/11/04 20:37:10 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates and zeroes memory for an array.
 * @param size_t count
 * @param size_t size
 * @return void* — pointer to allocated memory.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*temp;

	if (size && nmemb > SIZE_MAX / size)
		return (malloc(0));
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	temp = malloc((nmemb) * size);
	if (!temp)
		return (NULL);
	ft_bzero(temp, nmemb * size);
	return (temp);
}
