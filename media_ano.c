#include <stdio.h>   
#include <locale.h>  

int main () { 
    // Configura o programa para aceitar caracteres da língua portuguesa (acentos, cedilha)
    setlocale(LC_ALL, "portuguese");

    // Declaração de variáveis inteiras para armazenar a quantidade de produtos por ano
    int tv_2020, tv_2021, tv_2022;
    int noteb_2020, noteb_2021, noteb_2022;
    int smart_2020, smart_2021, smart_2022;
    
    // Declaração de variáveis de ponto flutuante para armazenar as médias calculadas
    float media_2020 = 0;
    float media_2021 = 0;
    float media_2022 = 0;

    // --- Bloco de entrada de dados ---
    // O usuário digita os valores que são armazenados nos endereços de memória (&) das variáveis
    printf("Digite as TVs vendidas em 2020: ");
    scanf("%d", &tv_2020);
    printf("Digite as TVs vendidas em 2021: ");
    scanf("%d", &tv_2021);
    printf("Digite as TVs vendidas em 2022: ");
    scanf("%d", &tv_2022);

    printf("Digite os Notebooks vendidos em 2020: ");
    scanf("%d", &noteb_2020);
    printf("Digite os Notebooks vendidos em 2021: ");
    scanf("%d", &noteb_2021);
    printf("Digite os Notebooks vendidos em 2022: ");
    scanf("%d", &noteb_2022);

    printf("Digite os Smartphones vendidos em 2020: ");
    scanf("%d", &smart_2020);
    printf("Digite os Smartphones vendidos em 2021: ");
    scanf("%d", &smart_2021);
    printf("Digite os Smartphones vendidos em 2022: ");
    scanf("%d", &smart_2022);

    // --- Bloco de processamento (Cálculos) ---
    // A divisão por 3.0 garante que o resultado seja tratado como float 
    media_2020 = (tv_2020 + noteb_2020 + smart_2020) / 3.0;
    media_2021 = (tv_2021 + noteb_2021 + smart_2021) / 3.0;
    media_2022 = (tv_2022 + noteb_2022 + smart_2022) / 3.0;

    // --- Bloco de Comparação ---
    // Usa lógica booleana: retorna 1 para verdadeiro e 0 para falso
    printf("2020 obteve a maior média? %d\n", ((media_2020 > media_2021) && (media_2020 > media_2022)));
    printf("2021 obteve a maior média? %d\n", ((media_2021 > media_2022) && (media_2021 > media_2020)));
    printf("2022 obteve a maior média? %d\n", ((media_2022 > media_2020) && (media_2022 > media_2021)));

    // --- Bloco de saída de resultados ---
    printf("A média de 2020 foi: %.2f\n", media_2020);
    printf("A média de 2021 foi: %.2f\n", media_2021);
    printf("A média de 2022 foi: %.2f\n", media_2022);

    return 0; 
}