/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:08:45 by arsobrei          #+#    #+#             */
/*   Updated: 2023/07/10 19:13:29 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	index;

	index = 1;
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (index * index <= nb)
		{
			if (index * index == nb)
			{
				return (index);
			}
			else if (index >= 46341)
			{
				return (0);
			}
			index++;
		}
	}
	return (0);
}

/* int	main(void)
{
	int	nbr;

	nbr = 142;
	if (ft_sqrt(nbr) == 0)
	{
		printf("%d não possui raíz exata.", nbr);
	}
	else
	{
		printf("A raiz de %d é %d", nbr, ft_sqrt(nbr));	
	}
} */