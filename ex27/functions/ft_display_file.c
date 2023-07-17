/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:05:35 by arsobrei          #+#    #+#             */
/*   Updated: 2023/07/17 18:16:24 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	ft_display_file(char *file_name)
{
	int		file_desc;
	int		byte_nb;
	char	buff;

	byte_nb = 1;
	file_desc = open(file_name, O_RDONLY);
	if (file_desc == -1)
	{
		return (0);
	}
	while (byte_nb > 0)
	{
		byte_nb = read(file_desc, &buff, 1);
		if (byte_nb == -1)
		{
			return (0);
		}
		else if (byte_nb > 0)
		{
			ft_putchar(buff);
		}
	}
	close(file_desc);
	return (0);
}
