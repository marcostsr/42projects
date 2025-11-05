/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/10/17 13:32:50 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_msg(int argc)
{
	if (argc < 2)
		write(1, "File name missing.\n", 19);
	else
		write(1, "Too many arguments.\n", 20);
}

int	main(int argc, char **argv)
{
	char	buffer[4096];
	int		fd;
	int		bytes_read;

	if (argc != 2)
	{
		ft_msg(argc);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return (1);
	}
	bytes_read = read(fd, buffer, 4096);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, 4096);
	}
	close(fd);
	return (0);
}
