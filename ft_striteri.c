/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:59:15 by duandrad          #+#    #+#             */
/*   Updated: 2024/11/06 19:59:40 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, s);
		i++;
	}
}
/* 
void f(unsigned int n, char *str)
{
	while (*str)
		*str + n;
}

int main()
{
	char *test = "hello";
	ft_striteri(test, f);
	printf("%s", test);
} */