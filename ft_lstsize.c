/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcakirog <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:08:46 by kcakirog          #+#    #+#             */
/*   Updated: 2022/03/15 14:14:47 by kcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	r;

	r = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		r++;
	}
	return (r);
}

/*
int main(void)
{
	t_list *first = ft_lstnew("kaan");
	t_list *second = ft_lstnew("furkan");
	t_list *thirth = ft_lstnew("çakıroğlu");
	first->next = second;
	second->next = thirth;
	thirth->next = NULL;
	printf("%d", ft_lstsize(first));
}
*/
