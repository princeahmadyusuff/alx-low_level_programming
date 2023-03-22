#include "main.h"
#include <unistd.h>

/** this is a comment for the main 
 * function it allows for something 
 * to run 
 */

int _putchar(char c)
{ 	
	return (write(1, &c, 1));
}
