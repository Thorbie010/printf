#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/**
 *
 *
 *
 */

int _putchr(int c)
{
	return (write(1, &c, 1));
}
