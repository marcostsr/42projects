/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_hex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0000/01/01 00:00:00 by y marcos-t        #+#    #+#             */
/*   Updated: 2025/11/05 21:32:17 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_toupper_str(char *str)
{
	int i;
 /*Mudei o texto da funcao */
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

static	int counter_numeric(int rtc)
{
	int i;

	i = 1;
	while (rtc / 16)
	{
		i++;
		rtc /= 16;
	}
	return (i);
}


void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (i < strlen(s))
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/**
 * @brief Receive a number in decimal form, write in hexadecimal
 * @param char *argv - decimal number
 * @param int x - 1 for lower case, 2 for upper case
 * @return void
 */
void	c_hex(char *argv, int x)
{
	char *str;
	char *hexadeci;
	size_t i;
	int num;
	int size;
	
	str = malloc(20);
	if (!str)
		return ;
	ft_strcpy(str,"0123456789abcdef");
	i = 0;
	num = atoi(argv);
	size = counter_numeric(num);
	hexadeci = malloc((size + 1));
	if (x == 2)
		str = ft_toupper_str(str);
	while (i < size)
	{
		hexadeci[size - i - 1] = str[num % 16];
		num /= 16;
		i++;
	}
	ft_putstr_fd(hexadeci,1);
}
