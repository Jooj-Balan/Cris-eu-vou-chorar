#include<stdio.h>
#include<string.h>
/*
Favor Não me reprovar ;-;
*/
void converter(char Arquivo[20],int posicao){
    char NovaExtensao[20];

    strcpy(NovaExtensao,Arquivo);

    NovaExtensao[posicao+1]='g';
    NovaExtensao[posicao+2]='i';
    NovaExtensao[posicao+3]='f';
    printf("%s",NovaExtensao);


}
void main(void){
    char NomeArquivo[20];
    printf("escreva o nome de um arquivo\n");
    scanf("%s",&NomeArquivo);
    for(int i=0; i<20;i++){
        if(NomeArquivo[i] == '.'){
            if(NomeArquivo[i+1]=='b'&&NomeArquivo[i+2]=='m'&&NomeArquivo[i+3]){
                converter(NomeArquivo,i);
            }else{
                printf("erro");
            }
        }
    }
}
