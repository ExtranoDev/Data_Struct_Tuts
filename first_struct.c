#include "head.h"

/**
 * print - prints my_defined struct
 *
 * @data: struct data
 * Return: nothing
 */
void print(struct user *data)
{
	printf("Username: %s -- ID: %d -- Gender: %c\n",
		data->name, data->id, data->sex);
}

/**
 * parse_struct - edit struct values
 *
 * @s: sex
 * @id: unique identifier
 * @name: username
 *
 * Return: updated struct data
 */
struct user *parse_struct(char s, int id, char name[16])
{
	int i;
	struct user *data = (struct user *) malloc(sizeof(struct user));

	data->id = id + 5;
	if (s == 'M')
		data->sex = 'F';
	else
		data->sex = 'M';

	for (i = 0; name[i]; i++)
		data->name[i] = name[i];
	data->name[i] = '\0';
	return (data);
}

/**
 * main - Entry point
 *
 * Return: nothing
 */
int main(void)
{
	struct user *data1, *data2;

	data1 = parse_struct('M', 488, "Extrano");
	data2 = parse_struct('F', 486, "Pearl");

	print(data1);
	print(data2);

	free(data1);
	free(data2);
	return (0);
}
