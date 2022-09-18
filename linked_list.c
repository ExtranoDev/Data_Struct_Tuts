#include "head.h"
/**
 * main - runs linked list codes
 *
 * Return: nothing
 */
int main(void)
{
	struct me_self *head = NULL;
	head = malloc(sizeof(struct me_self));

	head->a = 120;
	head->c = 'J';
	head->ptr = NULL;
	printf("Var2.a: %d -- Var2.c: %c\n", head->a, head->c);

	return (0);
}
