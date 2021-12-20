/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:58:20 by gchanet           #+#    #+#             */
/*   Updated: 2021/12/11 23:57:28 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <limits.h>
# include <stdlib.h>
# include <stdarg.h>

# include "font.h"

/*	STRUCT		*/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
	struct s_list	*prev;
}				t_list;

/*	arr			*/
size_t		ft_arrlen(char **arr);
void		ft_arrdel(char **split);
char		*ft_arrtostr(char *arr[]);
int			ft_arrcontain(char **arr, char *set);

/*	common		*/
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_atoi(const char *nptr);
char		**ft_split(char *str, char c);
char		*ft_itoa(int n);

/*	debug		*/
void		ft_debug(char *str);

/*	fd			*/
char		*get_next_line(int fd);

/*	is			*/
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_isspace(int c);

/*	lst			*/
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **alst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **alst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *elem));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
char		**ft_lsttoarr(t_list *lst, char *(*map)(void *));

/*	mem			*/
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t nmemb, size_t size);
void		*ft_realloc(void *ptr, size_t newsize);
void		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memset(void *s, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);

/*	ft_printf	*/
int			ft_printf(const char *str, ...);

/*	put			*/
void		ft_putstrstyle_fd(char *str, t_ftstyle st, t_ftcolor co, int fd);
void		ft_putstrstyle(char *str, t_ftstyle st, t_ftcolor co);
void		ft_putaddress_fd(void *ptr, int fd);
void		ft_putarr_fd(char **arr, int fd);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putnbr_fd(long n, int fd);
void		ft_putaddress(void *ptr);
void		ft_putarr(char **arr);
void		ft_putchar(char c);
void		ft_putstr(char const *s);
void		ft_putendl(char const *s);
void		ft_putnbr(long n);

/*	str			*/
char		*ft_strcpy(char *dest, const char *src);
char		*ft_substr(char const *s, unsigned int start, size_t len);
void		ft_strreplace(char **str, char *replace, char *with);
int			ft_stristr(const char *haystack, const char *needle, size_t n);
int			ft_strisspace(char *str);
size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strcmp(char *s1, char *s2);
int			ft_strncmp(char *s1, char *s2, unsigned int n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strdup(const char *s);
char		*ft_strjoin(char const *s1, char const*s2);
char		*ft_strtrim(char const *s1, char const *set);
int			ft_strichr(const char *s, int c);
char		*ft_strndup(const char *s, size_t size);
char		*ft_strdupcat(char **dest, char *str);
void		ft_strdel(char **str);
void		ft_strdelc(char *str, char c);
size_t		ft_strcountc(char *str, char c);
int			ft_strisspace(char *str);

#endif