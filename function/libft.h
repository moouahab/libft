/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:23:12 by moouahab          #+#    #+#             */
/*   Updated: 2023/10/19 21:23:12 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int		ft_atoi(char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

void	ft_putchar_fd(char	c, int		fd);
void 	ft_putstr_fd(char	*str, int	fd);
void	ft_putendl_fd(char	*s, int	fd);
void	ft_putnbr_fd(int	nb, int		fd);

size_t	ft_strlen(const char *str);
size_t  ft_strlcat(char  *dst, char const	*src, size_t    size);
size_t	ft_strlcpy(char	*dst, const char	*src, size_t	size);

char	*ft_strdup(const char *src);

char	*ft_strchr(const char *str, int c);
char    *ft_strrchr(char const *str, int c);

char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char const	*s1, char const	*s2);
char 	**ft_split(char const *str, char charset);

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t n);
char	*ft_substr(char const	*s, unsigned int	start, size_t	len);

int		ft_strncmp(const char	*s1, const char	*s2, size_t n);
int		ft_memcmp(const void	*ptr1, const void	*ptr2, size_t num);

void	ft_bzero(void	*s, size_t n);
void	*ft_memset(void	*s, int	c, size_t	n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *ptr, int value, size_t num);
void	*ft_calloc(size_t num_elements, size_t element_size);

#endif
