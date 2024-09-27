#include <stdio.h>
#include <string.h>

int main()
{
    int l, c, x;
    char nomecidade [4] [2] [30]=
        {
        {"18", "Sorocaba"},
        {"12", "Mairinque"},
        {"13", "Itu"},
        {"14", "Salto"},
        };
    printf("\nColuna 0");
    for (l=0;l<4;l++)
    {

        printf("\nlinha %i--> %s ",l,nomecidade[l][1]);
    }
    printf("\n\n\tImprime tudo\n");
    for(l=0;l<4;l++)
    {
        for (c=0;c<2;c++)
        {
            for(x=0;x<strlen(nomecidade[l][c]);x++)
            {
                printf("%c",nomecidade[l][c][x]);
            }
            printf("\n");
        }
    }
    return 0;
}
