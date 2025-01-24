/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 08:50:14 by jarao-de          #+#    #+#             */
/*   Updated: 2025/01/24 14:47:07 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_toupper(int c);

int		ft_tolower(int c);

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *big, const char *little, size_t len);

int		ft_atoi(const char *nptr);

void	*ft_memset(void *s, int c, size_t n);

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t nmemb, size_t size);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *set);

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_itoa(int n);

char	**ft_split(char const *s, char c);

t_list	*ft_lstnew(void *content);

void	ft_lstadd_front(t_list **lst, t_list *new);

int		ft_lstsize(t_list *lst);

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstdelone(t_list *lst, void (*del)(void *));

void	ft_lstclear(t_list **lst, void (*del)(void *));

void	ft_lstiter(t_list *lst, void (*f)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

char	*get_next_line(int fd);

long	ft_strtol(const char *nptr, char **endptr, int base);

void	*ft_free_matrix(void **matrix, size_t size);

int		ft_isxdigit(int c);

void	*ft_delpointer(void **ptr);

int		ft_count_if(char **tab, int (*f)(char *));

int		ft_strall(const char *s, int (*f)(int));

void	ft_strforeach(char *tab, int (*f)(int));

char	*ft_strtok(char *str, const char *delim);

char	*ft_strtok_r(char *str, const char *delim, char **saveptr);

int		ft_isspace(int c);

#endif
