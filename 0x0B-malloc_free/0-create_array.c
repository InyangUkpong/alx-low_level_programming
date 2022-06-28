#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: char to initialize
 * Return: pointer to the array initialized or NULL
 */

<<<<<<< HEAD
char *creat_array(unsigned int size, char c)
=======
char *create_array(unsigned int size, char c)
>>>>>>> 15343e7cc9a1dddb7b43f26bb38a73a77cc91e7d
{
	char *i = malloc(size);

	if (size == 0 || i == 0)
		return (0);

	while (size--)
<<<<<<< HEAD
		n[size] = c;
<<<<<<< HEAD
	
=======

>>>>>>> 15343e7cc9a1dddb7b43f26bb38a73a77cc91e7d
=======
		i[size] = c;

>>>>>>> 75d6d7eeebb1474077041eabd6a285d113d22891
	return (i);
}
