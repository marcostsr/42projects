/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/11/04 19:52:17 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	number_counter(long num)
{
	int	i;

	i = 1;
	if (num < 0)
		num = -num;
	while (num >= 10)
	{
		i++;
		num /= 10;
	}
	return (i);
}

/**
 * @brief Converts an integer to a string
 * @param int n — integer to convert
 * @return char* — newly allocated string
 */
char	*ft_itoa(int n)
{
	char	*dest;
	long	nb;
	int		len;

	nb = n;
	len = number_counter(nb);
	if (nb < 0)
	{
		nb = -nb;
		len = len + 1;
	}
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (0);
	dest[len] = '\0';
	while (len > 0)
	{
		dest[len - 1] = nb % 10 + '0';
		nb /= 10;
		len--;
	}
	if (n < 0)
		dest[0] = '-';
	return (dest);
}
