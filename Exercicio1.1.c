#include <stdio.h>
#include <string.h>

int ContVogal(char palavra[])
{
    char vogais[] = "aeiouAEIOU";
    int i, j ,NumVogais=0;

    for (i=0;i<strlen(palavra);i++)
    {
        for (j=0;j<strlen(vogais);j++)
        {
            if (vogais[j]==palavra[i])
            {
                NumVogais++;
                break;
            }
        }
    }
    return NumVogais;
}

void SubChar(char palavra[], char Carac)
{
    char vogais[] = {'a', 'e', 'i', 'o', 'u'};
    int i, j;
    for (i=0; i<strlen(palavra); i++)
    {
        for (j=0; j<strlen(vogais); j++)
        {
            if (palavra[i]==vogais[j])
            {
                palavra[i]=Carac;
            }
        }

    }

}

int main()
{
    char palavra[50], Carac;

    printf("\nInforme uma palavra: ");
    scanf("%[^\n]", palavra);

    printf("\nQtde de vogais: %i", ContVogal(palavra));

    printf("\nInforme um caracter: ");
    scanf(" %c", &Carac);
    SubChar(palavra, Carac);
    printf("\nPalavra trocada: %s", palavra);

    return 0;
}

