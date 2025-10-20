#include "libft.h"

int toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32 ;
		
	}
	
	return c;
}

// int main() {
//     char c;

//     c = 'm';
//     printf("%c -> %c", c, toupper(c));

//     c = 'D';
//     printf("\n%c -> %c", c, toupper(c));

//     c = '9';
//     printf("\n%c -> %c", c, toupper(c));
//     return 0;
// }
