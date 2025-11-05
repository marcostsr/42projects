/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0000/01/01 00:00:00 by y marcos-t        #+#    #+#             */
/*   Updated: 2025/11/05 20:52:12 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf(const char *str, char **argv)
{
	/*Passos
	Ler a string ate cheagr ao (%)
	No % verificar o caracter seguinte
	uma das condicoes sempre cai dentro de (c, s, p, d, i, u, x, X, %)
	Apos essa condicao passar o argv
	imprimir o valor
	*/
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (!*argv[j])
				return ("Error");
			if (str[i + 1] == 'c')
				ft_putchar_fd(*argv[j++], 1);
			if (str[i + 1] == 's')
				ft_putstr_fd(*argv[j++], 1);
			if (str[i + 1] == 'p')
				/*Imprimir Ponteiro*/
			if (str[i + 1] == 'd')
				ft_putnbr_fd(*argv[j++], 1);
			if (str[i + 1] == 'i')
				ft_putnbr_fd(*argv[j++], 1);
			if (str[i + 1] == 'u')
				ft_putnbr_fd((unsigned) (*argv[j++]), 1);
			if (str[i + 1] == 'x')
				ft_putstr_fd(c_hex((*argv[j++]), j,(1)), 1);
			if (str[i + 1] == 'X')
				ft_putstr_fd(c_hex((*argv[j++]), j,(2)), 1);
			if (str[i + 1] == '%')
				write (1,'%',1);
			i++;
		}
		i++;
	}
	return (0);
}