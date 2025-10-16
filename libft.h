#ifndef AYOUB_H     // If AYOUB_H is not defined
# define AYOUB_H    // Define it, so next includes are skipped

# include <unistd.h>  // write
# include <stdlib.h>  // malloc






int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);

int ft_isalpha(int c);
void ft_isalnum(int c);
void ft_bziro(void *ptr, size_t n);
size_t  ft_strlen(const char *r);
void *ft_memcpy(void *dst ,const void *src, size_t n );
void *ft_memmove(void *dst, const void *src ,size_t n);
void *ft_memset(void *ptr, int vale, size_t n);



#endif  // End of header guard xdddddddddd
