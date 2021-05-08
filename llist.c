#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	char c;
	struct node *next;
} node_t, *node_p;

void insert(node_p *list, char c);
void destroy(node_p *list);

void print_list(node_p *first);

int main (void)
{
	node_p node = NULL; 
	/*	Now node points to NULL	*/
	
	insert(&node, 'A');
	/*	Now node points to a struct containing the char 'A'	*/

	insert(&node, 'B');
	print_list(&node);

	destroy(&node);

	return 0;
}

void insert(node_p *list, char c)
{
	/*	Create new node	*/
	node_p new_node;
	new_node = malloc(sizeof(node_t));

	/*	Storing the value on the new node	*/
	new_node->c = c;

	/*	Storing the next node in a pointer on the new node	*/
	new_node->next = *list;

	/*	Now node points to the new node	*/
	*list = new_node;
}

void print_list(node_p *list)
{
	if(*list == NULL)
		printf("List is empty.\n");

	/*	New node pointer to iterate over the list	*/
	node_p current_node;
	current_node = *list;

	while(current_node != NULL) {
		printf("%c --> ", current_node->c);
		if(current_node->next == NULL)
			printf("NULL\n");

		current_node = current_node->next;
	}
}

void destroy(node_p *list)
{
	/*	Frees memmory from first to last	*/
	if(*list == NULL)
		return;

	/*	current it's a pointer to iterate over the list	*/
	/*	tmp stores a copy of current to avoid losing the memory location	*/
	node_p current, tmp;
	current = *list;

	while(current != NULL) {
		tmp = current;

		current = current->next;

		printf("freeing %c\n", tmp->c);
		free(tmp);
	}
	printf("All nodes were freed correctly.\n");
}
