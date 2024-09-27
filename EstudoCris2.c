#include <stdio.h>
#include <stdio.h>

//char string[4][12];

//void retira()
//{
  //  int x, y, z;
  //  char aux[80];

 //   for (x=0;x<=4;x++)
  //  {
 //       for (y=0;y<=11;y++)
 //       {
 //          z = strcmp(string[x], string[y]);
 //          strcpy(aux, string[x]);

//           if (aux ==string[y])
 //          {

 //          }
//        }
//    }
//}

int main()
{
    int i, l;
    char texto [13];
    int x;

    printf("Digite o numero a ser retirado: \n");
    scanf("%i", x);

    printf("Digite uma sequencia numerica de até 12 numeros: \n");
    gets (texto);
    l = strlen(texto);
    for (i=0; i<12;i++)
    {
        if (texto[i] == x)
        {
            texto[i] = ' ';

            printf("%c", texto[i]);
        }
    }
    puts (texto);
    return 0;
}
