/*Nayara Escudeiro - SegInfo
Programação 1 - prova12.cpp
22/04/2023

Enunciado: Foi definido que os funcionários de uma determinada empresa que tiverem salário bruto 
entre três e cinco salários-mínimos serão selecionados para participar de uma pesquisa. Crie um programa 
que peça o valor do salário bruto (em reais) e exiba a mensagem PARTICIPARÁ DA PESQUISA caso deva ser 
selecionado para participar da pesquisa. Por outro lado, caso não deva ser selecionado para participar,
deverá ser exibida a mensagem NÃO PARTICIPARÁ DA PESQUISA. 
*/

//adicionar bibliotecas 
#include <stdio.h>
#include <locale.h>

//início

int main() {
    setlocale (LC_ALL, ""); // adiciona caracteres especiais
    float salario, salario_min = 1320.0; // valor do salário mínimo em reais
    
    // entrada de dados
    printf("Informe o valor do salário bruto em reais: ");
    
    scanf("%f", &salario);
    
    // Verificação se o salário bruto está entre três e cinco salários-mínimos
    if (salario >= 3 * salario_min && salario <= 5 * salario_min) {

//saída de dados
        printf("PARTICIPARÁ DA PESQUISA\n");
    } else {
        printf("NÃO PARTICIPARÁ DA PESQUISA\n");
    }
    
    return 0; // Indica que a execução foi concluída sem erros
}
