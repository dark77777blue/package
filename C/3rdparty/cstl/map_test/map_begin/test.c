/*************************************************************************
* File Name: main.c
* Author: Don Hu
* Mail: hudeng@staff.sina.com.cn
* Create Time: 2015-10-10 03:04:50
* Last modified: 2015-10-10 09:46:58
************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "cstl/cmap.h"


int main(int argc, char *argv)
{
	map_t			*pmap_m1 = create_map(int, int);
	pair_t			*ppair_p = create_pair(int, int);
	
	if(NULL == pmap_m1 || NULL == ppair_p) {
		return -1;
	}

	map_init(pmap_m1);
	pair_init(ppair_p);

	pair_make(ppair_p, 0, 0);
	map_insert(pmap_m1, ppair_p);
	pair_make(ppair_p, 1, 1);
	map_insert(pmap_m1, ppair_p);
	pair_make(ppair_p, 2, 4);
	map_insert(pmap_m1, ppair_p);

	printf("The first element of m1 is %d\n",\
			*(int *)pair_first(iterator_get_pointer(map_begin(pmap_m1))));

	map_erase_pos(pmap_m1, map_begin(pmap_m1));

	printf("The first element of m1 is %d\n",\
			*(int *)pair_first(iterator_get_pointer(map_begin(pmap_m1))));

	map_destroy(pmap_m1);
	pair_destroy(ppair_p);

	return 0;
}













