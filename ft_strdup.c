/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcakirog <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:04:42 by kcakirog          #+#    #+#             */
/*   Updated: 2022/03/01 18:45:03 by kcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*s2;

	i = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(char) * (i + 1));
	if (s2 == NULL)
		return (NULL);
	s2[i] = '\0';
	while (i--)
		s2[i] = s1[i];
	return (s2);
}

/*
int main(void)
{
	char *str;

	str = "furkan";
	printf("Before  allocation : %s\n ",str);
	printf("After allocation : ");
	printf(" %s ", ft_strdup(str));
	return (0);
}
*/
