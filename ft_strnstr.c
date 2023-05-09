/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:37:56 by octoross          #+#    #+#             */
/*   Updated: 2023/05/09 15:02:15 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len_s2;

	if (!s1)
		return (0);
	if (!s2 || !s2[0])
		return ((char *)s1);
	if (ft_strlen(s2) > n)
		return (0);
	i = 0;
	len_s2 = ft_strlen(s2);
	while (i + len_s2 < n)
	{
		if (ft_strncmp((char *)s1[i], s2, len_s2) == 0)
			return ((char *)&(s1[i]));
	}
	return (0);
}

// #include <bsd/string.h>

// int	main(int argc, char **argv)
// {
// 	if (argc > 3)
// 	{
// 		printf("mine : %s\n ref : %s\n", 
// 			ft_strnstr(argv[1], argv[2], atoi(argv[3])), 
// 			strnstr(argv[1], argv[2], atoi(argv[3])));
// 	}
// }