#include <stdio.h>
#include <stdlib.h>

int main() {
    char palavra[100]; // vetor de char para a palavra
    
    printf("Digite uma palavra: "); 
    scanf("%s", palavra); 

    printf("%s comeca com %c\n", palavra, palavra[0]); // mostra a palavra e sua primeira letra
    
    system("pause"); 
    return 0;
}
