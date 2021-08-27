#ifndef _BSQ_H_
#define _BSQ_H_

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

/* bigger_pos.c */
int bigger_pos(int *nums);

/* copy_buff.c */
void copy_buff(char *buffer);

/* draw_square.c */
void draw_square(char *map, int *nums, int big);

/* littler.c */
int littler(int a, int b, int c);

/* map.c */
int map_width(char *map);
void fill_map(char *map, int *nums);

/* my_functions.c */
int negatif(char const *str, int i);
int appliquenegatif(int neg);
int fin(char const *str, int i);
int my_getnbr(char const *str);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char *str);
int my_strlen(char *str);

/* numbers_algo.c */
void init_algo2(char *map, int *map_nums, int i);
int init_algo(char *map);

#endif
