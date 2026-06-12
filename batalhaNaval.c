#include <stdio.h>

int main() {

    //declaração das matrizes e das variáveis
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; //vetor para indicar a coluna do tabuleiro
    int navio_horizontal[3] = {3, 3, 3};//vetor para colocar o navio na horizontal
    int navio_vertical[3] = {3, 3, 3};//vetor para colocar o navio na vertical
    int navio_diagonal1[3] = {3, 3, 3};//vetor para colocar o primeiro navio na diagonal 
    int navio_diagonal2[3] = {3, 3, 3};//vetor para colocar o segundo navio na diagonal 
    int cone[3][5] = {{0, 0, 1, 0, 0}, {0 , 1, 1, 1, 0}, {1, 1, 1, 1, 1}};//matriz para colocar o cone
    int cruz[3][5] = {{0, 0, 1, 0, 0}, {1, 1, 1, 1, 1}, {0, 0, 1, 0, 0}};//matriz para colocar a cruz
    int octaedro[3][3] = {{0, 1, 0}, {1, 1, 1}, {0, 1, 0}};//matriz para colocar o octaedro
    int tabuleiro[10][10] = {0};//matriz para fazer o tabuleiro
    int linha2;//variáveis para printar o tabuleiro 
    int coluna2;

    //variáveis para mostrar os navios na horizontal
    int linha_h = 7;
    int coluna_h = 4;

    //variáveis para mostrar os navios na vertical
    int linha_v = 5;
    int coluna_v = 8;

    //variáveis para mostrar os navios na diagonal
    int linha_diagonal1 = 0;
    int coluna_diagonall = 2;

    int linha_diagonal2 = 5;
    int coluna_diagonal2 = 3;

    //criação do cone
    int cone_linha = 4;
    int cone_coluna = 2;

    //variáveis para a criação da cruz
    int cruz_linha = 1;
    int cruz_coluna = 2;

    //variáveis para a criação do octaedro
    int octaedro_linha = 7;
    int octaedro_coluna = 1;




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
    
    //posicionamento da habilidade do cone
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
           if (cone[i][j] == 1)
           {
             tabuleiro[cone_linha + i][cone_coluna + j] = 2;
           }
           
        }
    
    }

    //posicionamento da habilidade da cruz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
           if (cruz[i][j] == 1)
           {
             tabuleiro[cruz_linha + i][cruz_coluna + j] = 1;
           }
           
        }
    
    }

    //posicionamento da habilidade do octaedro
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           if (octaedro[i][j] == 1)
           {
             tabuleiro[octaedro_linha + i][octaedro_coluna + j] = 4;
           }
           
        }
    
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