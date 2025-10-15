#include "libft.h"

void ft_bziro(void *ptr, size_t n)
{
    size_t i = 0;
    unsigned char *p = (unsigned char *)ptr;

    while (i < n)
    {
        p[i] = '\0';
        i++;
    }
}