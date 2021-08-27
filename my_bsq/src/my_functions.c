
/* ****************************************** */
/*                                            */
/*   Filename:  my_functions.c                */
/*   Created:  10/08/2021                     */
/*   Updated:  14/08/2021                     */
/*   Author:  Abdullah Dhneem                 */
/*   Organization:  ELU                       */
/*   Version:  0.1                            */
/*                                            */
/* ****************************************** */

#include "bsq.h"

int negatif(char const *str, int i)
{
	if (str[i] == '-') 
    {
		return (1);
	} else {
		return (0);
	}
}

int appliquenegatif(int neg)
{
	int i = 0;
	int neg2 = 1;

	while (i < neg) 
    {
		neg2 = neg2 * (-1);
		i = i + 1;
	}
	neg = neg2;
	return (neg);
}

int fin(char const *str, int i)
{
	if (((str[i + 1] < 48) || (str[i + 1] > 57)) && (str[i + 1] != '-')) 
    {
		return (1);
	}
	return (0);
}

int my_getnbr(char const *str)
{
	int i = 0;
	int nb = 0;
	int check = 0;
	int neg = 0;

	while (check == 0) 
    {
		neg = neg + negatif(str, i);
		if (((str[i] < 48) || (str[i] > 57)) && (str[i] != '-')) 
        {
			return (0);
		}
		if ((str[i] > 47) && (str[i] < 58)) 
        {
			nb = nb + str[i] - 48;
			nb = nb * 10;
		}
		check = fin(str, i);
		i = i + 1;
	}
	nb = nb / 10;
	nb = nb * appliquenegatif(neg);
	return (nb);
}

int my_put_nbr(int nb)
{
	if (nb < 0) 
    {
		my_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 0 && nb <= 9) 
    {
		my_putchar(nb + '0');
	}
	if (nb > 9) 
    {
		my_put_nbr(nb / 10);
		my_put_nbr(nb % 10);
	}
	return (0);
}

void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0') 
    {
		my_putchar(str[i]);
		i = i + 1;
	}
	return (0);
}

int my_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0') 
    {
		i = i + 1;
	}
	return (i);
}
