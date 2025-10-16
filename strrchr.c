#include <stdio.h>

char *ft_strrchr(const char *str, int c)
{
    size_t i = 0;
	char *last = NULL;


    while (str[i])
    {
        if (str[i] == (char)c)
            last = (char *)(str + i);
        i++;
    }

    if (c == '\0')
        return (char *)(str + i);

    return last;
}

int main() {
    char myStr[] = "Hello World";
    char *myPtr = ft_strrchr(myStr, 'l');
    if (myPtr != NULL) {
        printf("%s\n", myPtr);
    }
    return 0;
}
