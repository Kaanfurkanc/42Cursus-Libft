/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcakirog <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:54:36 by kcakirog          #+#    #+#             */
/*   Updated: 2022/03/14 11:03:00 by kcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{	
		ft_putchar_fd(s[i], fd);
		i++;
	}	
}
/*
#include <fcntl.h>
int main()
{
	int fd = open("deneme10.txt", O_CREAT | O_RDWR, 0777);
	ft_putstr_fd("String", fd);
}
*/
