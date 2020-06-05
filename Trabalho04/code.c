/* MATHEUS GUARIENTI */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Declaro a Matriz Universal
char mtz[6][3] = {'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'};

char consoantes[21] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
char consoantes_geradas[11];

char vogais[5] = {'a','e','i','o','u'};
char vogais_geradas[8];

int qntVogais;
int qntConsoantes;


int word_checker(char word[]){

    int i, j, cont=0, mtz_line_position, mtz_column_position, escape=0, word_length, is_possible=0, again=1;
 
    //printf("\nA palavra recebida pela funcao foi: '%s'\n", word);
    
    for (mtz_line_position=0; mtz_line_position<6; mtz_line_position++){ // percorre a coluna da matriz
        for (mtz_column_position=0; mtz_column_position<3; mtz_column_position++){ // percorre a linha da matriz
            i = mtz_line_position; // defino outras variaveis para a linha e coluna para que possa fazer alterações sem impacto no laço principal
            j = mtz_column_position;
            escape = 0;
            cont = 0; // zera cont toda vez que entra no while
            while(escape == 0 && again == 1){
                if (mtz[i][j] == word[cont]){ // se a letra na matriz corresponder a primeira letra informada, verifico se na adjacencia existe uma letra correspondente à proxima
                    while (cont < strlen(word) && escape != 1){
                       //printf("\n Procurando adjacencia de %c que eh %c\n", word[cont], word[cont+1]);  DEBUG
                        if (mtz[i-1][j] == word[cont+1]){  /*em cima*/
                            i--;
                            cont++;
                           //printf("\n#Encontrou em cima\n");
                        } 
                        
                        else if (mtz[i+1][j] == word[cont+1]){/*em baixo*/
                            i++;
                            cont++;
                           //("\n#Encontrou em baixo\n");
                        }
                        
                        else if (mtz[i][j-1] == word[cont+1]){ /*a esquerda*/
                            j--;
                            cont++;
                           //printf("\n#Encontrou a esquerda\n");
                        }
                        
                        else if (mtz[i][j+1] == word[cont+1]){ /*a direita*/
                            j++;
                            cont++;
                            //printf("\n#Encontrou a direita\n");
                        }
                        
                        else if (mtz[i-1][j-1] == word[cont+1]){ /*diag. sup. esq.*/
                            i--;
                            j--;
                            cont++;
                            //printf("\n#Encontrou na diag. sup. esq.\n")
                        }

                        else if (mtz[i-1][j+1] == word[cont+1]){ /*diag. sup. dir.*/
                            i--;
                            j++;
                            cont++;
                            //printf("\n#Encontrou na diag. sup. dir.\n");
                        }

                        else if (mtz[i+1][j-1] == word[cont+1]){ /*diag. inf. esq.*/
                            i++;
                            j--;
                            cont++;
                            //printf("\n#Encontrou na diag. inf. esq.\n"); 
                        }
                        
                        else if (mtz[i+1][j+1] == word[cont+1]){ /*diag. inf. dir.*/
                            i++;
                            j++;
                            cont++;
                            //printf("\n#Encontrou na diag. inf. dir.\n");
                        } 
                        
                        else {
                            //printf("\n#1 Nao existe adjacencia! A palavra nao eh possivel! :(\n");
                            escape = 1;
                        }

                        if (strlen(word) == cont+1){ // se a quantidade de letras da palavra escrita pelo usuário for igual as letras encintradas, então está correto!
                            is_possible = 1;
                            escape = 1;
                            again = 0;
                            break;
                        }
                    }
                } else {
                    //printf("\n#1 NAO eh possivel!\n");  DEBUG
                    escape = 1;
                    again = 1;
                }
            }
        }
    }

    // retorna valor conforme saida do código
    if (is_possible == 1){
        return 1;
    } else {
        return 0;
    }

}

void gera_matriz(int dbg_mode){

    int i, j, k, mtz_line_position, mtz_column_position, again, ctrl=0;
    
    //################################################## DISTRIBUI AS VOGAIS ##################################################///

    //---> Distribui as vogais extras
    // se qntVogais == 7 ---> sortear UMA linha e UMA coluna (verificando as adjacencias);
    if (qntVogais == 7){
        again=1; // controla a saida do laço
        i=6; // posicao do vetor de vogais que sera copiada
        while (again) {
            mtz_line_position = rand()%6; //sorteia uma linha
            mtz_column_position = rand()%3; //sorteia uma coluna
            // se a posição gerada estiver vazia, prossegue e checa as adjacencias
            if (mtz[mtz_line_position][mtz_column_position] == '\0') {
                // se todas as adjacencias forem diferentes da vogal restante, aceita a posição e sai do laço
                if (mtz[mtz_line_position-1][mtz_column_position] != vogais_geradas[i] && /*em cima*/ 
                mtz[mtz_line_position+1][mtz_column_position] != vogais_geradas[i] && /*em baixo*/ 
                mtz[mtz_line_position][mtz_column_position-1] != vogais_geradas[i] && /*a esquerda*/ 
                mtz[mtz_line_position][mtz_column_position+1] != vogais_geradas[i] && /*a direita*/ 
                mtz[mtz_line_position-1][mtz_column_position-1] != vogais_geradas[i] && /*diag. sup. esq.*/ 
                mtz[mtz_line_position-1][mtz_column_position+1] != vogais_geradas[i] && /*diag. sup. dir.*/ 
                mtz[mtz_line_position+1][mtz_column_position-1] != vogais_geradas[i] && /*diag. inf. esq.*/ 
                mtz[mtz_line_position+1][mtz_column_position+1] != vogais_geradas[i]) /*diag. inf. dir.*/{
                    
                    mtz[mtz_line_position][mtz_column_position] = vogais_geradas[i];
                    if (dbg_mode == 1){printf("--> [%d] Linha %d | Coluna %d | Recebe %c\n ", i, mtz_line_position, mtz_column_position, vogais_geradas[i]);}
                    again=0;
                }
            }  
        }
    // se qntVogais == 8 ---> sortear DUAS linhas e DUAS colunas (verificando as adjacencias);
    } else{ 
        for(i=6; i<=7; i++){ // laço para as posicoes 6 e 7 do vetor de vogais geradas;
            again=1; // controla a saida do laço;
            while (again) {
                mtz_line_position = rand()%5; //sorteia uma linha
                mtz_column_position = rand()%3; //sorteia uma coluna
                // se a posição gerada estiver vazia, prossegue e checa as adjacencias
                if (mtz[mtz_line_position][mtz_column_position] == '\0') {
                    // se todas assadjacencias forem diferentes da vogal restante, aceita a posição e sai do laço
                    if (mtz[mtz_line_position-1][mtz_column_position] != vogais_geradas[i] && /*em cima*/ 
                    mtz[mtz_line_position+1][mtz_column_position] != vogais_geradas[i] && /*em baixo*/ 
                    mtz[mtz_line_position][mtz_column_position-1] != vogais_geradas[i] && /*a esquerda*/ 
                    mtz[mtz_line_position][mtz_column_position+1] != vogais_geradas[i] && /*a direita*/ 
                    mtz[mtz_line_position-1][mtz_column_position-1] != vogais_geradas[i] && /*diag. sup. esq.*/ 
                    mtz[mtz_line_position-1][mtz_column_position+1] != vogais_geradas[i] && /*diag. sup. dir.*/ 
                    mtz[mtz_line_position+1][mtz_column_position-1] != vogais_geradas[i] && /*diag. inf. esq.*/ 
                    mtz[mtz_line_position+1][mtz_column_position+1] != vogais_geradas[i]) /*diag. inf. dir.*/{
                        
                        mtz[mtz_line_position][mtz_column_position] = vogais_geradas[i];
                        if (dbg_mode == 1){printf("--> [%d] Linha %d | Coluna %d | Recebe %c\n ", i, mtz_line_position, mtz_column_position, vogais_geradas[i]);}
                        again=0;
                    }
                }  
            }
        }
    }

    //---> Distribui seguindo ordem do vetor (linha por linha)
    // sorteia uma coluna (pseudo)aleatoria para as vogais geradas do vetor
    for (i=0; i<qntConsoantes; i++){
        mtz_line_position = i;
        again=1; // controla a saida do laço
        while (again) {
            mtz_column_position = rand()%3; //sorteia uma coluna
            if (mtz[mtz_line_position][mtz_column_position] == '\0') { // se a posição gerada estiver vazia, prossegue e checa as adjacencias
                // se todas as adjacencias forem diferentes, aceita a posição e sai do laço, se nao, sorteia uma nova posição
                if (mtz[mtz_line_position-1][mtz_column_position] != vogais_geradas[i] && /*em cima*/ mtz[mtz_line_position+1][mtz_column_position] != vogais_geradas[i] && /*em baixo*/ mtz[mtz_line_position][mtz_column_position-1] != vogais_geradas[i] && /*a esquerda*/ mtz[mtz_line_position][mtz_column_position+1] != vogais_geradas[i] && /*a direita*/ mtz[mtz_line_position-1][mtz_column_position-1] != vogais_geradas[i] && /*diag. sup. esq.*/ mtz[mtz_line_position-1][mtz_column_position+1] != vogais_geradas[i] && /*diag. sup. dir.*/ mtz[mtz_line_position+1][mtz_column_position-1] != vogais_geradas[i] && /*diag. inf. esq.*/ mtz[mtz_line_position+1][mtz_column_position+1] != vogais_geradas[i]) /*diag. inf. dir.*/{
                    mtz[mtz_line_position][mtz_column_position] = vogais_geradas[i];
                    if (dbg_mode == 1){printf("--> [%d] Linha %d | Coluna %d | Recebe %c\n ", i, mtz_line_position, mtz_column_position, vogais_geradas[i]);}
                    again=0;
                }
            }
            ctrl++; // variavel de seguranca contabiliza quantas vezes o while é executado (para evitar de ficar preso em uma posicao devido a uma eventual adjacencia igual para sempre)
            //printf("ctrl=%d\n", ctrl); //DEBUG
            if(ctrl > 200){ //define limite de 200 tentativas - se passar gera uma nova vogal
                vogais_geradas[i] = vogais[rand()%(5)+(0)];
                while ((vogais_geradas[i] == vogais_geradas[i-1]) || (vogais_geradas[i] == vogais_geradas[0])){
                    vogais_geradas[i] = vogais[rand()%(5)+(0)];
                    //printf("--> Recebe %c\n ", vogais_geradas[i]); //DEBUG
                    ctrl=0;
                }  
            }
        }  
    }

    //################################################## DISTRIBUI AS CONSOANTES ##################################################//

    for(i=0; i<qntConsoantes; i++){  // laço que percorre o vetor das consoantes geradas
        again=1; // controla a saida do laço;
        while (again) {
            mtz_line_position = rand()%6; //sorteia uma linha
            mtz_column_position = rand()%3; //sorteia uma coluna
            
            // se a posição gerada estiver vazia, prossegue e checa as adjacencias
            if (mtz[mtz_line_position][mtz_column_position] == '\0') {
                if (dbg_mode == 1){printf("OK: pos vazia\n");}

                //checa se nao existe uma consoante igual na vizinhança em dois niveis (nao pode ter)
                if ((mtz[mtz_line_position-1][mtz_column_position] != consoantes_geradas[i] && /*em cima*/ 
                    mtz[mtz_line_position+1][mtz_column_position] != consoantes_geradas[i] && /*em baixo*/ 
                    mtz[mtz_line_position][mtz_column_position-1] != consoantes_geradas[i] && /*a esquerda*/ 
                    mtz[mtz_line_position][mtz_column_position+1] != consoantes_geradas[i] && /*a direita*/
                    mtz[mtz_line_position-1][mtz_column_position-1] != consoantes_geradas[i] && /*diag. sup. esq.*/ 
                    mtz[mtz_line_position-1][mtz_column_position+1] != consoantes_geradas[i] && /*diag. sup. dir.*/ 
                    mtz[mtz_line_position+1][mtz_column_position-1] != consoantes_geradas[i] && /*diag. inf. esq.*/ 
                    mtz[mtz_line_position+1][mtz_column_position+1] != consoantes_geradas[i]) &&
                    (mtz[mtz_line_position-2][mtz_column_position] != consoantes_geradas[i] && /*em cima*/
                    mtz[mtz_line_position+2][mtz_column_position] != consoantes_geradas[i] && /*em baixo*/
                    mtz[mtz_line_position][mtz_column_position-2] != consoantes_geradas[i] && /*a esquerda*/
                    mtz[mtz_line_position][mtz_column_position+2] != consoantes_geradas[i] && /*a direita*/
                    mtz[mtz_line_position-2][mtz_column_position-2] != consoantes_geradas[i] && /*diag. sup. esq.*/
                    mtz[mtz_line_position-2][mtz_column_position+2] != consoantes_geradas[i] && /*diag. sup. dir.*/ 
                    mtz[mtz_line_position+2][mtz_column_position-2] != consoantes_geradas[i] && /*diag. inf. esq.*/
                    mtz[mtz_line_position+2][mtz_column_position+2] != consoantes_geradas[i])) {
                        if (dbg_mode == 1){printf("OK: nao tem cons igual na viz\n");}
                    
                    // checa se existe uma vogal em, pelo menos, uma adjacencia (tem q ter)
                    if ((mtz[mtz_line_position-1][mtz_column_position] == 'a' || /*em cima*/ 
                        mtz[mtz_line_position+1][mtz_column_position] == 'a' || /*em baixo*/ 
                        mtz[mtz_line_position][mtz_column_position-1] == 'a' || /*a esquerda*/ 
                        mtz[mtz_line_position][mtz_column_position+1] == 'a' || /*a direita*/
                        mtz[mtz_line_position-1][mtz_column_position-1] == 'a' || /*diag. sup. esq.*/ 
                        mtz[mtz_line_position-1][mtz_column_position+1] == 'a' || /*diag. sup. dir.*/ 
                        mtz[mtz_line_position+1][mtz_column_position-1] == 'a' || /*diag. inf. esq.*/ 
                        mtz[mtz_line_position+1][mtz_column_position+1] == 'a') || /*diag. inf. dir.*/

                        (mtz[mtz_line_position-1][mtz_column_position] == 'e' || /*em cima*/ 
                        mtz[mtz_line_position+1][mtz_column_position] == 'e' || /*em baixo*/ 
                        mtz[mtz_line_position][mtz_column_position-1] == 'e' || /*a esquerda*/ 
                        mtz[mtz_line_position][mtz_column_position+1] == 'e' || /*a direita*/
                        mtz[mtz_line_position-1][mtz_column_position-1] == 'e' || /*diag. sup. esq.*/ 
                        mtz[mtz_line_position-1][mtz_column_position+1] == 'e' || /*diag. sup. dir.*/ 
                        mtz[mtz_line_position+1][mtz_column_position-1] == 'e' || /*diag. inf. esq.*/ 
                        mtz[mtz_line_position+1][mtz_column_position+1] == 'e') ||

                        (mtz[mtz_line_position-1][mtz_column_position] == 'i' || /*em cima*/ 
                        mtz[mtz_line_position+1][mtz_column_position] == 'i' || /*em baixo*/ 
                        mtz[mtz_line_position][mtz_column_position-1] == 'i' || /*a esquerda*/ 
                        mtz[mtz_line_position][mtz_column_position+1] == 'i' || /*a direita*/
                        mtz[mtz_line_position-1][mtz_column_position-1] == 'i' || /*diag. sup. esq.*/ 
                        mtz[mtz_line_position-1][mtz_column_position+1] == 'i' || /*diag. sup. dir.*/ 
                        mtz[mtz_line_position+1][mtz_column_position-1] == 'i' || /*diag. inf. esq.*/ 
                        mtz[mtz_line_position+1][mtz_column_position+1] == 'i') ||

                        (mtz[mtz_line_position-1][mtz_column_position] == 'o' || /*em cima*/ 
                        mtz[mtz_line_position+1][mtz_column_position] == 'o' || /*em baixo*/ 
                        mtz[mtz_line_position][mtz_column_position-1] == 'o' || /*a esquerda*/ 
                        mtz[mtz_line_position][mtz_column_position+1] == 'o' || /*a direita*/
                        mtz[mtz_line_position-1][mtz_column_position-1] == 'o' || /*diag. sup. esq.*/ 
                        mtz[mtz_line_position-1][mtz_column_position+1] == 'o' || /*diag. sup. dir.*/ 
                        mtz[mtz_line_position+1][mtz_column_position-1] == 'o' || /*diag. inf. esq.*/ 
                        mtz[mtz_line_position+1][mtz_column_position+1] == 'o') ||

                        (mtz[mtz_line_position-1][mtz_column_position] == 'u' || /*em cima*/ 
                        mtz[mtz_line_position+1][mtz_column_position] == 'u' || /*em baixo*/ 
                        mtz[mtz_line_position][mtz_column_position-1] == 'u' || /*a esquerda*/ 
                        mtz[mtz_line_position][mtz_column_position+1] == 'u' || /*a direita*/
                        mtz[mtz_line_position-1][mtz_column_position-1] == 'u' || /*diag. sup. esq.*/ 
                        mtz[mtz_line_position-1][mtz_column_position+1] == 'u' || /*diag. sup. dir.*/ 
                        mtz[mtz_line_position+1][mtz_column_position-1] == 'u' || /*diag. inf. esq.*/ 
                        mtz[mtz_line_position+1][mtz_column_position+1] == 'u')) {
                
                        mtz[mtz_line_position][mtz_column_position] = consoantes_geradas[i];
                        if (dbg_mode == 1){printf("--> [%d] Linha %d | Coluna %d | Recebe %c\n ", i, mtz_line_position, mtz_column_position, consoantes_geradas[i]);}
                        again=0;
                    }else {
                        if (dbg_mode == 1){printf("E: NAO TEM vog na viz\n");}
                    }
                    
                }else{
                    if (dbg_mode == 1){printf("E: TEM cons igual na viz\n");}
                    ctrl++; // variavel de seguranca contabiliza quantas vezes o while é executado (para evitar de ficar preso em uma posicao devido a uma eventual adjacencia igual para sempre)
                    if(ctrl > 200){ //define limite de 200 - se passar gera uma nova consoante
                        consoantes_geradas[i] = consoantes[rand()%(21)+(0)];
                        if (dbg_mode == 1){printf("Inf.: Gerada nova cons.: %c\n", consoantes_geradas[i]);}
                        ctrl=0;
                    }
                }
                
            } else {
                if (dbg_mode == 1){
                    printf("E: NAO TA vazio [%d][%d] | i=%d | Letra: %c\n", mtz_line_position, mtz_column_position, i, consoantes_geradas[i]);
                    for (k=0; k<6; k++){
                        for (j=0; j<3; j++){
                            printf("%c ", mtz[k][j]);
                        }
                        printf("\n");
                    }
                }
            }
        }
    }

    printf("\n#-------------------------------------#\n");
    printf("\n--> Matriz Gerada:\n\n");
    for (k=0; k<6; k++){
	  	for (j=0; j<3; j++){
	  		printf("%c ", mtz[k][j]);
		}
        printf("\n");
    }
    printf("\n#-------------------------------------#\n");
}

void printa_matriz(){
    
    int k, j;

    printf("\n--> Matriz:\n");
    for (k=0; k<6; k++){
	  	for (j=0; j<3; j++){
	  		printf("%c ", mtz[k][j]);
		}
        printf("\n");
    }
    printf("\n#-------------------------------------#\n");
}

int main (){

    int ctrl=0, re_exec; //usado para controle das repeticoes de vogais e consoantes
    int i, j; //operadores locais
    int hit_score=0, err_score=0;
    int choice, dbg_mode, quit=0;
    char user_word[20];

    srand((unsigned)time(NULL));

    // MENU PRINCIPAL
    printf("#--------------------------------------------------------#\n");
    printf("-----> Bem-vindo ao jogo TORTO! :D\n");
    printf("--> Escolha uma opcao abaixo:\n\n");

    printf("[1] - *Iniciar Jogo;\n");
    printf("[2] - Creditos;\n");
    printf("[3] - Sair;\n\n");
    printf("--> ");
    
    scanf("%d", &choice);

    switch (choice){
    case 1:

        // Pergunta se executa em modo debug
        printf("\n--> Antes de comecar, gostaria de iniciar o game em modo debug (detalhado)?\n");
        printf("[1] - Sim;\n");
        printf("[0] - Nao;\n\n");
        printf("--> ");
        scanf("%d", &dbg_mode);

        // Decide aleatoriamente se serao 7 ou 8 vogais na matriz;
        qntVogais = rand()%(2)+(7);
        if (dbg_mode == 1){
            printf("--> Vogais: %d\n\n", qntVogais); //DEBUG
        }

        // Sabendo quantas vogais, já defino quantas consoantes devem ser geradas;
        qntConsoantes = 18 - qntVogais;
        if (dbg_mode == 1){
            printf("--> Consoantes: %d\n\n", qntConsoantes); //DEBUG
        }

        // Gera as vogais (garante 3 vogais diferentes e facilita o fato de não poder haver mais de uma ocorrência da mesma letra na adjacência de uma posição na matriz );
        for (i=0; i<qntVogais; i++){
            vogais_geradas[i] = vogais[rand()%(5)+(0)];
            // LAÇOS CONFUSOS, MAS... abaixo, garante que a vogal gerada nao seja igual a sua 1a e 2a antecessora, EXETO A ULTIMA OU AS 2 ULTIMAS (QUE VAO OCUPAR UMA POSIÇÃO JUNTO COM OUTRA VOGAL NA MESMA LINHA)...;
            if ((i>0) && ((i!= 6) && (i!=7))){
                while ((vogais_geradas[i] == vogais_geradas[i-1]) || (vogais_geradas[i] == vogais_geradas[i-2])){
                    vogais_geradas[i] = vogais[rand()%(5)+(0)];
                }
            } //...para a sétima ou oitava vogal, garante que nao seja igual a primeira gerada, para nao conflitar na distribuição pela matriz (loop);
            if ((i>0) && ((i==6) || (i==7))){
                while ((vogais_geradas[i] == vogais_geradas[i-1]) || (vogais_geradas[i] == vogais_geradas[i-2]) || (vogais_geradas[i] == vogais_geradas[0])){
                    vogais_geradas[i] = vogais[rand()%(5)+(0)];
                }
            }
            if (dbg_mode == 1){
                printf("%c ", vogais_geradas[i]); //DEBUG
            }
        }

        if (dbg_mode == 1){
            printf("\n\n"); //DEBUG
        }

        // Gera as consoantes (considerando que nenhuma consoante pode aparecer mais de duas vezes);
        ctrl = 0;
        for (i=0; i < qntConsoantes; i++){
            consoantes_geradas[i] = consoantes[rand()%(21)+(0)];
            if (i>0) { // Após o indice 0, passa a verificar os anteriores
                re_exec = 1; // seta a variavel pra sempre cair no laço
                while (re_exec){
                    for (j=i; j >= 0; j--){ // compara o valor na posição i com seus passados até o inicio do vetor
                        if(consoantes_geradas[i] == consoantes_geradas[j-1]){
                            ctrl++; // incrementa variavel de controle se for igual
                        }
                    }
                    if (ctrl > 3) { // se ctrl > 3 (houver mais de 3 consoantes iguais, gera uma nova e reexecuta o laço)
                        consoantes_geradas[i] = consoantes[rand()%(21)+(0)];
                        ctrl = 0;
                    } else { // se nao, passa pra proxima
                        re_exec = 0;
                    }  
                }
            }
            if (dbg_mode == 1){
                printf("%c ", consoantes_geradas[i]); //DEBUG
            }
        }
        
        if (dbg_mode == 1){
            printf("\n\n"); //DEBUG
        }

        // chama a funcao para gerar a matriz passando o modo debug como parametro
        gera_matriz(dbg_mode);

        printf("\n---> Abaixo, digite uma palavra para verificar se a mesma pode ser formada na matriz. Para sair, digite '1'!\n");
        
        // Laço principal, em que o usuario inteaje com o game
        fflush(stdin); // limpa o buffer do teclado
        while(quit == 0){
            printf("\n--> Palavra: ");
            gets(user_word);
            if(dbg_mode == 1){printf("\nA palavra digitada foi: '%s'\n", user_word);}
            if (strchr(user_word, '1')){ // se detectado caractere de escape, o programa é encerrado
                printf("\n:( OK.. ate mais! Saindo.. \n\n");
                system("pause");
                break;
            } else {
                if (word_checker(user_word) == 1 ){  // chama a função de checagem, passando a palavra digitada como parametro
                    printf("\n## A palavra eh possivel!!\n\n");
                    hit_score++;
                    printf("\n-> Placar:\n---> Acertos: %d\n---> Erros: %d\n\n", hit_score, err_score);
                    printa_matriz(); // chama função pra reprintar a matriz
                } else {
                    printf("\n## A palavra nao eh possivel! :(\n\n");
                    err_score++;
                    printf("\n-> Placar:\n---> Acertos: %d\n---> Erros: %d\n\n", hit_score, err_score);
                    printa_matriz(); // chama função pra reprintar a matriz
                }
            }
        }
        break; // brk do case 1

    case 2:
        printf("\n");
        printf("# CREDITOS:\n\n");
        printf("Matheus Guarienti\n");
        printf("Algoritmos e Programacao B\n");
        printf("Tecnologia em Redes de Computadores\n");
        printf("CTISM - Colegio Tecnico Industrial de Santa Maria\n");
        printf("UFSM - Universidade Federal de Santa Maria\n\n");
        break;
    
    case 3:
        printf("\n");
        printf(":( OK.. ate mais.. \n\n");
        system("pause");
        break;
    
    default:
        printf("\n");
        printf("Erro: Codigo Invalido!\n\n");
        system("pause");
        break;
    }
}