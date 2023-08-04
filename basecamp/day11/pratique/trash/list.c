#include <stdio.h>
#include <stdlib.h>
#include "list.h"

Player new_list(void)
{
	return NULL;
}

/*--------------------------------*/

Bool is_empty_list(Player li )
{
	if(li == NULL)
		return true;
	return false;
}

/*------------------------------*/
int list_length(Player li)
{
	int size = 0;
	if(is_empty_list(li))
		return size;
	while(li != NULL)
	{
		li=li->next;
		size++;
	}
	return size;
}

/*------------------------------------*/
void print_list(Player li)
{
	if (is_empty_list(li))
		printf("La liste est vide");
		return;
	while(li != NULL)
	{
		printf("[%d]", li->hp);
		li = li->next;
	}
	printf("\n");
}