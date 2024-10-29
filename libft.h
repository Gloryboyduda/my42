/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 03:54:44 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 15:58:35 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*memset(void *s, int c, size_t n);
int		ft_atoi(char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t len);
char	*strchr(const char *s, int c);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strrchr(const char *s, int c);

#endif
