

#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <unistd.h>

char	*ft_strstr( char *to_find, char *esse, char *str)
{
	int	i;
	int	n;
	int j;

	j = 0;
	i = 0;
	while (esse[i] != '\0')/*While is diffente than NULL*/
	{
		while(esse[i] != 0)/*While is diffente than NULL*/
		{
			if (esse[i] == to_find[0])/*While is diffente than NULL*/
			{
				n = 1;
				while (esse[i + n] == to_find[n] && esse[i] != 0)/*Find the number as char in tex.h*/
				{
					if (to_find[i + 1] == 0)
					{
						while (j < i)
						{
							str[j] = esse[i + j];
						}
						str = ft_stincpy(str , esse[i], i);
						return (str);/*Return a simple string after the number until \n in tex.h*/
					}
					n++;
				}
			}
		j++;
		}
	i++;
	}
	return (0);
}
