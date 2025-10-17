#include "libft.h"

int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    // Step 1: Skip whitespaces
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;

    // Step 2: Check sign
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    // Step 3: Convert digits
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result * sign; // Step 4: Apply sign
}
