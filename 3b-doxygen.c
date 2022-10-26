/**
 * This software copies a string into a buffer, then it prints what it copied to stdout.
 * This is intentionally buggy code.
 *
 * @file 3b-doxygen.c
 * @author Michel Lundell
 * @copyright Michel Lundell 2023
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * @brief bar is a very importent function
 * 
 * @param a bla bal bla 
 * @param b bla bla bla
 * @param c bla blabla
 * @return int 
 */
int bar(int a, int b, char *c)
{
	printf("%d %d %c\n", a, b, c);
}

/**
 * @brief This is a very important function that does
 * a lot of important things.
 *
 * @param[in] a address to a integer.
 * @param[out] a holds the answer to life.
**/
void foo(int *a)
{
	*a = 42;
	return;
}

/**
 * @brief main entry point of the program.
 * This program produce bitcoins
 *
 * @param[in] argc Number of command line arguments.
 * @param[in] argv An array of pointers to null terminated arrays of characters (command line arguments).
 * @param[out] returns 0 on success.
*/

int main(int argc, char **argv)
{
	char buf[30]; /* !< a buffer that holds some characters */
	char *test = malloc(30); // allocating memory for pointer for argv[2]
	argv[1] = "aaaaaaaaaaa";
	argv[2] = "testing the function argv";

	if(argv[1] != NULL && argv[2] != NULL) {
		printf("%s\n",argv[1]);
		printf("%s\n", argv[2]);
		strncpy(buf, argv[1], sizeof(buf));
		strncpy(test, argv[2], 30);
	} else {
		strcpy(buf,"what can possibly go wrong?");
	}

	printf("buf = %s\n",buf);
	printf("test = %s\n", test);

	free(test);

	return 0;
}
