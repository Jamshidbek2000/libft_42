/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 12:01:37 by jergashe          #+#    #+#             */
/*   Updated: 2023/01/27 07:17:08 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;

typedef struct t_file_obj
{
	int		new_line_index;
	int		fd;
}t_file_obj;

size_t		ft_strlen(const char *s);
int			ft_isprint(int c);
int			ft_isdigit(int c);
int			t_isascii(int c);
void		*ft_memset(void *b, int c, size_t len);
char		*ft_strrchr(const char *s, int c);
void		ft_bzero(void *s, size_t n);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
int			ft_atoi(const char *str);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
int			ft_isalpha(int c);
int			ft_isalnum(int c);
void		*ft_calloc(size_t count, size_t size);
char		*ft_strdup(const char *s1);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void		to_lower_case(char *str);
int			ft_is_float(char *str);
double		ft_atof(const char *str);
char		*ft_strjoin_free_1(char *s1, char *s2);
char		*ft_strndup(const char *s, size_t n);
void		ft_print_2d_char_array(char **array_2d);
void		ft_free_2d_array(void **array_2d);
int			ft_is_space_char(int c);
long		ft_atol(const char *str);
int			ft_is_all_digits(char *str);
// PRINTF
int			ft_printf(const char *input, ...);
int			ft_print_char(char ch);
int			ft_print_str(char *str);
int			ft_print_hex(unsigned int hex, char x_specifier);
int			ft_print_dec(long number);
int			ft_print_address(unsigned long long address);
int			ft_print_unsigned(unsigned int number);
int			get_len_num(long number);
int			get_len_hex(unsigned long long hex);
void		ft_hex_in_action(unsigned long long hex, char x_specifier);
int			ft_pr_putchar_fd(char c, int fd);
// GET_NEXT_LINE
char		*get_next_line(int fd);
int			containts_new_line(char *str);;
t_file_obj	*get_t_file_obj(int new_fd);
size_t		gn_strlen(const char *s);
char		*gn_strjoin_free_1(char *s1, char *s2);
char		*ft_strndup2(char *str, int start, int end);
int			ft_sqrt(int num);
int			ft_read_line(char **line);

#endif