#include <stdio.h>
void movertorredireita (int casas) {
    if (casas > 0) {
        printf("Direita \n");
        movertorredireita (casas - 1);
    }
}

void bispodireitacima (int casas){
    if (casas > 0){
        printf ("Direita/cima \n");
        bispodireitacima (casas - 1);
    }
}

void moverrainha (int casas){
    if (casas > 0){
        printf("esquerda \n");
        moverrainha (casas -1);
    }
}

int main()
{
    //Declaração das variaveis usadas
    int menuinicial;
    char peca, direcao;
    int torre;
    int bispo = 1;
    int rainha = 1;

    //Opções para o menu inicial do jogo
    printf("1. Iniciar o jogo \n");
    printf("2. Regras \n");
    printf("3. Sair \n");
    scanf("%d", &menuinicial);

    //Switch para o menu inicial do jogo
    switch (menuinicial)
    {
    case 1:
        //Opções de peças a serem movimentadas
        printf("escolha a peça que deseja mover: \n");
        printf("T. Torre \n");
        printf("B. Bispo \n");
        printf("R. Rainha \n");
        printf("C. Cavalo \n");
        scanf(" %c", &peca); // Espaço antes do %c para consumir lixo de buffer
            
            //Switch para escolha das peças a serem movimentadas
            switch (peca)
            {
            case 'T':
            case 't':
                movertorredireita (5);
                break;

            case 'B':
            case 'b':
                bispodireitacima(5);
                break;

            case 'R':
            case 'r':
                printf("\nMovimento da Rainha: \n");
                moverrainha (8);
                break;

            case 'C':
            case 'c':
                //Criação de para qual direção o cavalo poderá se mover
                printf("Movimento do Cavalo em L\n");
                printf("Escolha a direcao principal do movimento:\n");
                printf("C - Cima\n");
                printf("B - Baixo\n");
                printf("D - Direita\n");
                printf("E - Esquerda\n");
                printf("Digite a letra da direcao: ");
                scanf(" %c", &direcao);

                // Criação do switch que vai permitir escolher para qual direão o cavalo irá se mover!!!

                switch (direcao) {
                    case 'C':
                    case 'c':
                    printf("\nMovimento do cavalo:\n");
                    printf("Duas casas para cima\n");
                    printf("Uma casa para a direita\n");
                    break;

                    case 'B':
                    case 'b':
                    printf("\nMovimento do cavalo:\n");
                    printf("Duas casas para baixo\n");
                    printf("Uma casa para a esquerda\n");
                    break;

                    case 'D':
                    case 'd':
                    printf("\nMovimento do cavalo:\n");
                    printf("Duas casas para a direita\n");
                    printf("Uma casa para cima\n");
                    break;

                    case 'E':
                    case 'e':
                    printf("\nMovimento do cavalo:\n");
                    printf("Duas casas para a esquerda\n");
                    printf("Uma casa para baixo\n");
                    break;

                    default:
                    printf("\nDirecao invalida. Tente novamente. \n");
                    break;
                    }

                    break;

            default:
            printf("Opção inválida. Tente novamente.\n");
            break;
            } 

         break;
            //Final do código de movimentação do cavalo

    default:
         printf("Opção inválida. Tente novamente.\n");
         break;

    }

    return 0;
}