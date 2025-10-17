#include "libft.h"

void *ft_memmove(void *dst, const void *src ,size_t n)
{
    size_t i;
    unsigned char *d = (unsigned char *)dst;
    unsigned char *s = (unsigned char *)src;
    

    if (!dst || !src)
    {
        return NULL;
    }
    
    if (d > s)
    {
		i = n;
        while (i > 0)
        {
            i--;
            d[i] = s[i];
        }
        
    }
    else
    {
		i=0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
        

        
    }
    
return (dst);

}

//  #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char s1[12] = "123456789";
//     char s2[12];
//     //printf("Before: %s\n", s1);
//     //ft_memmove(s1 + 2, s1, 5); 
//     //printf("After:  %s\n", s1);
// 	ft_memmove(s2, s1, 5);
// 	printf("After2:  %s\n", s1);
// }