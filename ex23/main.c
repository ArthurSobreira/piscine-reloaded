/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:52:40 by arsobrei          #+#    #+#             */
/*   Updated: 2023/07/17 17:58:45 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef	struct pessoa
{
	float Peso;   // define o campo Peso
    int Idade;    // define o campo Idade
    float Altura; // define o campo Altura
} Pessoa;


void	cria_pessoa(Pessoa *nome_pessoa)
{	
	nome_pessoa->Peso = 60.4;
	nome_pessoa->Altura = 1.79;
	nome_pessoa->Idade = 23;
}

int	main(void)
{
	int	idade;

	Pessoa Joao;
	Pessoa Pedro;

	cria_pessoa(&Joao);
	
	idade = Pedro.Idade = 12;
	Pedro.Altura = 1.40;
	Pedro.Peso = 120;
	

	printf("Idade do Pedro: %d\n", idade);

	printf("João tem %d anos\n", Joao.Idade);
	printf("João tem %.2f de altura\n", Joao.Altura);
	printf("João pesa %.2f kilos\n", Joao.Peso);
	return(0);
}