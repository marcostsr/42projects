/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 11:28:59 by marcos-t          #+#    #+#             */
/*   Updated: 2025/08/21 15:52:52 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYLIB_H
#define MYLIB_H
#include <dirent.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void);

void	ft_print_reverse_alphabet(void);

void	ft_print_numbers(void);

void	ft_is_negative(int n);

void	ft_print_comb(void);

void	ft_swap(int *a, int *b);

void	ft_putstr(char *str);

int		ft_strlen(char *str);

int		ft_strcmp(char *s1, char *s2);

char	*ft_strcpy(char *dest, char *src);

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	ft_atoi(char *str);

void	ft_putnbr(int nb);

int	ft_recursive_factorial(int nb);

int	ft_recursive_power(int nb, int power);

int	ft_is_prime(int nb);

void	ft_sort_int_tab(int argc, char *argv[]);

char	*ft_strdup(char *str);

int	ft_ultimate_range(int **range, int min, int max);

char	*ft_strjoin(int size, char **strs, char *sep);

#endif
