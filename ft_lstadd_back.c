/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcakirog <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:25:05 by kcakirog          #+#    #+#             */
/*   Updated: 2022/03/15 14:31:54 by kcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

/*
#include <stdio.h>

int main()
{
	t_list *lst = ft_lstnew("kaan");
	t_list *new = ft_lstnew("furkan");
	ft_lstadd_back(&lst, new);
	printf("%s\n", lst -> content);
	printf("%s", lst -> next -> content);
}
*/
