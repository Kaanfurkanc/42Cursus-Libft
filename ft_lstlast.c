/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcakirog <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:16:06 by kcakirog          #+#    #+#             */
/*   Updated: 2022/03/15 14:23:50 by kcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*
#include <stdio.h>

int main(void)
{
	t_list *bab = ft_lstnew("ababab");
	t_list *saas = ft_lstnew("hdhdh");
	bab->next = saas;
	saas->next = NULL;
	t_list *son = ft_lstlast(bab);
	printf("%s", son->content);
}
*/
