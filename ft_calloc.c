/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:52:01 by octoross          #+#    #+#             */
/*   Updated: 2023/05/03 22:52:01 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*calloced;

	calloced = (void *)malloc(size * nmemb);
	if (!calloced)
		return (0);
	ft_bzero(calloced, nmemb);
	return (calloced);
}
