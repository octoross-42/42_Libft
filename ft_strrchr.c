/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:19:48 by octoross          #+#    #+#             */
/*   Updated: 2023/05/03 22:19:48 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last;

	if (!s)
		return (0);
	i = 0;
	last = 0;
	while (s[i])
	{
		if (s[i] == c)
			last = (char *) &(s[i]);
		i ++;
	}
	return (last);
}
