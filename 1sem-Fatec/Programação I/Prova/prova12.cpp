/*Nayara Escudeiro - SegInfo
Programa��o 1 - prova12.cpp
22/04/2023

Enunciado: Foi definido que os funcion�rios de uma determinada empresa que tiverem sal�rio bruto 
entre tr�s e cinco sal�rios-m�nimos ser�o selecionados para participar de uma pesquisa. Crie um programa 
que pe�a o valor do sal�rio bruto (em reais) e exiba a mensagem PARTICIPAR� DA PESQUISA caso deva ser 
selecionado para participar da pesquisa. Por outro lado, caso n�o deva ser selecionado para participar,
dever� ser exibida a mensagem N�O PARTICIPAR� DA PESQUISA. 
*/

//adicionar bibliotecas 
#include <stdio.h>
#include <locale.h>

//in�cio

int main() {
    setlocale (LC_ALL, ""); // adiciona caracteres especiais
    float salario, salario_min = 1320.0; // valor do sal�rio m�nimo em reais
    
    // entrada de dados
    printf("Informe o valor do sal�rio bruto em reais: ");
    
    scanf("%f", &salario);
    
    // Verifica��o se o sal�rio bruto est� entre tr�s e cinco sal�rios-m�nimos
    if (salario >= 3 * salario_min && salario <= 5 * salario_min) {

//sa�da de dados
        printf("PARTICIPAR� DA PESQUISA\n");
    } else {
        printf("N�O PARTICIPAR� DA PESQUISA\n");
    }
    
    return 0; // Indica que a execu��o foi conclu�da sem erros
}
