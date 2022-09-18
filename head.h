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

/**
 * struct other - tuts struct
 * @a: first data
 * @b: second data
 *
 * Description: struct for other tutorial exercise
 */
struct other
{
	int a;
	char b;
};

/**
 * struct me_self - a self referential structure
 * @a: int value
 * @c: cahracter value
 * @ptr: self reference
 *
 * Description: refers to it's self
 */
struct me_self
{
	int a;
	char c;
	struct me_self *ptr;
};

/**
 * void print(struct user *data);
 * struct user *parse_struct(char s, int id, char name[]);
 */

#endif
