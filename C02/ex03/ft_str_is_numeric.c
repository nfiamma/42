/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiamma <nfiamma@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:09:18 by nfiamma           #+#    #+#             */
/*   Updated: 2025/07/29 20:26:50 by nfiamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char *str1 = "234 423";
	char *str2 = "24a2133";
	char *str3 = "1234567";

	printf("%s son solo de digitos? %d", str1, ft_str_is_numeric(str1));
	printf("%s son solo de digitos? %d", str2, ft_str_is_numeric(str2));
	printf("%s son solo de digitos? %d", str3, ft_str_is_numeric(str3));
}
