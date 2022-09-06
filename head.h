#ifndef DATASTRUCT
#define DATASTRUCT

#include <stdio.h>

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
void print(struct user data);

#endif
