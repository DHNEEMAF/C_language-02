
/* ****************************************** */
/*                                            */
/*   Filename:  map.c                         */
/*   Created:  10/08/2021                     */
/*   Updated:  14/08/2021                     */
/*   Author:  Abdullah Dhneem                 */
/*   Organization:  ELU                       */
/*   Version:  0.1                            */
/*                                            */
/* ****************************************** */

#include "bsq.h"

int map_width(char *map)
{
	int i = 0;

	while (map[i] != '\n')
		i = i + 1;
	return (i);
}

void fill_map(char *map, int *nums)
{
	int i = 0;
	int w = map_width(map);

	while (nums[i] != -2) 
    {
		if (nums[i] == -1)
			nums[i] = littler(nums[i - 1], nums[i - w - 2], nums[i - w - 1]) + 1;
		i = i + 1;
	}
}
