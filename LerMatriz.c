
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 1024


void lerMatriz(FILE *arquivo, char out[MAX][MAX], int t)
{
    int c;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            c = fgetc(arquivo);
            if (c == EOF)
            { /*ERRO*/
            }
            out[i][j] = c;
        }
        c = fgetc(arquivo);
        if (c != '\n')
        { /*ERRO*/
        }
    }
}

int main()
{
    printf("Digite o tamanho: ");
    int t;
    scanf("%d",&t);
    printf("%d\n",t);
    FILE *entrada = fopen("teste.txt", "r");

    char tabuleiro[MAX][MAX];
    lerMatriz(entrada, tabuleiro, t);

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            printf("%c", tabuleiro[i][j]);
        }
        printf("\n");
    }

    fclose(entrada);
    return 0;
}