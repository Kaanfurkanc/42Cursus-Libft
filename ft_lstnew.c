/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcakirog <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:17:44 by kcakirog          #+#    #+#             */
/*   Updated: 2022/03/15 13:23:06 by kcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*liste;

	liste = (t_list *)malloc(sizeof(t_list));
	if (!liste)
		return (NULL);
	liste -> content = content;
	liste -> next = NULL;
	return (liste);
}
/*
#include <stdio.h>
int main()
{
	t_list *test;
	test = ft_lstnew("kaankaan";
	printf("ici: %s", test->content);
}*/
