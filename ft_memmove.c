#include "libft.h"

void *ft_memmove(void *dst, const void *src ,size_t n)
{
    size_t i;
    unsigned char *d = (unsigned char *)dst;
    unsigned char *s = (unsigned char *)src;
    i = n;

    if (!dst || !src)
    {
        return NULL;
    }
    
    if (d > s)
    {
        while (i > 0)
        {
            i--;
            d[i] = s[i];
        }
        
    }
    else
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
        

        
    }
    
return (dst);

}
