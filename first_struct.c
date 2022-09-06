#include "head.h"

/**
 * print - prints my_defined struct
 *
 * @data: struct data
 * Return: nothing
 */
void print(struct user data)
{
	printf("Username: %s -- ID: %d -- Gender: %c\n",
		data.name, data.id, data.sex);
}

/**
 * main - Entry point
 *
 * Return: nothing
 */
int main(void)
{
	struct user data1 = {488, 'M', "Extrano"};
	struct user data2 = {486, 'F', "Pearl"};

	print(data1);
	print(data2);
	return (0);
}
