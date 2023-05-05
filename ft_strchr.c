/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:16:48 by octoross          #+#    #+#             */
/*   Updated: 2023/05/05 18:00:05 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
		i ++;
	if (s[i] == c)
		return ((char *) &(s[i]));
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char **argv)
// {
// 	if (argc > 2)
// 	{
// 		const char *s = argv[1];
// 		char	c = argv[2][0];
// 		char *return_type = ft_strchr(s, c);
// 		printf("'%s'\n", return_type);
// 		free(return_type);
// 	}
// 	return (0);
// }
