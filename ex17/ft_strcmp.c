/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:48:11 by arsobrei          #+#    #+#             */
/*   Updated: 2023/07/11 09:54:45 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while ((s1[index] != '\0') && (s1[index] == s2[index]))
	{
		index++;
	}
	return (s1[index] - s2[index]);
}

/* int main(void)
{
	char	str1[] = "Teste";
	char	str2[] = "Tes";
    
	printf("Primeira string: %s\n", str1);	
    printf("Segunda string: %s\n", str2);
    
    printf("Valor de comparação (strcmp): %d\n", strcmp(str1, str2));
    printf("Valor da comparação (ft_strcmp): %d\n", ft_strcmp(str1, str2));
    return(0);
} */