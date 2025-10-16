#include <stdio.h>

char *ft_strchr(const char *str, int c)
{
    size_t i = 0;

    while (str[i])
    {
        if (str[i] == (char)c)
            return (char *)(str + i);
        i++;
    }

    if (c == '\0')
        return (char *)(str + i);

    return NULL;
}

int main() {
    char myStr[] = "Hello World";
    char *myPtr = ft_strchr(myStr, 'l');
    if (myPtr != NULL) {
        printf("%s\n", myPtr);
    }
    return 0;
}
