#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t total;
    unsigned char *d;

    total = nmemb * size;
    if (nmemb != 0 && total / nmemb != size)
        return (NULL);

    d = (unsigned char *)malloc(total);
    if (!d)
        return (NULL);

    ft_bzero(d, total);
    return (d);
}
