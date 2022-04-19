/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcakirog <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:41:14 by kcakirog          #+#    #+#             */
/*   Updated: 2022/03/14 10:53:09 by kcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	s[10];
	int		i;
	long	nbr;

	nbr = n;
	i = 0;
	if (nbr == 0)
		write(fd, "0", 1);
	if (nbr < 0)
	{
		nbr *= -1;
		write(fd, "-", 1);
	}
	while (nbr)
	{
		s[i++] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	while (i--)
		write (fd, s + i, 1);
}
/*
#include <fcntl.h>
int main()
{
	int fd = open("deneme9.txt", O_CREAT | O_RDWR, 0777);
	ft_putendl_fd(14, fd);
}
*/
