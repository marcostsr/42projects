/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/11/04 19:12:57 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_end(char const *s, char c, int start)
{
	int	len;

	len = (int)ft_strlen(s);
	while (start < len)
	{
		if (s[start] == c)
			return (start);
		start++;
	}
	return (len);
}

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**true_split(char **dest, char const *s, char c, int j)
{
	int	end;
	int	i;
	int	w;

	i = 0;
	while (i < (int)ft_strlen(s))
	{
		if (s[i] != c)
		{
			end = is_end(s, c, i);
			dest[j] = (char *)malloc((end - i + 1) * sizeof(char));
			if (!dest[j])
				return (NULL);
			w = 0;
			while (i < end)
				dest[j][w++] = s[i++];
			dest[j][w] = '\0';
			j++;
			i = end;
		}
		else
			i++;
	}
	dest[j] = NULL;
	return (dest);
}

/**
 * @brief Splits a string by a delimiter into an array of strings.
 * @param const char *s
 * @param char c
 * @return char** — array of substrings
 */
char	**ft_split(char const *s, char c)
{
	int		words;
	char	**dest;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	words = count_words(s, c);
	dest = (char **)malloc((words + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	if (words == 0)
	{
		dest[0] = NULL;
		return (dest);
	}
	if (!true_split(dest, s, c, 0))
	{
		while (i < words && dest[i])
			free(dest[i++]);
		free(dest);
		return (NULL);
	}
	return (dest);
}

/*
int main (void){

	char const *s = "^^^1^^2a,^^^^3^^^^--h^^^^";
	char c= '^';
	char **final = ft_split(s,c);
	
	for ( int i=0; i<count_words(s,c); i++)
		printf("%s\n", final[i]);

}*/