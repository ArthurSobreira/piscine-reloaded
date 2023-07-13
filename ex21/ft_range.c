/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:17:52 by arsobrei          #+#    #+#             */
/*   Updated: 2023/07/11 14:41:10 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	index;
	int	position;

	array = malloc((max - min) * sizeof(int));
	if ((min > max) || (min == max))
	{
		return (NULL);
	}
	position = 0;
	index = min;
	while (min < max)
	{
		array[position] = min;
		min++;
		position++;
	}
	return (array);
}

/* int main(void)
{
	int	min;
	int	max;
	int	*my_array;

	min = 10;
	max = 15;

	my_array = ft_range(min, max);
	for (int i = 0; i < (max - min); i++)
	{
		printf("[%d] ", my_array[i]);
	}
	return (0);
} */
