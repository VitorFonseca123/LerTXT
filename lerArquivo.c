#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    file = fopen("teste.txt", "r");
    int x;
    fscanf(file, "%d", &x); // pegará somente os primeiros elementos separados por um espaço
    printf("%d", x);
    printf("\n");
    //ao ler novamente irá ler o resto
    fscanf(file, "%d ", &x);
    printf("%d ", x);
    fclose(file);
    printf("\n");

    //ao passar mais parametros tudo será lido
    int y;
    file = fopen("teste.txt", "r");
    fscanf(file, "%d %d", &x, &y);
    printf("%d %d", x, y);
}