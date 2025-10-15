#include "libft.h"

void *ft_memset(void *ptr, int vale, size_t n)
{
    size_t i = 0;

    unsigned char *p = (unsigned char *)ptr;


    while (i < n)
    {
        p[i] = (unsigned char *)vale;
        i++; 
    }

    return (ptr);
    
}