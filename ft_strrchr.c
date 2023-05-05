/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:19:48 by octoross          #+#    #+#             */
/*   Updated: 2023/05/05 21:35:26 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last;

	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	i = 0;
	last = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			last = (char *) &(s[i]);
		i ++;
	}
	return (last);
}

// #include <string.h>
// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	if (argc > 2)
// 	{
// 		const char *s = argv[1];
// 		int c = argv[2][0];
// 		char *return_type = ft_strrchr(s, c);
// 		printf("'%s' '%s'\n", return_type, strrchr(s, c));
// 	}
// 	return (0);
// }