#include <stdio.h>
#include <stdlib.h>


void inverter(int *v, int tamanho) {
    int *inicio = v;              
    int *fim = v + tamanho - 1;  
    int temp;

    // Troca os valores apontados por 'inicio' e 'fim' até que os ponteiros se cruzem
    while (inicio < fim) {
        temp = *inicio;   // Armazena temporariamente o valor do início
        *inicio = *fim;   // Atribui o valor do fim para o início
        *fim = temp;      // Atribui o valor temporário para o fim

        inicio++;  // Avança o ponteiro do início para frente
        fim--;     // Move o ponteiro do fim para trás
    }
}

int main() {
    int vetor[5] = {10, 50, 27, 33, 12};

    printf("Vetor original:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);  // Imprime os elementos do vetor original
    }
    printf("\n");

    inverter(vetor, 5);  // Chama a função para inverter o vetor

    printf("Vetor invertido:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);  // Imprime os elementos do vetor invertido
    }
    printf("\n");

    system("pause"); 
    return 0;
}
