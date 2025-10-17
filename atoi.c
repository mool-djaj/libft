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
    while (str[i] >= '0' && str[i] <= '9' && str[i])
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result * sign; // Step 4: Apply sign
}
#include <stdio.h>
#include "libft.h"

int main() {
    // Test cases
    const char *test_str1 = "42";
    const char *test_str2 = "-42";
    const char *test_str3 = "  +42";
    const char *test_str4 = "  -42";
    const char *test_str5 = "  123abc";
    const char *test_str6 = "  \t\n\r\v\f  -123";
    const char *test_str7 = "0";

    printf("ft_atoi(\"%s\") = %d\n", test_str1, ft_atoi(test_str1)); // Should print 42
    printf("ft_atoi(\"%s\") = %d\n", test_str2, ft_atoi(test_str2)); // Should print -42
    printf("ft_atoi(\"%s\") = %d\n", test_str3, ft_atoi(test_str3)); // Should print 42
    printf("ft_atoi(\"%s\") = %d\n", test_str4, ft_atoi(test_str4)); // Should print -42
    printf("ft_atoi(\"%s\") = %d\n", test_str5, ft_atoi(test_str5)); // Should print 123 (ignores non-digit part)
    printf("ft_atoi(\"%s\") = %d\n", test_str6, ft_atoi(test_str6)); // Should print -123 (with leading whitespace)
    printf("ft_atoi(\"%s\") = %d\n", test_str7, ft_atoi(test_str7)); // Should print 0

    return 0;
}
