
/* ****************************************** */
/*                                            */
/*   Filename:  draw_square.c                 */
/*   Created:  10/08/2021                     */
/*   Updated:  14/08/2021                     */
/*   Author:  Abdullah Dhneem                 */
/*   Organization:  ELU                       */
/*   Version:  0.1                            */
/*                                            */
/* ****************************************** */

#include "bsq.h"

void draw_square(char *map, int *nums, int big)
{
	int i = big;
	int nb = nums[big];
	int nb2 = nums[big];

	while (nb > 0) {
		while (nb2 > 0) 
        {
			map[i] = 'x';
			i = i - 1;
			nb2 = nb2 - 1;
		}
		nb2 = nums[big];
		nb = nb - 1;
		i = i - map_width(map) + (nums[big] - 1);
	}
}
