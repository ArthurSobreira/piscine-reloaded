/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:57:11 by arsobrei          #+#    #+#             */
/*   Updated: 2023/07/11 10:52:48 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else
	{
		while (nb >= 1)
		{
			fact = fact * nb;
			nb = nb - 1;
		}
	}
	return (fact);
}

/* int	main(void)
{
	int	nbr;

	nbr = 14;
	printf("!%d = %d", nbr, ft_iterative_factorial(nbr));
	return(0);
} */