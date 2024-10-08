/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:28:29 by mring             #+#    #+#             */
/*   Updated: 2024/10/08 13:55:13 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int ft_isalpha(int alpha)
{
	if (alpha >= 'a' && alpha <= 'z')
		return (2);
	return (alpha >= 'A' && alpha <= 'Z');
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_isalpha('1'));
// }