#include "libft.h"

int tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32 ;
		
	}
	
	return c;
}
// int main() {
//     char c;

//     c = 'm';
//     printf("%c -> %c", c, tolower(c));

//     c = 'D';
//     printf("\n%c -> %c", c, tolower(c));

//     c = '9';
//     printf("\n%c -> %c", c, tolower(c));
//     return 0;
// }
