/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:37:00 by mring             #+#    #+#             */
/*   Updated: 2024/10/17 12:45:07 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	**ft_split(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	start;
// 	size_t	dd;
// 	size_t	d;
// }

// int	main(void)
// {
// 	char	**dst;
// 	size_t	j;

// 	dst = ft_split("lorem ipsum dolor sit amet,	consectetur \
// adipiscing elit. Sed non risus. Suspendisse",
// 					' ');
// 	for (size_t i = 0;; i++)
// 	{
// 		if (dst[i] != NULL)
// 		{
// 			printf("%zu: %s\n", i, dst[i]); // Print the string
// 			// Inner loop to print each character in dst[i]
// 			j = 0;
// 			while (dst[i][j] != '\0')
// 			{
// 				// Instead of using strlen, just check for '\0'
// 				printf("  [%zu][%zu]: %c\n", i, j, dst[i][j]);
// 				// Print each char
// 				j++;
// 			}
// 			// After the loop, print the position of the NULL terminator
// 			printf("  [%zu][%zu]: NULL\n", i, j);
// 		}
// 		else
// 		{
// 			printf("%zu: NULL\n", i); // Print "NULL" for the NULL terminator
// 			break ;                    // Exit the loop when we hit the NULL
// 		}
// 	}
// }

/*


ft_split takes a string s* and a char c.
example: s* "This.is.a.string!" with the delimiter char c '.'
the result should be 4 (5 with NULL) strings (an array of strings): "This" "is" "a" "string!" "NULL"
NULL CHECKS: s empty? return NULL. c not found? return an array containing the entire string ending with NULL.

Count sub strings: check how many times c apears, that many sub strings
	+ one (+ two with NULL) are created.

allocate memory including NULL, use count above for it.
> ft_strlen? possibly use ft_substr to let it handle it?

splitting the string:
each split string memory allocated.
Only null end of array -> may not be able to use ft_substr

Return the array.








*/