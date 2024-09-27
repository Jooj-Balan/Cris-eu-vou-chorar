#include <stdio.h>
#include <string.h>

char nome[10][80]; //variavel global

//Faça um programa que leia 10 nomes e em seguida mostre eles em ordem alfabetica
void Ordena()
{
    int x, y, r;
    char aux[80];

    for( x = 0; x<=9; x++)
    {
        for (y=x+1; y<=9;y++)
        {
            r = strcmp(nome[x], nome[y]);//Comparando duas strings, essa função retorna 0, 1 ou -1
            if(r > 0) //Se o r for maior do que zero quer dizer que nome[x] é maior do que nome[y] na questão lugares das letras do alfabeto
            {         //Serve basicamente para ordenar alfabeticamente usando a posição das letras do alfabeto como numeros
               strcpy(aux, nome[x]);//copiando nome[x] para aux

               strcpy(nome[x], nome[y]);//copiando nome[y] para nome[x]

               strcpy(nome[y], aux);//copiando aux para nome[y]
            }

        }
    }
}

main()
{
    int x;
    printf("Digite 10 nomes: \n");
    for(x = 0;x<=9; x++)
    {
        gets(nome[x]);//função getes lê uma string
    }
    Ordena();

    printf("Nomes Ordenados: \n");
    for(x =0; x<=9;x++)
    {
        puts(nome[x]);//função puts imprime as strings e pula uma linha
    }
}
