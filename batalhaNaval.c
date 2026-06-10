#include <stdio.h>

int main() {

    //declaração das matrizes e das variáveis
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; //vetor para indicar a coluna do tabuleiro
    int navio_horizontal[3] = {3, 3, 3};//vetor para colocar o navio na horizontal
    int navio_vertical[3] = {3, 3, 3};//vetor para colocar o navio na vertical
    int navio_diagonal1[3] = {3, 3, 3};//vetor para colocar o primeiro navio na diagonal 
    int navio_diagonal2[3] = {3, 3, 3};//vetor para colocar o segundo navio na diagonal 
    int tabuleiro[10][10] = {0};//matriz para fazer o tabuleiro
    int linha2;//variáveis para printar o tabuleiro 
    int coluna2;

    //variáveis para mostrar os navios na horizontal
    int linha_h = 2;
    int coluna_h = 4;

    //variáveis para mostrar os navios na vertical
    int linha_v = 5;
    int coluna_v = 8;

    //variáveis para mostrar os navios na diagonal
    int linha_diagonal1 = 0;
    int coluna_diagonall = 2;

    int linha_diagonal2 = 5;
    int coluna_diagonal2 = 3;

    // Posiciona o navio horizontal
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_h][coluna_h + i] = navio_horizontal[i];
    }

    // Posiciona o navio vertical
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_v + i][coluna_v] = navio_vertical[i];
    }

    //posiciona o navio na diagonal
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linha_diagonal1 + i][coluna_diagonall - i] = navio_diagonal1[i];
    }

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linha_diagonal2 - i][coluna_diagonal2 - i] = navio_diagonal2[i];
    }
    
    

    printf("----TABULEIRO BATALHA NAVAL----\n");
    printf("   ");

    //começo do tabuleiro com a indicação das colunas
    for (int i = 0; i < 10; i++)
    {
        printf("%c ", linha[i]);
    }
    printf("\n");

    //loop para gerar o tabuleiro
    for (linha2 = 0; linha2 < 10; linha2++)
    {
    
        printf("%d  ", linha2);//print para indicar a linha do tabuleiro 
        for (coluna2 = 0; coluna2 < 10; coluna2++)
        {
          printf("%d ", tabuleiro[linha2][coluna2]);
        }
        printf("\n");
    }
    

    return 0;
}