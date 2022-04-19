/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcakirog <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:08:01 by kcakirog          #+#    #+#             */
/*   Updated: 2022/03/03 16:19:03 by kcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = dst;
	s = src;
	if (d > s)
	{
		while (len-- > 0)
			*(d + len) = *(s + len);
	}
	else
	{
		if (!(dst) && !(src))
			return (0);
		while (len-- > 0)
			*(d++) = *(s++);
	}
	return (dst);
}

/*
int main(void)
{
	char dest[] = "merhaba";
	char  source[] = "mer";
	size_t len = 3;
	printf("%s",ft_memmove(dest,source,len));
	return (0);
}
*/
