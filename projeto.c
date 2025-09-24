// Iniciando o projeto 
// gcc main.c -o bomdia.exe
// ./bomdia.exe --pt
// Comandos:
// --help ou -h (documentação do software)
// --version ou -v (versão do software)
// --pt ou -1 (idioma português)
// --en ou -2 (idioma inglês)
// --es ou -3 (idioma espanhol)
// --fr ou -4 (idioma francês)
// --it ou -5 (idioma italiano)
// --co ou -6 (idioma coreano)
// --ja ou -7 (idioma japonês)
// --ru ou -8 (idioma russo)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ajuda() {
    printf("Documentacao:\n");        
    printf("--pt ou -1 (idioma português)\n");        
    printf("--en ou -2 (idioma inglês)\n");        
    printf("--es ou -3 (idioma espanhol)\n");        
    printf("--fr ou -4 (idioma francês)\n");        
    printf("--it ou -5 (idioma italiano)\n");        
    printf("--co ou -6 (idioma coreano)\n");        
    printf("--ja ou -7 (idioma japonês)\n");  
    printf("--ru ou -8 (idioma russo)\n");                  
    printf("--version ou -v (versão do software)\n");
}

void pt() { printf("Bom dia!\n"); }
void en() { printf("Good morning!\n"); }
void es() { printf("¡Buen día!\n"); }
void fr() { printf("Bonjour!\n"); }
void it() { printf("Buongiorno!\n"); }
void co() { printf("좋은 아침이에요!\n"); }
void ja() { printf("おはよう！\n"); }
void ru() { printf("Доброе утро!\n"); } 

int main(int argc, char *argv[]) { 
    if(argc != 2){   
        printf("Erro: digite uma opcao valida!\n");
        ajuda();
        return 1;  
    } 
         
    char *op = argv[1];

    if(strcmp(op,"--help")==0 || strcmp(op,"-h")==0) {
        ajuda();
    }
    else if(strcmp(op,"--version")==0 || strcmp(op,"-v")==0) {
        printf("Versao 1.0.0\n");
    }
    else if(strcmp(op,"--pt")==0 || strcmp(op,"-1")==0) {
        pt();
    }
    else if(strcmp(op,"--en")==0 || strcmp(op,"-2")==0) {
        en();
    }
    else if(strcmp(op,"--es")==0 || strcmp(op,"-3")==0) {
        es();
    }
    else if(strcmp(op,"--fr")==0 || strcmp(op,"-4")==0) {
        fr();
    }
    else if(strcmp(op,"--it")==0 || strcmp(op,"-5")==0) {
        it();
    }
    else if(strcmp(op,"--co")==0 || strcmp(op,"-6")==0) {
        co();
    }
    else if(strcmp(op,"--ja")==0 || strcmp(op,"-7")==0) {
        ja();
    }
    else if(strcmp(op,"--ru")==0 || strcmp(op,"-8")==0){
        ru();
    }
    else {
        printf("Erro: comando desconhecido\n");
        ajuda();
    }

    return 0;
}
