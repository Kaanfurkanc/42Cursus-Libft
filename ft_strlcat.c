/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcakirog <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:29:35 by kcakirog          #+#    #+#             */
/*   Updated: 2022/03/03 19:38:13 by kcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	i = ft_strlen(dst);
	while (*src && i + 1 < size)
	{
		dst[i] = *src++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}

/*
int main(void)
{
	char d[15] = "kaan";
	char s[15] = "furkan";
	size_t n = 6;

	printf("%zu \n",ft_strlcat(d,s,n));
	int i;
	i = 0;
	while( i < strlen(d))
	{
		printf("%c",d[i]);
		i++;
	}
	return (0);
}
*/
