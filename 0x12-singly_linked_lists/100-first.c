#include "lists.h"
void ComeFirstbyNM(void)__attribute__((constructor));
/**
 * ComeFirstbyNM - function that runs befire the main function
 */
void ComeFirstbyNM(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
