/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiamma <nfiamma@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 22:54:15 by nfiamma           #+#    #+#             */
/*   Updated: 2025/07/31 23:17:28 by nfiamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*inicio(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	inicio(str);

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	i = 1;

	while (str[i])
	{
		if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z')
			|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("Before: %s", str);
	printf("After: %s", ft_strcapitalize(str));
}
