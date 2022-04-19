/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcakirog <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:35:06 by kcakirog          #+#    #+#             */
/*   Updated: 2022/03/15 14:39:17 by kcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *list, void (*del)(void *))
{
	del(list->content);
	free(list);
}

/*
#include <stdio.h>

void	f(void *str)
{
	printf("%s",str);
}

int main()
{
	t_list *aba = ft_lstnew("kaanfurkan");
	ft_lstdelone(bur,&f);
}
*/
