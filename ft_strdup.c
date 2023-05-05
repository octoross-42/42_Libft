/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 23:00:32 by octoross          #+#    #+#             */
/*   Updated: 2023/05/05 21:38:34 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicate;
	int		i;
	size_t	len;

	if (!s)
		return (0);
	len = ft_strlen(s);
	duplicate = (char *)malloc(sizeof(char) * (len + 1));
	if (!duplicate)
		return (0);
	duplicate[len] = '\0';
	i = 0;
	while (s[i])
	{
		duplicate[i] = s[i];
		i ++;
	}
	return (duplicate);
}

// int	main(int argc, char **argv)
// {
// 	if (argc > 1)
// 	{
// 		const char *s = argv[1];
// 		char *return_type = ft_strdup(s);
// 		printf("'%s'\n", return_type);
// 		free(return_type);
// 	}
// 	return (0);
// }