/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcakirog <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:16:55 by kcakirog          #+#    #+#             */
/*   Updated: 2022/03/01 17:45:11 by kcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n-- > 0)
	{
		*(str++) = 0;
	}
}

/*
#include <stdio.h>

int main()
{
	char str[] = "furkan";
	puts (str);
	ft_bzero(str, 2);
	puts (str);
	return (0);
}
*/
