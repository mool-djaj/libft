#include "libft.h"

void ft_strcpy(char *dst,const char *src,size_t n
{
    unsigned char *d= (unsigned char)* dst;
    unsigned char *s= (unsigned char)* src;
    size_t i;
    size_t len_s = ft_strlen(src);
    i = 0;
    if (n == 0)
    {
        return(len_s);
    }
    if (s > )
    {
        
    }
    
    
    while (src[i])
    {
        dst[i]=src[i];
        i++;
    }
    return dst;
}