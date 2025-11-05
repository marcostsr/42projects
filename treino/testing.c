/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/08/21 15:55:09 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int	main (int argc, char **argv)
{
	int i;
	int n;

	i = 1;
	while ( i < argc)
	{
		n = ft_atoi(argv[i]);
		printf("\nAtoi:%d\n",n);
		ft_putnbr(n);
		i++;
	}
	return(0);
}
