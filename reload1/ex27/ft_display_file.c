/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiamma <nfiamma@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 18:57:33 by nfiamma           #+#    #+#             */
/*   Updated: 2025/10/04 18:59:14 by nfiamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_display_file(char *file_name)
{
	int		file;
	int		reading;
	char	buffer;

	file = open(file_name, O_RDONLY);
	if (file == -1)
		return (0);
	reading = read(file, &buffer, 1);
	while (reading != 0)
	{
		if (reading == -1)
			return (0);
		write(1, &buffer, 1);
		reading = read(file, &buffer, 1);
	}
	close(file);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (!ft_display_file(argv[1]))
			write(2, "Cannot read file.\n", 18);
	}
	else
	{
		if (argc < 2)
			write(2, "File name missing.\n", 19);
		if (argc > 2)
			write(2, "Too many arguments.\n", 20);
	}
	return (0);
}
