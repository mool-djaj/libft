#include "libft.h"
#include <stdio.h>  // only for printf

int main(void)
{
    char c = 'A';
    char str[] = "Hello, Ayoub!";

    // Test ft_putchar
    ft_putchar(c);
    ft_putchar('\n');

    // Test ft_strlen
    size_t len = ft_strlen(str);
    printf("Length of '%s' = %zu\n", str, len);

    return 0;
}
