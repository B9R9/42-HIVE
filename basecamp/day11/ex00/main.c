#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void printlist(t_list *head);
t_list		*ft_create_elem(void *data);

void printlist(t_list *head)
{
	t_list *temp = head;
	while(temp != NULL)
	{
		printf("%d - ", *(int*)temp->data);
		temp = temp->next;
	}
	printf("\n");
}
int main(void)
{
/*-----------------------------------*/	
	/*TONY version*/
	// t_list *node1;
	// t_list *node2;
	// t_list *node3;

	// int n = 42;
	// int n1 = 23;
	// node1 = ft_create_elem(&n);
	// node2 = ft_create_elem(&n);
	// node3 = ft_create_elem(&n1);
	// node1->next = node2;
	// node2->next = node3;
		// printf("%d\n", *(int*)(node1->next->next->data));
// /*-------------------------------------*/	int n = 42;
// 	int m = 23;
	int i;
	t_list *temp;
	t_list *head;
	temp = ft_create_elem(&n);
	head = temp;
	temp = ft_create_elem(&m);
	temp->next =head;
	head = temp;
/*pour creer une liste de node  du dernier element vers le 1er element*/
	// i = 0;
	// while(i < 5)
	// {
	// 	temp = ft_create_elem(&i);
	// 	temp->next = head;
	// 	head = temp;
	// 	i++;
	// }

	// temp = find_note(head,13);
	// printf("Found node with value%d\n", tmp->value);
	printlist(head);


	return 0;
}