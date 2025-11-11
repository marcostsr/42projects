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

#include "ft_printf.h"  // your header

static	int case_case(const char *str, va_list args, int i)
{

	
	if (str[i+1] == 'c') //Caractter
		ft_putchar_fd((va_args(args,int)), 1);
	if (str[i+1] == 's') //String
		ft_putstr_fd((va_args(args,char *)), 1);
	if (str[i+1] == 'p') //ponteiro
		/*Imprimir Ponteiro*/
	if (str[i+1] == 'd') //Inteiro
		ft_putnbr_fd(*argv[*counters.j], 1);
	if (str[i+1] == 'i') //Inteiro outra forma
		ft_putnbr_fd(*argv[*counters.j], 1);
	if (str[i+1] == 'u') // Unsigned int
		ft_putnbr_fd((unsigned) (*argv[*counters.j]), 1);
	if (str[i+1] == 'x') //hexadecimal
		ft_putstr_fd(c_hex((*argv[*counters.j]), *counters.j,(1)), 1);
	if (str[i+1] == 'X') //Hexadecimal maiusculo
		ft_putstr_fd(c_hex((*argv[*counters.j]), *counters.j,(2)), 1);
	if (str[i+1] == '%') //Simbolo de %
		write (1,'%',1);
}

int	ft_printf(const char *str, ...)
{
	/*Passos
	Ler a string ate cheagr ao (%)
	No % verificar o caracter seguinte
	uma das condicoes sempre cai dentro de (c, s, p, d, i, u, x, X, %)
	Apos essa condicao passar o argv
	imprimir o valor
	*/
	int *i;

	i=0;
	va_list args;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			case_case(str,args,i);
			i++;
		}
		i++;
	}
	va_end(args);
	return (0);
}
/*
int main(void)
{
    char c = 'A';
    char *str = "Hello, 42!";
    void *ptr = str;
    int d = -1234;
    int i = 5678;
    unsigned int u = 4294967295;
    unsigned int x = 305419896; // 0x12345678

    int ret_ft, ret_std;

    printf("===== FT_PRINTF TEST =====\n\n");

    // %c
    ret_ft = ft_printf("ft_printf: c = [%c]\n", c);
    ret_std = printf("   printf: c = [%c]\n\n", c);

    // %s
    ret_ft = ft_printf("ft_printf: s = [%s]\n", str);
    ret_std = printf("   printf: s = [%s]\n\n", str);

    // %p
    ret_ft = ft_printf("ft_printf: p = [%p]\n", ptr);
    ret_std = printf("   printf: p = [%p]\n\n", ptr);

    // %d and %i
    ret_ft = ft_printf("ft_printf: d = [%d], i = [%i]\n", d, i);
    ret_std = printf("   printf: d = [%d], i = [%i]\n\n", d, i);

    // %u
    ret_ft = ft_printf("ft_printf: u = [%u]\n", u);
    ret_std = printf("   printf: u = [%u]\n\n", u);

    // %x and %X
    ret_ft = ft_printf("ft_printf: x = [%x], X = [%X]\n", x, x);
    ret_std = printf("   printf: x = [%x], X = [%X]\n\n", x, x);

    // %%
    ret_ft = ft_printf("ft_printf: percent = [%%]\n");
    ret_std = printf("   printf: percent = [%%]\n\n");

    // Return value test
    ft_printf("ft_printf return: %d\n", ret_ft);
    printf("   printf return: %d\n", ret_std);

    return 0;
}
*/