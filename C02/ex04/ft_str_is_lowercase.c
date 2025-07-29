/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiamma <nfiamma@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:29:37 by nfiamma           #+#    #+#             */
/*   Updated: 2025/07/29 20:45:42 by nfiamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return(0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char *str1 = "HolaMundo";
	char *str2 = "holamundo";

	printf("%s son solo minusculas? %d", str1, ft_str_is_lowercase(str1));
	printf("%s son solo minusculas? %d", str2, ft_str_is_lowercase(str2));
}
