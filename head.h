#ifndef DATASTRUCT
#define DATASTRUCT

#include <stdio.h>
#include <stdlib.h>

/**
 * struct user - user data
 * @name: username
 * @id: unique id
 * @sex: gender
 *
 * Description: a struct that defines a user properties
 */
struct user
{
	int id;
	char sex;
	char name[16];
};
void print(struct user *data);
struct user *parse_struct(char s, int id, char name[]);

#endif
