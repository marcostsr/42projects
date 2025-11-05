

#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <unistd.h>

void	ft_atoi_letter(char *str)
{
	int	aux;
	int	i;

	i = 0;
	aux = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			i++;
		if (str[i] >= 'a' && str[i] <= 'z')
			write (1,str[i],1);
		i++; 
	}
}
