
/* ****************************************** */
/*                                            */
/*   Filename:  littler.c                     */
/*   Created:  10/08/2021                     */
/*   Updated:  14/08/2021                     */
/*   Author:  Abdullah Dhneem                 */
/*   Organization:  ELU                       */
/*   Version:  0.1                            */
/*                                            */
/* ****************************************** */

#include "bsq.h"

int littler(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	if (b <= a && b <= c)
		return (b);
	if (c <= a && c <= b)
		return (c);
	if (a == b && a == c)
		return (a);
	return (-1);
}
