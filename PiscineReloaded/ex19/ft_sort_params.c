/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/10/17 15:49:31 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char str[])
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

void	ft_swap(char *a[], char *b[])
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_int_tab(int argc, char *argv[])
{
	int	n;
	int	i;

	i = 1;
	while (i < (argc - 1))
	{
		n = i + 1;
		while (n < argc)
		{
			if (ft_strcmp(argv[i], argv[n]) > 0)
				ft_swap(&argv[i], &argv[n]);
			n++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	ft_sort_int_tab(argc, argv);
	while (--argc)
		ft_putstr(*++argv);
	return (0);
}
