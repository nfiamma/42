/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiamma <nfiamma@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 22:15:11 by nfiamma           #+#    #+#             */
/*   Updated: 2025/09/29 22:22:57 by nfiamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		lenght;

	lenght = 0;
	while (src[lenght])
	{
		lenght++;
	}
	dest = (char *) malloc(sizeof(char) * (lenght + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < lenght)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* 
int	main(void)
{
	char	*src = "string";

	printf("Copia: %s\n", ft_strdup(src));
	printf("Original: %s\n", strdup(src));
} */
