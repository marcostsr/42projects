/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/10/29 14:22:17 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_end(char const *s, char c, int start)
{
	while (s[start])
	{
		if (s[start] == c)
			return (start);
		start++;
	}
	return (start);
}

char	**true_split(char **dest, char const *s, char c)
{
	int	start;
	int	end;
	int	i;
	int	j;
	int	w;

	j = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			end = is_end(s, c, start + 1);
			dest[j] = malloc((end - start + 1) * sizeof(char));
			if (!dest[j])
				return (NULL);
			w = 0;
			while (start < end)
			{
				dest[j][w] = s[start];
				w++;
				start++;
			}
			dest[j][w] = '\0';
			i = end;
			j++;
		}
		i++;
	}
	dest[j] = NULL;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		w;
	int		start;
	char	**dest;

	i = 0;
	j = 0;
	w = 0;
	start = 0;
	dest = malloc((ft_strlen(s) + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	dest = true_split(dest, s, c);
	return (dest);
}
