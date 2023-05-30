/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:37:56 by octoross          #+#    #+#             */
/*   Updated: 2023/05/30 15:32:21 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	if (!big && len == 0)
		return (NULL);
	if (!*little)
		return ((char *)big);
	little_len = ft_strlen(little);
	while (*big && len >= little_len)
	{
		if (ft_strncmp(big, little, little_len) == 0)
			return ((char *)big);
		++big;
		--len;
	}
	return (NULL);
}


// #include <bsd/string.h>

// int	main(int argc, char **argv)
// {
// 	if (argc > 3)
// 	{
// 		printf("mine : %s\n ref : %s\n", 
// 			ft_strnstr(argv[1], argv[2], atoi(argv[3])), 
// 			strnstr(argv[1], argv[2], atoi(argv[3])));
// 		printf("mine : %s\n ref : %s\n", 
// 			ft_strnstr(NULL, argv[2], atoi(argv[3])),
// 			strnstr(NULL, argv[1], atoi(argv[3])));
			
// 	}
// }