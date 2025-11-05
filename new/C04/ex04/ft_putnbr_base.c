/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/08/18 16:13:55 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	know_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[i] == 0 || str[i + 1] == 0)
		return (0);
	while (str[i] != 0)
	{
		j = i + 1;
		if (str[i] == '+' || str[i] == '-')
			return (0);
		while (str[j] != 0)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	neg_base(int nbr, int basen, int i, int rest[])
{
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		rest[i] = nbr % basen;
		nbr = nbr / basen;
		nbr = -nbr ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
		rest[i] = nbr % basen;
		nbr = nbr / basen;
	}
	return (nbr);
}

void	show_new_number(char *base, int rest[], int i)
{
	while (i >= 0)
	{
		write(1, &base[rest[i]], 1);
		i--;
	}
}

void	change_base(int nbr, int basen, char *base)
{
	int	rest[50];
	int	i;

	i = 0;
	if (nbr < 0)
	{
		nbr = neg_base(nbr, basen, i, rest);
		i++;
	}
	while (nbr / basen > 0 || nbr / basen == 0)
	{
		if (nbr / basen > 0)
		{
			rest[i] = nbr % basen;
			nbr = nbr / basen;
		}
		if (nbr / basen == 0)
		{
			i++;
			rest[i] = nbr % basen;
			break ;
		}
		i++;
	}
	show_new_number(base, rest, i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	basen;

	basen = know_base(base);
	if (basen >= 2)
		change_base(nbr, basen, base);
}
