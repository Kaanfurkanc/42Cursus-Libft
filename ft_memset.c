/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcakirog <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:48:27 by kcakirog          #+#    #+#             */
/*   Updated: 2022/03/15 16:29:57 by kcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
			i++;
	}
	return (b);
}	
/*
int main(void)
{
	char str[] = "kaanfurkanc";
	int i = '+';
	size_t len = 4;

	printf("%s",ft_memset(str,i,len));
	return (0);
}
*/
