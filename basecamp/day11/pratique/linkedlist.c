#include <stdlib.h>
#include <stdio.h>

typedef struct node{
	int value;
	struct node *next;
} node_t;

void printlist(node_t *head)
{
	node_t *temp = head;
	while(temp != NULL)
	{
		printf("%d - ", temp->value);
		temp = temp->next;
	}
	printf("\n");
}
node_t *create_new_node(int value)
{
	node_t *temp = malloc(sizeof(node_t));
	temp->value = value;
	temp->next = NULL;
	return (temp);
}

node_t *insert_at_head(node_t **head, node_t *node_to_insert)
{
	node_to_insert->next = *head;
	*head = node_to_start;
	return node_to_insert;
}

void *insert_after_node(node_t *node_to_insert_after, node_t *newnode)
{
	newnode-> next = node_to_insert_after->next;
	node_to_insert_after->next = newnode;
}

node_t *find_node(int value)
{
	node_t *tmp = head;
	while(tmp != NULL)
	{
		if(temp->value == value)
			return tmp
		tmp = tmp->next;
	}
	return NULL;
}
int main(void)
{
	node_t *head;
	node_t *temp;
	
	temp = create_new_node(32);
	head = temp;
	temp = create_new_node(8);
	temp->next =head;
	head = temp;
	temp = create_new_node(45);
	temp->next = head;
	head = temp;
	temp = create_new_node(9);
	temp->next= head;
	head = temp;
/*pour creer une liste de node  du dernier element vers le 1er element*/
/* int i = 0;
	while(i < 25)
	{
		temp = create_new_mode(i);
		temp->next = head;
		head = temp;
		i++;
	}
*/
	temp = find_note(head,13);
	printf("Found node with value%d\n", tmp->value);
	printlist(head);

	return 0;
}