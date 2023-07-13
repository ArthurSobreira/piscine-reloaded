/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:19:04 by arsobrei          #+#    #+#             */
/*   Updated: 2023/07/11 13:04:26 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len + 1);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*new_string;

	new_string = malloc(ft_strlen(src));
	index = 0;
	while (src[index])
	{
		new_string[index] = src[index];
		index++;
	}
	new_string[index] = '\0';
	return (new_string);
}

/* int	main(void)
{
	char *str = "tudo bão";
	char *new_str;

	printf("%s\n", str);

	new_str = ft_strdup(str);

	printf("%s\n", new_str);
	return (0);
} */