/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:12:26 by mring             #+#    #+#             */
/*   Updated: 2024/10/10 15:26:42 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;
	char			*result;

	cc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			result = ((char *) &s[i]);
		i++;
	}
	return ((char *) &s[i]);
}
