/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date      05  by marcos-t          #+#    #+#             */
/*   Updated: 2025/11/05 20:09:14 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include "libft.a"
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdint.h>

/*
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
*/


typedef struct counters
{
	int i;
	int j;
	int res_i;
	int res_j;
}	counters;




void	ft_printf(const char *str, ...);
int ft_for(int *i, int start, int end, int *reset);
void	c_hex(char *argv, int x);


#endif