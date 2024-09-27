#include <stdio.h>
#include <string.h>

int ContLetras(char palavra[], char letras[], int NumLetras)
{
    int i , j, qtde;

    qtde=strlen(palavra);
    for (i=0;i<qtde;i++)
    {
        for(j=0;j<strlen(letras);j++)
        {
            if (palavra[i]==letras[j])
        {
            NumLetras++;
        }
        }
    }
}

int main()
{
    char palavra[50], letras[50], NumLetras;

    printf("\nInforme uma palavra: ");
    scanf("%[^\n]", palavra);

    printf("\nInforme uma letra: ");

    ContLetras(palavra, letras, NumLetras);
    scanf(" %i", &letras);

    printf("\nQtde letras: %i");


    return 0;
}
