/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   estrutura.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 11:28:59 by marcos-t          #+#    #+#             */
/*   Updated: 2025/08/21 12:11:38 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dirent.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

struct pontos
{
	float a1;
	float b1;
	char rt[30];
};

struct dots
{
	float c1;
	float d1;
	char rtr[30];
};



int main(int arc, char **argv)
{
	struct pontos p1;
	struct dots p2;
	p1.a1 = 4.5;
	p1.b1 = 6.8;
	
	p2.c1 = p1.a1 + p1.b1;
	p2.d1 = p1.a1 - p1.b1;
	
	printf("%f\n",p2.c1);
	printf("%f\n",p2.d1);
	


}
