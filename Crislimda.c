#include <stdio.h>
#include <string.h>

void Sobrenome (char NomeComp[])
{
    int i, j, k=0;
    char PrimeiroNome[20], UltimoNome[20], Ctrl='a';

    for (i=0;i<=strlen (NomeComp);i++)
    {
        if (PrimeiroNome[i] == ' ')
        {
            break;
        }
        else {
            strcpy(PrimeiroNome, NomeComp);
        }
    }
    strcpy(UltimoNome, NomeComp);
    for (j=strlen(NomeComp);j>=0;j--)
    {
        if (UltimoNome[j] == ' ')
        {
            break;
        }
    }
    j++;
    while (Ctrl != '\0')
    {
        UltimoNome[k]=NomeComp[j];
        Ctrl=NomeComp[j];
        k++; j++;
    }
    PrimeiroNome[i]='\0';
    printf("%s,%s", UltimoNome, PrimeiroNome);
}

int main()
{
    char NomeComp [20], PrimeiroNome[20], UltimoNome[20];

    printf("\nDigite seu nome completo: ");
    scanf("%[^\n]s", NomeComp);

    Sobrenome(NomeComp);

}
