/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_orig.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/10/22 18:52:29 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_counter(char *dest, char *src)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	while (dest[i])
	{
		j=0;
		while (src[j])
		{
			if (dest[i] == src[j])
				count++;
			j++;
		}
		i++;
	}
	return(count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *dest;
	char *src;
	int i;
	int j;
	int n;
	int z;

	i = 0;
	dest = (char *)s1;
	src = (char *)set;
	z = ft_counter(dest,src);
	while (dest[i])
	{
		j = 0;
		while (set[j])
		{
			if ((dest[i] == src[j]))
			{
				n = i;
				while (dest[n])
				{
					
					dest[n] = dest[n + 1];
					n++;
					if (dest[n + 1] == '\0')
						dest[n] == '\0';
				}
				i--;
			}
			j++;
		}
		
		i++;
	}
	return(dest);
	
}

int main(void){
	char s1[] = "amtoCopia de mim nao comedia olha o abcd da xuxaamo";
	char set[] = "amo";
	char *final = ft_strtrim(s1,set);
	printf("%s",final);
	return(0);
}