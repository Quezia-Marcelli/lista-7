#include <stdio.h>
#include <stdlib.h>


int pertence(int x, int T, int *v) {
    for (int i = 0; i < T; i++) {
        if (v[i] == x) 
            return 1; 
    }
    return 0; 
}

void interseccao(int A[], int B[], int T) {
    printf("Elementos comuns aos dois vetores:\n");
    for (int i = 0; i < T; i++) { 
        if (pertence(A[i], T, B))  // Verifica se A[i] pertence ao vetor B
            printf("%d ", A[i]); 
    }
    printf("\n");
}

int main() {
    int tamanho;

    printf("Digite o tamanho dos vetores:\n");
    scanf("%d", &tamanho);

    int A[tamanho];  
    int B[tamanho];  

    printf("Digite os %d elementos do vetor A:\n", tamanho);
    for (int i = 0; i < tamanho; i++) 
        scanf("%d", &A[i]);  // Leitura dos elementos do vetor A

    printf("Digite os %d elementos do vetor B:\n", tamanho);
    for (int i = 0; i < tamanho; i++) 
        scanf("%d", &B[i]);  // Leitura dos elementos do vetor B

    system("cls");  

    interseccao(A, B, tamanho);  // Chama função para mostrar elementos comuns

    system("pause"); 
    return 0;
}
