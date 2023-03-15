/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebronzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 08:19:57 by ebronzin          #+#    #+#             */
/*   Updated: 2023/01/26 08:27:00 by ebronzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_remove_lst(t_list **lst)
{
	t_list	*tmp;

	if (*lst)
	{
		tmp = *lst;
		*lst = NULL;
		ft_memset(tmp, 0, sizeof(t_list));
		free(tmp);
	}
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	ft_remove_lst(&lst);
}
