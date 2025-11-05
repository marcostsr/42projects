/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/08/07 20:22:52 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	count;

	if (nb == 0)
	{
		return (dest);
	}
	i = 0;
	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[count + i] = src[i];
		i++;
		if (i == nb)
		{
			break ;
		}
	}
	dest[count + i] = '\0';
	return (dest);
}
