#include <stdio.h>
#include <stdlib.h>

/**
 * struct sin_list - structure of a single linked list
 * @a: integer value
 * @ptr: linker
 *
 * Description: single linked list structure
 */

struct sin_list
{
	int a;
	struct sin_list *ptr;
};

/**
 * main - code
 * Return: 0 on success
 */

struct sin_list* add_node(struct sin_list *head, int data)
{
	struct sin_list *temp = malloc(sizeof(struct sin_list));

	temp->a = data;
	temp->ptr = NULL;

	head->ptr = temp;
	return temp;
}

int main(void)
{
	struct sin_list *head = malloc(sizeof(struct sin_list));
	struct sin_list *curr = malloc(sizeof(struct sin_list));
	int i = 100;

	head->a = 300;
	head->ptr = NULL;

	curr = head;

	for (i; i < 900; i += 100)
	{
		printf("%d\n", i);
		curr = add_node(curr, i);
	}

	curr = head;

	i = 0;
	while (curr)
	{
		printf("%d -- %d\n", i, curr->a);
		i += 1;
		curr = curr->ptr;
	}

	curr = malloc(sizeof(struct sin_list));

	curr->a = 45;
	curr->ptr = head;

	head = curr;
	printf("\n\n --- --- \n");
	while (curr)
        {
                printf("%d -- %d\n", i, curr->a);
                i += 1;
                curr = curr->ptr;
        }
	free(head);
	return (0);
}

