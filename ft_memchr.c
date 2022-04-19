/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcakirog <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:09:17 by kcakirog          #+#    #+#             */
/*   Updated: 2022/03/08 16:19:32 by kcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	str = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (char)c)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (0);
}

/*
int main(void)
{
	char *k = "kaanfurkanc";

	printf("%s", ft_memchr(k,'f',4));
	return (0);
}
*/
