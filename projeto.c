//iniciando o projeto 
//gcc main.c -o "nome arq" e executa, depois ./nome do arq
//comandos:--help ou -h (documentação do software);
//--version ou -v (versão do software);
//--pt ou -1 (idioma português);
//--en ou -2 (idioma inglês);
//--es ou -3 (idioma espanhol);
//--fr ou -4 (idioma francês);
//--it ou -5 (idioma italiano);
//--co ou -6 (idioma coreano);
//--ja ou -7 (idioma japonês);
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){ 
   //pego a quantidade de argumentos no terminal e tamanho :)   

   if(argc!=2){   

    printf("Erro: digite uma opção valida!\n");
    printf("Escolha uma das opcoes abaixo:\n");        
    printf("--pt ou -1 (idioma português)\n");        
    printf("--en ou -2 (idioma inglês)\n");        
    printf("--es ou -3 (idioma espanhol)\n");        
    printf("--fr ou -4 (idioma francês)\n");        
    printf("--it ou -5 (idioma italiano)\n");        
    printf("--co ou -6 (idioma coreano);\n");        
    printf("--ja ou -7 (idioma japonês);\n");        
    printf("-ja ou -7 (idioma japonês)\n");       
    printf("--help ou -h (documentação do software)\n");        
    printf("--version ou -v (versão do software)\n");

       return 1;  
         } 
         
    int *op=argv[1];

    if(strcmp(op,"help")==0) || (strcmp(op,"-h")==0){
        
    }   
       

}