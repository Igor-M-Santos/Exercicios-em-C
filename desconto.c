#include <stdio.h>
#include <locale.h> 

// Definição da taxa de desconto como uma constante (5%)
#define taxa_desconto 0.05

int main() { 
    // Configura a acentuação e símbolos para o padrão Português (R$, ç, á, etc.)
    setlocale(LC_ALL, "Portuguese");

    // Declaração das variáveis com valores iniciais
    float valor_produto = 1500.00;

    // Cálculo do Imposto: Adiciona 10% ao valor original do produto
    float imposto = valor_produto + (valor_produto * 0.10);
    
    // Cálculo do Desconto: Aplica a taxa de 5% sobre o valor já com imposto
    float desconto = imposto * taxa_desconto;

    // Preço Final: Subtrai o valor do desconto do montante com imposto
    float precoFinal = imposto - desconto;

    // Exibição dos resultados formatados com duas casas decimais (%.2f)
    printf("O valor do produto é de:%.2f\n", valor_produto);
    printf("O valor com imposto é de: %.2f\n", imposto);
    printf("O desconto é de: %.2f\n", desconto);
    printf("O valor final será de: %.2f", precoFinal);
    return 0;
}