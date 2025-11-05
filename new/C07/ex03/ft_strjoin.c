/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/08/20 17:35:14 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	t;

	t = 0;
	while (str[t] != '\0')
	{
		t++;
	}
	return (t);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (dest[count] != '\0')
		count++;
	while (src[i] != '\0')
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = '\0';
	return (dest);
}

void	stringconcatenete(int size, char *str, char **strs, char *sep)
{
	int	s;

	s = 0;
	while (s < size)
	{
		ft_strcat(str, strs[s]);
		if (s < size - 1)
			ft_strcat(str, sep);
		s++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		count;
	int		i;

	str = malloc(1);
	str[0] = '\0';
	i = 0;
	count = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
		count += (size - 1) * ft_strlen(sep);
	if (count <= 0 || size == 0)
		return (str);
	str = malloc((count + 1) * sizeof(char));
	stringconcatenete(size, str, strs, sep);
	return (str);
}

/*int main()
{
	char *strs[5] ={"Hello","world","!"};
	char sep[] = "  ,";
	
	printf("%s",ft_strjoin(3, strs, sep));
	
}*/