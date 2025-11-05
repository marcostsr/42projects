/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newputnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/08/21 15:24:57 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	aux;
	int	neg;
	int	i;

	i = 0;
	aux = 0;
	neg = 1;
	while (str[i] <= 32)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		aux = aux * 10 + str[i] - '0';
		i++;
	}
	return (neg * aux);
}

void	ft_putnbr2( int nb)
{
	long int	aux;
	long int	c;

	aux = nb;
	if (aux < 0)
	{
		write(1, "-", 1);
		aux = - aux;
	}
	if (aux >= 10)
		ft_putnbr2(aux / 10);
	c = aux % 10 + '0';
	write(1, &c, 1);
}

int	main (int argc, char **argv)
{
	int i;
	int n;

	i = 1;
	while ( i < argc)
	{
		n = ft_atoi(argv[i]);
		printf("\nAtoi:%d\n",n);
		ft_putnbr2(n);
		i++;
	}
	return(0);
}