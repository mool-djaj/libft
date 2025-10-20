#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    size_t i;
    char *d;
    size_t len_s;

        if (!s)
    {
        return (NULL);
    }

    len_s = ft_strlen(s);
    i = 0;
    d = ft_calloc(len + 1, sizeof(char));

    if ( len > len_s - start)
    {
        len = len_s - start;
    }
    

    if (!d || !s)
    {
        return (NULL);
    }

    if (start >= len_s)
    {
        return (ft_strdup(""));
    }

    while (i < len)
    {
        d[i] = s[start+ i];
        i++;
    }
    return (d);
    

}

// #include <stdio.h>

// int main()
// {
//     char buffer[] ="445454545" ;
//     char *d = ft_substr(buffer , 1 , 7);
//     printf("%s\n" , d);
//     printf("%d" , sizeof d);


    
// }