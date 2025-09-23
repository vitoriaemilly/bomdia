# bomdia
Projeto Bom dia (v1)
O projeto Bom Dia trata-se da criação de um software de linha de comando que
ao ser chamado mostrará a frase “Bom dia!” em vários idiomas diferentes.

Requisitos:
1. O programa será executado no console.
2. O nome do executável será “bomdia", sem aspas.
3. O executável deverá ser invocado exatamente com uma opção de controle, assim:
“bomdia opção”, sem aspas.

 A opção será uma das alternativas abaixo:
a. --help ou -h (documentação do software);
b. --version ou -v (versão do software);
c. --pt ou -1 (idioma português);
d. --en ou -2 (idioma inglês);
e. --es ou -3 (idioma espanhol);
f. --fr ou -4 (idioma francês);
g. --it ou -5 (idioma italiano);
h. --co ou -6 (idioma coreano);
i. --ja ou -7 (idioma japonês);
j. --ru ou -8 (idioma russo);

Tratar erros:
a. não informa opção: mostrar mensagem de erro e menu de opções;
b. opção errada: mostrar a mensagem de erro e orientar sobre o help do
sistema.
c. mais de uma opção: mostrar mensagem de erro e orientar sobre o help do
sistema
