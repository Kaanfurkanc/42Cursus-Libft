/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcakirog <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:00:31 by kcakirog          #+#    #+#             */
/*   Updated: 2022/03/15 14:06:39 by kcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int main()
{
	t_list *lst = ft_lstnew("kaan");
	t_list *new = ft_lstnew("furkan");
	ft_lstadd_front(&lst, new);
	printf("%s\n", lst -> content);
	printf("%s", lst -> next -> content);
}*/
