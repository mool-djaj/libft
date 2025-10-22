/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:42:15 by akaarich          #+#    #+#             */
/*   Updated: 2025/10/22 18:40:45 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AYOUB_H     // If AYOUB_H is not defined
# define AYOUB_H    // Define it, so next includes are skipped

# include <unistd.h>  // write
# include <stdlib.h>  // malloc


typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

void	ft_lstadd_front(t_list **lst, t_list *new);
t_list *ft_lstnew(void *content);
int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);





int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);

int ft_isalpha(int c);
void ft_isalnum(int c);
void ft_bzero(void *ptr, size_t n);
char *ft_strdup(const char *s);
char *ft_substr(char const *s, unsigned int start,size_t len);
char *ft_strjoin(char const *s1, char const *s2);


size_t  ft_strlen(const char *r);
void *ft_memcpy(void *dst ,const void *src, size_t n );
void *ft_memmove(void *dst, const void *src ,size_t n);
void *ft_memset(void *ptr, int vale, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_calloc(size_t nmemb, size_t size);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putendl_fd(char *s, int fd);


char *ft_strrchr(const char *s, int c);
char *ft_strchr(const char *s, int c);
size_t ft_strlcat(char *dst, const char *src,size_t ds_size);
size_t ft_strlcpy(char *dst,const char *src,size_t ds_size);
int ft_strncmp(const char *s1, const char *s2 ,size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int tolower(int c);
int toupper(int c);
int ft_atoi(const char *str);






#endif  // End of header guard xdddddddddd
