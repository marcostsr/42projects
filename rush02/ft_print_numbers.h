#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <unistd.h>
#include "ft_atoi_letter.h"
#include "ft_atoi.h"
#include "text.h"
#include "ft_strstr.h"



void	ft_print_numbers(int num, int count, char esse)
{
	int i;
	int aux;
	int pot;
	char numfind[2];
	char powfind[37];
	char string[] = {""};

	i = 0;
	aux = 0;
	pot = 1;

	while (num / 10 > 10)
	{
		count++;
		num = num / 10;
		ft_print_numbers(num, count, esse);
	}
	if ( count == 1 &&  num / 10 == 1 )/*Case for eleven to nineteen 11-19*/
	{
		numfind[0] = '1';
		numfind[1] = num % 10 + '0';
		string = ft_strstr(numfind, esse, string);/*Check the file for the number e retunr the line*/
	}
	numfind[0] = num + '0';
	string = ft_strstr(numfind, esse, string);/*Here we need to find the line of the number with atoi*/
	ft_atoi_letters(string);/*Write the number*/

	write(1," ",1);
	powfind[0] = 1;
	i = 1;
	while (count > 1)
	{
		pot = pot * 10;/*Calcute the power*/
		powfind[i] = + '0';
		count--;
		i++;
		if (count == 1)
			{
			string = ft_strstr(powfind, esse, string);/*Here we need to find the line of the power(ex thousand) with atoi*/
			ft_atoi_letters(string);	
			}
		}
}
