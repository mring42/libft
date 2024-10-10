/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:37:55 by mring             #+#    #+#             */
/*   Updated: 2024/10/10 11:08:03 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				count;
	unsigned char		*temp_dst;
	const unsigned char	*temp_src;

	temp_dst = dst;
	temp_src = src;
	count = 0;
	if (!dst && !src)
		return (dst);
	if (temp_dst > temp_src)
		while (n-- > 0)
			temp_dst[n] = temp_src[n];
	else
	{
		while (count < n)
		{
			temp_dst[count] = temp_src[count];
			count++;
		}
	}
	return (dst);
}

//

// int	main(void)
// {
// 	char src[] = "bruh idk man";
// 	char dst[] = "lets see it!";
// 	memmove(dst, src, 5);
// 	printf("%s\n", dst);
// }
