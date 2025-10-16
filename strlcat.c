#include "libft.h"

size_t ft_strlen(const char *r)
{
	size_t i = 0;

    while (r[i])
	{
		i++;
	}

	return (i);

}

size_t ft_strlcat(char *dst, const char *src,size_t ds_size)
{
	size_t i;
	size_t len_s;
	size_t len_d;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
    i = 0;

	if (ds_size == 0)
	{
		return (len_s);
	}

	if (ds_size <= len_d)
	{
		return (ds_size + len_s);
	}
	
	while (src[i] && (len_d + i + 1) < ds_size)
	{
		dst[len_d + i] = src[i];
		i++;
	}

	dst[len_d + i] = '\0';

	return (len_s + len_d);

}
// int main()
// {
// 	char buffer[10] = "000";

// 	printf("%zu",ft_strlcat(buffer , "11111",sizeof buffer));
// 	printf("\n %s", buffer);
// }