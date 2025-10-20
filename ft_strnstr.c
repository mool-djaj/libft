#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    // If the needle is empty, we return the full haystack (standard behavior)
    if (*needle == '\0')
        return ((char *)haystack);

    i = 0;
    while (haystack[i] && i < len)
    {
        j = 0;

        // Check if needle matches starting at haystack[i]
        while (haystack[i + j] == needle[j] && (i + j) < len)
        {                                                                   //i note everything and my english really bad
            j++;
            // if we reached end of needle, full match found
            if (needle[j] == '\0')
                return ((char *)&haystack[i]);
        }
        i++;
    }
    return (NULL);
}
// int main(void)
// {
//     const char *text = "Hello beautiful world!";
//     const char *word = "beauty";
//     const char *found = ft_strnstr(text, word, 10);

//     if (found)
//         printf("Found: %s\n", found);
//     else
//         printf("Not found.\n");
// }
