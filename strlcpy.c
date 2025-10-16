#include "libft.h"

size_t ft_strlen(const char *r)
{
	size_t i = 0;
    if (*r == '\0')
    return 0;
 
    else
    while (r[i])
	{
		i++;
	}


	return (i);
}

size_t ft_strlcpy(char *dst,const char *src,size_t ds_size)
{
    size_t i;
	size_t len;

	len = ft_strlen(src);
    i = 0;

	if (ds_size == 0)
	{
		return (len);
	}

	while (src[i] && i < ds_size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';

	return (len);
}
// int main()
// {
// 	char buffer[0] = "ac";

// 	printf("%zu",ft_strlcpy(buffer , "a111",sizeof buffer));
// 	printf("\n %s", buffer);
// }