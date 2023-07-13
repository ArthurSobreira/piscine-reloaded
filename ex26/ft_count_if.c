/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:54:37 by arsobrei          #+#    #+#             */
/*   Updated: 2023/07/12 11:55:25 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (tab[index] != 0)
	{
		if (f(tab[index]) == 1)
		{
			count++;
		}
		index++;
	}
	return (count);
}

/* int	ft_atoi(char *str)
{
	int	index;
	int	number;

	index = 0;
	number = 0;
	while ((str[index]) && ((str[index] >= '0') && (str[index] <= '9')))
	{
		number = number * 10 + (str[index] - '0');
		index++;
	}
	return (number);
}

int	ft_is_even(char *number)
{
	if (ft_atoi(number) % 2 == 0)
	{
		return (1);
	}
	return (0);
}

int main(void)
{
	char	*my_array[] = {"6", "1", "17"};
	
	printf("%d\n", ft_count_if(my_array, ft_is_even));
	return (0);
} */