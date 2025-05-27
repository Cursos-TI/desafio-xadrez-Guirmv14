#include <stdio.h>

int main(){
    int torre;
    int bispo = 1;
    int rainha = 1;

    printf("Desafio Xadrez Novato \n");

    //Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
        printf("\nMovimento da torre: \n");
        for (torre = 1; torre <= 5; torre++) 
        {
         printf("Direita \n"); //direção do movimento
        }

    //Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").

        printf("\nMovimento do Bispo: \n");
        while (bispo <= 5)
        {
            printf("Uma casa para cima e uma casa para a direita \n"); //direção do movimento
            bispo++;
        }
    
    //Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.

        printf("\nMovimento da Rainha: \n");
        do
        {
            printf("Esquerda \n"); //Direção do movimento
            rainha++;
        } while (rainha <= 8);
        
    return 0;
}