#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet1[5]; 
    int vet2[5]; 

    printf("Esse programa escrevera os valores de dois vetores intercalados\n");

    printf("Digite os valores (5) do primeiro vetor: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &vet1[i]);  // Leitura dos valores do primeiro vetor
    
    system("cls"); 

    printf("Digite os valores (5) do segundo vetor: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &vet2[i]);  // Leitura dos valores do segundo vetor
    
    system("cls"); 

    printf("Os valores intercalados sao:\n");

    for (int i = 0; i < 5; i++)
        printf("%d %d ", vet1[i], vet2[i]); // Imprime um valor do primeiro vetor e um valor do segundo vetor, alternadamente
    
    printf("\n");

    system("pause");
    return 0;
}
