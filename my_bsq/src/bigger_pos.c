
/* ****************************************** */
/*                                            */
/*   Filename:  bigger_pos.c                  */
/*   Created:  10/08/2021                     */
/*   Updated:  14/08/2021                     */
/*   Author:  Abdullah Dhneem                 */
/*   Organization:  ELU                       */
/*   Version:  0.1                            */
/*                                            */
/* ****************************************** */

#include "bsq.h"

int bigger_pos(int *nums)
{
	int i = 0;
	int big = 0;

	while (nums[i] != -2) 
    {
		if (nums[i] > big)
			big = nums[i];
		i = i + 1;
	}
	i = 0;
	while (nums[i] != -2) 
    {
		if (nums[i] == big)
			return (i);
		i = i + 1;
	}
	return (0);
}
