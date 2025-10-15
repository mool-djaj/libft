#include "libft.h"

size_t ft_strlen(const char *r)
{
    if (*r == '\0')
    return 0;
 
    else
    return 1 + ft_strlen(r + 1);
    
}
// #include <stdio.h>
// int main()
// {
//     printf("%d",ft_strlen("12"));
// }