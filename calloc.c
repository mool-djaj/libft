#include "libft.h"

void *ft_calloc(size_t count ,size_t size)
{
	size_t total ;
	void *p;

	total = count * size;

	p = malloc(total);

	if (!p)
	{
		return NULL;
	}
	
	size_t i = 0;
	unsigned char *pt = (unsigned char *)p;

	while (i < total)
	{
		pt[i] = '\0';
		i++;
	}

	return (p);
	
}

// int main()
// {
// 	int count = 5;
// 	int *arrr = (int *)ft_calloc(count, sizeof(int));

// 	size_t i = 0;

// 	while (i < 2)
// 	{
// 		printf("%d\n", arrr[i]);
// 		i++;

// 	}
	

// }
