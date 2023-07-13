/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:10:59 by arsobrei          #+#    #+#             */
/*   Updated: 2023/07/11 10:23:56 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while ((s1[index]) && (s1[index] == s2[index]))
	{
		index++;
	}
	return (s1[index] - s2[index]);
}

void	ft_swap(char **val1, char **val2)
{
	char	*temp;

	temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}

int	main(int argc, char *argv[])
{
	int	index1;
	int	index2;

	index1 = 1;
	while (index1 < argc)
	{
		index2 = 1;
		while (index2 < argc)
		{
			if (ft_strcmp(argv[index1], argv[index2]) < 0)
			{
				ft_swap(&argv[index1], &argv[index2]);
			}
			index2++;
		}
		index1++;
	}
	index1 = 1;
	while (index1 < argc)
	{
		ft_putstr(argv[index1]);
		ft_putchar('\n');
		index1++;
	}
	return (0);
}
