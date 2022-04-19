/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcakirog <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:47:19 by kcakirog          #+#    #+#             */
/*   Updated: 2022/03/15 14:54:13 by kcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f) (void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
#include <stdio.h>
void	f(void *str)
{
	printf("%s\n",str);
}

int main()
{
	t_list *kfc = ft_lstnew("furkan");
	t_list *cfk = ft_lstnew("kaan");
	kfc->next = cfk;
	cfk->next = NULL;
	ft_lstiter(kfc, &f);
}
*/
