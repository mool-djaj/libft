#include "libft.h"

char *strrchr(const char *s, int c)
{
        size_t i = 0;
        size_t last = 0 ;

    while (s[i])
    {
        if (s[i] == (char)c)
            last = (char *)(s + i);
        i++;
    }

    if (c == '\0')
        return (char *)(s+ i);

    return last;
}
// int main() {
//     char myStr[] = "Hello World";
//     char *myPtr = ft_strrchr(myStr, 'l');
//     if (myPtr != NULL) {
//         printf("%s\n", myPtr);
//     }
//     return 0;
// }