/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:13:24 by octoross          #+#    #+#             */
/*   Updated: 2023/05/08 18:18:09 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (*lst)
	{
		if ((*lst)->next)
		{
			ft_lstclear(&(*lst)->next, del);
			free((*lst)->next);
		}
		ft_lstdelone(*lst, del);
	}
	*lst = 0;
}
