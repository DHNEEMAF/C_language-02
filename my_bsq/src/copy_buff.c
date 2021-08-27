
/* ****************************************** */
/*                                            */
/*   Filename:  copy_buff.c                   */
/*   Created:  10/08/2021                     */
/*   Updated:  14/08/2021                     */
/*   Author:  Abdullah Dhneem                 */
/*   Organization:  ELU                       */
/*   Version:  0.1                            */
/*                                            */
/* ****************************************** */

#include "bsq.h"

void copy_buff(char *buffer)
{
	char *buff = malloc(sizeof(char) * my_strlen(buffer) + 1);
	int i = 0;
	int j = 0;

	while (buffer[i] != '\n') 
    {
		i = i + 1;
	}
	i = i + 1;
	while (buffer[i] != '\0') 
    {
		buff[j] = buffer[i];
		i = i + 1;
		j = j + 1;
	}
	buff[j] = '\0';
	i = 0;
	while (buff[i] != '\0') 
    {
		buffer[i] = buff[i];
		i = i + 1;
	}
	buffer[i] = '\0';
	free(buff);
}
