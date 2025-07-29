/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiamma <nfiamma@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 21:16:33 by nfiamma           #+#    #+#             */
/*   Updated: 2025/07/29 21:23:01 by nfiamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char *str1 = "HolaMundo";
	char *str2 = "holamundo";
	char *str3 = "HOLAMUNDO";

	printf("%s son solo mayusculas? %d", str1, ft_str_is_uppercase(str1));
	printf("%s son solo mayusculas? %d", str2, ft_str_is_uppercase(str2));
	printf("%s son solo mayusculas? %d", str3, ft_str_is_uppercase(str3));
}
