#include "libft.h"

void ft_isalnum(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c <= '9' && c >= '0'))
    return (1);

    else
    return (0);
}