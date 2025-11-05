/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/08/16 16:50:39 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <unistd.h>
#include "ft_print_numbers.h"
#include "ft_atoi_letter.h"
#include "ft_atoi.h"
#include "text.h"
#include "ft_strstr.h"
#include "ft_stincpy.h"

int main(int argc, char **argv)
{
	unsigned int num;
	char str [3];
	char esse [][];
	int i;

	i = 0;
	if (argc == 2)
	{	
		while (argv[1][i] != 0)
			str[i] = argv[1][i];
	}
	if (argc == 3)/*If function 2 argc, dict and value*/
	{
		while (argv[2][i] != 0)
			str[i] = argv[1][i];
	}	
	if (argc >= 4 || argc <= 1)
	{
		return("");/*Function cant be with more than 2 arguments*/
	}
	num = ft_atoi(str);
	ft_print_numbers(num, 0, esse);
	
}

