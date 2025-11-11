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

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>

/**
 * @brief Use of for function homemade, remember to put the reset
 * @brief of diferente name of variables
 * @param int start, started at start
 * @param int end, it will end at (end - 1)
 * @param int reset - set to 0 to reset at end
 * @return int just 1 to execute while or 0 to stop
 */
int ft_for(int *i, int start, int end, int *reset)
{
    if (!*reset)
    {
        *i = start;
        *reset = 1;
        return (1);
    }
    (*i)++;
    if (*i >= end)
    {
        *i = 0;
        *reset = 0;
        return (0);
    } 
    return (1);
}

int main(void)
{
    int i = 0;
    int reset_i = 0;
    int reset_j = 0;
    int j = 0;

    while (ft_for(&i, 37, 40,&reset_i))  // reset = 1
    { 
        while (ft_for(&j, 0, 3,&reset_j))  // reset = 1 novamente
            printf("i : %d\n j : %d\n", i,j);
    }
}

