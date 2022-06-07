/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimatsub <mimatsub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 21:58:55 by mimatsub          #+#    #+#             */
/*   Updated: 2022/05/30 21:22:57 by mimatsub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*p;

	if (!s || !f)
		return (0);
	p = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		p[i] = f(i, s[i]);
		i++;
		s++;
	}
	p[i] = '\0';
	return (p);
}

/*
char F(unsigned int i, char ch){
	ch += 1;
	return (ch);
}

int mian(voi){
	char *p;
	p = malloc((size_t)UINT_MAX + 10);
	ft_memset(p, 'a', (size_t)UINT_MAX + 10);
	p[(size_t)UINT_MAX + 10] = '\0';
	ft_strmapi(p. F);
}

// 31: if (i % 100000000 == 0)
// 32: printf("loop%u", i);
*/
