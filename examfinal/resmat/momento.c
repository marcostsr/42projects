/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   momento.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 11:28:59 by marcos-t          #+#    #+#             */
/*   Updated: 2025/08/21 15:20:44 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

struct momento
{
	float M1[10000];
	float Q1[10000];
	float q1[10000];
	float Len[10000];
	char rt[30];
	int i;
};

int	main()
{
	
	struct momento M;
	
	for (M.i = 0; M.i < 10000; M.i++)
	{
		M.Len[M.i] = M.i/1000;/*L*/
		M.q1[M.i]= 1000;
		M.Q1[M.i]= (M.q1[M.i] * M.Len[M.i]) + (M.q1[M.i] * M.Len[M.i] / 2);
		M.M1[M.i]= (M.q1[M.i] * M.Len[M.i] * M.Len[M.i] / 2) + M.q1[M.i] *M.Len[M.i] / 2;
	}
	M.i = 0;
	while (M.i < 1000)
	{
		printf("%f\n",M.M1[M.i]);
		M.i = M.i +10;
	}
	return (0);
	 
}
