/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 15:24:14 by mzhu              #+#    #+#             */
/*   Updated: 2019/11/07 04:37:05 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFF_SIZE 15

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

t_list			*ft_lstnew(void const *content, size_t content_size);
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

void			ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));

size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlen(const char *str);
size_t			ft_count_int(long nb);

char			**ft_strsplit(char const *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strdup(const char *str);
char			*ft_strcdup(const char *str, char c);
char			*ft_strndup(const char *str, size_t n);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strncpy(char *dest, const char *src, size_t n);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strncat(char *dest, const char *src, size_t n);
char			*ft_strchr(const char *s1, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *str, const char *lf);
char			*ft_strnstr(const char *str, const char *lf, size_t len);
char			*ft_strtrim(char const *s);
char			*ft_itoa(int n);
int				*ft_atoisplit(const char *str, int c);

int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_atoi(const char *nptr);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
int				ft_strcmp(const char *s1, const char *s2);
int				get_next_line(const int fd, char **line);
int				ft_count_word(char const *s, char c);

void			ft_putendl_fd(char const *s, int fd);
void			ft_putstr_fd(char const *s1, int fd);
void			ft_putchar_fd(char c, int fd);
void			ft_putchar(char c);
void			*ft_strjoin(char const *s1, char const *s2);
void			ft_putstr(char const *s);
void			ft_putendl(char const *s);
void			ft_putnbr(int n);
void			*ft_memalloc(size_t size);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memset (void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			ft_putnbr_fd(int n, int fd);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			ft_memdel(void **ap);
void			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void(*f)(char *));
void			ft_striteri(char *s, void(*f)(unsigned int, char *));
void			ft_swap(int *a, int *b);
void			*ft_strjoin_free(char const *s1, char const *s2);

#endif
