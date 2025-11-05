/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/11/04 18:52:53 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Sets a block of memory to zero.
 * @param void *s
 * @param num size_t n — memory block and number of bytes.
 * @return void
 */
void	ft_bzero(void *ptr, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		((char *)ptr)[i] = '\0';
		i++;
	}
}
