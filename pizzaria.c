#include <stdio.h>
#include <locale.h>

int main() {
    // Configura o programa para aceitar caracteres e pontuação brasileira (como a vírgula e acentos)
    setlocale (LC_ALL, "portuguese");

    // Declaração das variáveis 
    float valor_conta, percentual_desconto;
    float valor_individual, valor_desconto, total_desconto;
    int qtd_pessoas;

    // --- ENTRADA DE DADOS ---
    printf("Valor da conta: ");
    scanf("%f", &valor_conta);
    printf("Quantidade de pessoas: ");
    scanf("%d", &qtd_pessoas);
    printf("Qual o percentual de desconto: ");
    scanf("%f", &percentual_desconto);
    
    // Verifica se o desconto digitado é válido (entre 0 e 100)
    if (percentual_desconto <= 100) {
        
        // Calcula quanto o desconto vale em dinheiro
        valor_desconto = valor_conta * (percentual_desconto / 100.0);
        
        // Subtrai o desconto do valor original para ter o novo total
        total_desconto = valor_conta - valor_desconto;
        
        // Validação de segurança: verifica se há pelo menos 1 pessoa para dividir a conta
        if (qtd_pessoas > 0) {
            
            // Calcula a parte de cada um usando o valor já com desconto
            valor_individual = total_desconto / qtd_pessoas;

            // --- SAÍDA DE DADOS (RESUMO) ---
            printf("-------- RESUMO DE PEDIDO -------- \n");
            printf("Valor total: %.2f\n", valor_conta);
            printf("Valor com desconto: %.2f\n", total_desconto);
            printf("Valor por pessoa: %.2f\n", valor_individual);
            
        } else {
            // Caso o usuário digite 0 ou número negativo em pessoas
            printf("Erro! A quantidade de pessoas deve ser maior que zero.\n");
        }
        
    } else {
        // Caso o usuário digite um desconto impossível (ex: 150%)
        printf("Desconto inválido! Digite um valor entre 0 e 100.");
    }

    return 0;
}