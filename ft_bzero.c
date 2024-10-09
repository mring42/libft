/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:36:05 by mring             #+#    #+#             */
/*   Updated: 2024/10/09 15:42:39 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	size_t			count;
	unsigned char	*temp;

	temp = s;
	count = 0;
	while (count < len)
	{
		temp[count] = 0;
		count++;
	}
}

// writes n zeroed bytes to the string s. If n is zero does nothing.

// #include <stdio.h>
// int	main(void)
// {
// 	int arr[5] = {1, 2, 3, 4, 5};
//     printf("First there was: ");
//     for (int i = 0; i < 5; i++)
// 		printf("%d ", arr[i]);
//     printf("\n");
//     ft_bzero(arr, 3 * sizeof(int));
//     printf("Now there is   : ");
//     for (int i = 0; i < 5; i++)
//         printf("%d ", arr[i]);
// 	printf("\n");
// }