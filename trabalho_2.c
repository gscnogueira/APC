/**      @file: 180113330.c
 *     @author: Gabriel da Silva Corvino Nogueira
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Programa constituido por um labirinto dotado com diversos desafios os quais o usuario deve completar com exito para conseguir sair do mesmo
 * Desafios do labrinto:
 * -Pedra Papel e tesoura;
 * -O jogo dos dedos;
 * -Forca ;
**/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
void limpar_tela(){
    printf("\n\n\nPressione Enter para continuar...\n");
    while(getchar()!='\n');
    system("clear");
}
void fim(){
    printf("                                                               \n");
    printf("FFFFFFFFFFFFFFFFFFFFFFIIIIIIIIIIMMMMMMMM               MMMMMMMM\n");
    printf("F::::::::::::::::::::FI::::::::IM:::::::M             M:::::::M\n");
    printf("F::::::::::::::::::::FI::::::::IM::::::::M           M::::::::M\n");
    printf("FF::::::FFFFFFFFF::::FII::::::IIM:::::::::M         M:::::::::M\n");
    printf("  F:::::F       FFFFFF  I::::I  M::::::::::M       M::::::::::M\n");
    printf("  F:::::F               I::::I  M:::::::::::M     M:::::::::::M\n");
    printf("  F::::::FFFFFFFFFF     I::::I  M:::::::M::::M   M::::M:::::::M\n");
    printf("  F:::::::::::::::F     I::::I  M::::::M M::::M M::::M M::::::M\n");
    printf("  F:::::::::::::::F     I::::I  M::::::M  M::::M::::M  M::::::M\n");
    printf("  F::::::FFFFFFFFFF     I::::I  M::::::M   M:::::::M   M::::::M\n");
    printf("  F:::::F               I::::I  M::::::M    M:::::M    M::::::M\n");
    printf("  F:::::F               I::::I  M::::::M     MMMMM     M::::::M\n");
    printf("FF:::::::FF           II::::::IIM::::::M               M::::::M\n");
    printf("F::::::::FF           I::::::::IM::::::M               M::::::M\n");
    printf("F::::::::FF           I::::::::IM::::::M               M::::::M\n");
    printf("FFFFFFFFFFF           IIIIIIIIIIMMMMMMMM               MMMMMMMM\n");
    printf("                                                               \n");
    limpar_tela();
}
void estrela_1(){
    printf("\n");
    printf("\t\t\t     __/\\__\n");
    printf("\t\t\t     \\    /\n");
    printf("\t\t\t     /_  _\\\n");
    printf("\t\t\t       \\/\n");
    printf("\n");
}
void estrela_2(){
    printf("\n");
    printf("\t\t        __/\\__\t  __/\\__\n");
    printf("\t\t        \\    /\t  \\    /\n");
    printf("\t\t        /_  _\\\t  /_  _\\\n");
    printf("\t\t          \\/  \t    \\/\n");
    printf("\n");
}
void estrela_3(){
    printf("\n");
    printf("\t     __/\\__\t     __/\\__\t     __/\\__\n");
    printf("\t     \\    /\t     \\    /\t     \\    /\n");
    printf("\t     /_  _\\\t     /_  _\\\t     /_  _\\\n");
    printf("\t       \\/  \t       \\/  \t       \\/\n");
    printf("\n");
}
void agora_escolha(){
    printf("  _  _  _  _  _    _  _  _  _        _  \n");
    printf(" /_// `/ //_//_/  /_`/_`/ `/ //  /_//_/.\n");
    printf("/ //_;/_// \\/ /  /_,._//_,/_//_,/ // /. \n");
    printf("                                        \n");
    
}
void medalha_de_bronze(){
    printf("\t\t\t _______________ \n");
    printf("\t\t\t|@@@@|     |####|\n");
    printf("\t\t\t|@@@@|     |####|\n");
    printf("\t\t\t|@@@@|     |####|\n");
    printf("\t\t\t\\@@@@|     |####/\n");
    printf("\t\t\t \\@@@|     |###/\n");
    printf("\t\t\t  `@@|_____|##'\n");
    printf("\t\t\t       (O)\n");
    printf("\t\t\t    .-'''''-.\n");
    printf("\t\t\t  .'  * * *  `.\n");
    printf("\t\t\t :  *       *  :\n");
    printf("\t\t\t: ~   BRONZE  ~ :\n");
    printf("\t\t\t: ~           ~ :\n");
    printf("\t\t\t :  *       *  :\n");
    printf("\t\t\t  `.  * * *  .'\n");
    printf("\t\t\t    `-.....-'\n");
}
void medalha_de_prata(){
    printf("\t\t\t _______________ \n");
    printf("\t\t\t|@@@@|     |####|\n");
    printf("\t\t\t|@@@@|     |####|\n");
    printf("\t\t\t|@@@@|     |####|\n");
    printf("\t\t\t\\@@@@|     |####/\n");
    printf("\t\t\t \\@@@|     |###/\n");
    printf("\t\t\t  `@@|_____|##'\n");
    printf("\t\t\t       (O)\n");
    printf("\t\t\t    .-'''''-.\n");
    printf("\t\t\t  .'  * * *  `.\n");
    printf("\t\t\t :  *       *  :\n");
    printf("\t\t\t: ~   PRATA   ~ :\n");
    printf("\t\t\t: ~           ~ :\n");
    printf("\t\t\t :  *       *  :\n");
    printf("\t\t\t  `.  * * *  .'\n");
    printf("\t\t\t    `-.....-'\n");
}
void medalha_de_ouro(){
    printf("\t\t\t _______________ \n");
    printf("\t\t\t|@@@@|     |####|\n");
    printf("\t\t\t|@@@@|     |####|\n");
    printf("\t\t\t|@@@@|     |####|\n");
    printf("\t\t\t\\@@@@|     |####/\n");
    printf("\t\t\t \\@@@|     |###/\n");
    printf("\t\t\t  `@@|_____|##'\n");
    printf("\t\t\t       (O)\n");
    printf("\t\t\t    .-'''''-.\n");
    printf("\t\t\t  .'  * * *  `.\n");
    printf("\t\t\t :  *       *  :\n");
    printf("\t\t\t: ~ ~  OURO   ~ :\n");
    printf("\t\t\t: ~           ~ :\n");
    printf("\t\t\t :  *       *  :\n");
    printf("\t\t\t  `.  * * *  .'\n");
    printf("\t\t\t    `-.....-'\n");
}
void escreve_game_over(){
    printf("                                                                                                                       \n");
    printf("                                                                           :                                           \n");
    printf("                                                            ,;            t#,                           ,;             \n");
    printf("          .Gt                                             f#i            ;##W.                        f#i   j.         \n");
    printf("         j#W:             ..            ..       :      .E#t            :#L:WE                      .E#t    EW,        \n");
    printf("       ;K#f              ;W,           ,W,     .Et     i#W,            .KG  ,#D    t      .DD.     i#W,     E##j       \n");
    printf("     .G#D.              j##,          t##,    ,W#t    L#D.             EE    ;#f   EK:   ,WK.     L#D.      E###D.     \n");
    printf("    j#K;               G###,         L###,   j###t  :K#Wfff;          f#.     t#i  E#t  i#D     :K#Wfff;    E#jG#W;    \n");
    printf("  ,K#f   ,GD;        :E####,       .E#j##,  G#fE#t  i##WLLLLt         :#G     GK   E#t j#f      i##WLLLLt   E#t t##f   \n");
    printf("   j#Wi   E#t       ;W#DG##,      ;WW; ##,:K#i E#t   .E#L              ;#L   LW.   E#tL#i        .E#L       E#t  :K#E: \n");
    printf("    .G#D: E#t      j###DW##,     j#E.  ##f#W,  E#t     f#E:             t#f f#:    E#WW,           f#E:     E#KDDDD###i\n");
    printf("      ,K#fK#t     G##i,,G##,   .D#L    ###K:   E#t      ,WW;             f#D#;     E#K:             ,WW;    E#f,t#Wi,,,\n");
    printf("        j###t   :K#K:   L##,  :K#t     ##D.    E#t       .D#;             G#t      ED.               .D#;   E#t  ;#W:  \n");
    printf("         .G#t  ;##D.    L##,  ...      #G      ..          tt              t       t                   tt   DWi   ,KK: \n");
    printf("           ;;  ,,,      .,,            j                                                                               \n");
    printf("                                                                                                                       \n");
}
void caveira(){
    printf("                                                         ____\n");
    printf("                                                  __,---'     `--.__\n");
    printf("                                               ,-'                ; `.\n");
    printf("                                              ,'                  `--.`--.\n");
    printf("                                             ,'                       `._ `-.\n");
    printf("                                             ;                     ;     `-- ;\n");
    printf("                                           ,-'-_       _,-~~-.      ,--      `.\n");
    printf("                                           ;;   `-,;    ,'~`.__    ,;;;    ;  ;\n");
    printf("                                           ;;    ;,'  ,;;      `,  ;;;     `. ;\n");
    printf("                                           `:   ,'    `:;     __/  `.;      ; ;\n");
    printf("                                            ;~~^.   `.   `---'~~    ;;      ; ;\n");
    printf("                                            `,' `.   `.            .;;;     ;'\n");
    printf("                                            ,',^. `.  `._    __    `:;     ,'\n");
    printf("                                            `-' `--'    ~`--'~~`--.  ~    ,'\n");
    printf("                                           /;`-;_ ; ;. /. /   ; ~~`-.     ;\n");
    printf("                    -._                   ; ;  ; `,;`-;__;---;      `----'\n");
    printf("                       `--.__             ``-`-;__;:  ;  ;__;\n");
    printf("                     ...     `--.__                `-- `-'\n");
    printf("                    `--.:::...     `--.__                ____\n");
    printf("                        `--:::::--.      `--.__    __,--'    `.\n");
    printf("                            `--:::`;....       `--'       ___  `.\n");
    printf("                                `--`-:::...     __           )  ;\n");
    printf("                                      ~`-:::...   `---.      ( ,'\n");
    printf("                                          ~`-:::::::::`--.   `-.\n");
    printf("                                              ~`-::::::::`.    ;\n");
    printf("                                                  ~`--:::,'   ,'\n");
    printf("                                                       ~~`--'~");
}
void titulo_menu(){
    putchar('\n');
    printf(":'#######:::::'##::::::::::'###::::'########::'####:'########::'####:'##::: ##:'########::'#######::\n");
    printf("'##.... ##:::: ##:::::::::'## ##::: ##.... ##:. ##:: ##.... ##:. ##:: ###:: ##:... ##..::'##.... ##:\n");
    printf(" ##:::: ##:::: ##::::::::'##:. ##:: ##:::: ##:: ##:: ##:::: ##:: ##:: ####: ##:::: ##:::: ##:::: ##:\n");
    printf(" ##:::: ##:::: ##:::::::'##:::. ##: ########::: ##:: ########::: ##:: ## ## ##:::: ##:::: ##:::: ##:\n");
    printf(" ##:::: ##:::: ##::::::: #########: ##.... ##:: ##:: ##.. ##:::: ##:: ##. ####:::: ##:::: ##:::: ##:\n");
    printf(" ##:::: ##:::: ##::::::: ##.... ##: ##:::: ##:: ##:: ##::. ##::: ##:: ##:. ###:::: ##:::: ##:::: ##:\n");
    printf(". #######::::: ########: ##:::: ##: ########::'####: ##:::. ##:'####: ##::. ##:::: ##::::. #######::\n");
    printf(":.......::::::........::..:::::..::........:::....::..:::::..::....::..::::..:::::..::::::.......:::\n");
}

void iniciar_desafio(){
    printf("\n\n\nPRESSIONE ENTER PARA INICIAR O DESAFIO...\n");
    while(getchar()!='\n');
    system("clear");
}
void mostrar_energia(energia){
    printf("\nEnergia:%d pts.\n\n",energia);
}
char validar_direcao(){
    char direcao;
    char validador;
    
    printf("Escreva a letra correspondente ao movimento desejado, ou (i) para abrir o seu inventário:");
    scanf ("%c",&direcao);
    scanf ("%c",&validador); 
    direcao=tolower(direcao);  
    if (validador!='\n'){
        while (getchar()!='\n');
    }   
        while ( (validador!='\n')||(direcao!='a'&& direcao!='s'&& direcao!='d'&& direcao!='w' && direcao !='i' && direcao!='x' && direcao!='m' && (direcao<'1'||direcao>'5'))){ 
            printf("\nDireção invalida, meu caro...\nTente novamente!\n");
            printf("Escreva a letra correspondente ao movimento desejado, ou (i) para abrir o seu inventário:");
            scanf ("%c",&direcao);
            scanf ("%c",&validador);
            direcao=tolower(direcao);
            if (validador!='\n'){
                while (getchar()!='\n');
            }
        }
    
    
    return direcao ;
} 
char validador(){
    char resposta;
    char validador;
    
    printf("\n\t\t\t\t1->JOGAR NOVAMENTE\n\t\t\t\t2->VOLTAR AO MENU\n\t\t\t\t3->SAIR\n");
    printf("\nDigite a opção equivalente a sua escolha:");
    scanf ("%c",&resposta);
    scanf ("%c",&validador);   
    if (validador!='\n'){
        while (getchar()!='\n');
    }   
        while ( (validador!='\n')||(resposta!='1'&& resposta!='2' && resposta!='3')){ 
            printf("\nResposta invalida, meu caro...\nTente novamente!\n");
            printf("\nDigite a opção equivalente a sua escolha:");
            scanf ("%c",&resposta);
            scanf ("%c",&validador);
            if (validador!='\n'){
                while (getchar()!='\n');
            }
        }
    
    
    return resposta ;
} 
char validador2(){
    char resposta;
    char validador;
    
    printf("\n\t\t\t\t1->VER REGRAS\n\t\t\t\t2->JOGAR\n\t\t\t\t3->SAIR\n");
    printf("\nDigite a opção equivalente a sua escolha:");
    scanf ("%c",&resposta);
    scanf ("%c",&validador);   
    if (validador!='\n'){
        while (getchar()!='\n');
    }   
        while ( (validador!='\n')||(resposta!='1'&& resposta!='2' && resposta!='3')){ 
            printf("\nResposta invalida, meu caro...\nTente novamente!\n");
            printf("\nDigite a opção equivalente a sua escolha:");
            scanf ("%c",&resposta);
            scanf ("%c",&validador);
            if (validador!='\n'){
                while (getchar()!='\n');
            }
        }
    
    
    return resposta ;
} 
/*funções para pedra papel e tesoura*/
char validar_jogada(){
    char jogada;
    char validador;
    scanf ("%c",&jogada);
    scanf ("%c",&validador);   
    if (validador!='\n'){
        while (getchar()!='\n');
    }   
        while ((validador!='\n')||(jogada<'0')||(jogada>'2')){ 
            printf("Resposta invalida, meu caro...\nTente novamente!\n\n");
            printf ("Digite um número da legenda que corresponde à jogada desejada:");
            scanf ("%c",&jogada);
            scanf ("%c",&validador);
            if (validador!='\n'){
                while (getchar()!='\n');
            }
        }
    return jogada ;
}
char jogada_do_usuario1(int* energia, int rodadas, int vitorias){
    char sua_jogada;
    printf("DESAFIO: PEDRA, PAPEL E TESOURA\n\n");
    printf("RODADA: %d\n",rodadas);
    printf("VITÓRIAS: %d\n",vitorias);
    mostrar_energia(*energia);
    printf ("LEGENDA:\n0-PEDRA;\n1-PAPEL;\n2-TESOURA;\n\n");
    printf ("Digite um número da legenda que corresponde à jogada desejada:");
    sua_jogada=validar_jogada();
    switch(sua_jogada){
        case '0':
            printf("\nVocê escolheu:PEDRA\n");
            break;
        case '1':
            printf("\nVocê escolheu:PAPEL\n");
            break;
        case '2':
            printf("\nVocê escolheu:TESOURA\n");
            break;
    }
    return sua_jogada;
}
char jogada_do_computador(){
    char jogada_da_maquina;
    int conversor;
    srand(time(NULL));
    conversor=rand()%3;
    switch(conversor){
        case 0:
            printf("\nSeu oponente escolheu:PEDRA\n");
            jogada_da_maquina='0';
            break;
        case 1:
            printf("\nSeu oponente escolheu:PAPEL\n");
            jogada_da_maquina='1';
            break;
        case 2:
            printf("\nseu oponente escolheu:TESOURA\n");
            jogada_da_maquina='2';
            break;
    }
    return jogada_da_maquina;
}
void pedra_papel_tesoura(int* energia, char* inventario, int* i){ 
    int vitorias=0, derrotas=0, rodadas;
    char sua_jogada, jogada_da_maquina;
        iniciar_desafio();
        for(rodadas=1;rodadas<=5;++rodadas){
                    sua_jogada=jogada_do_usuario1(energia, rodadas, vitorias);
                    jogada_da_maquina=jogada_do_computador();
                    while(sua_jogada==jogada_da_maquina){
                        printf("\nEMPATE!JOGUE NOVAMENTE!\n\n");
                        limpar_tela();
                        sua_jogada=jogada_do_usuario1(energia, rodadas, vitorias);
                        jogada_da_maquina=jogada_do_computador();
                    }
                        if ((sua_jogada=='0'&& jogada_da_maquina=='2')||(sua_jogada=='1'&& jogada_da_maquina=='0')||(sua_jogada=='2'&& jogada_da_maquina=='1')){
                            printf("\nVITÓRIA!\n\n");
                            vitorias+=1;
                            limpar_tela();
                        }
                        else{
                            printf("\nDERROTA!\n\n");
                            derrotas+=1;
                            limpar_tela();
                        }   
                }
                printf ("\n\nFIM DO DESAFIO \n\n--------------------------------\nDESEMPENHO:%d VITÓRIA(S) e %d DERROTA(S)\n\n",vitorias, derrotas );

                switch(vitorias){
                    case 5:
                        printf("%d de 5 VITÓRIAS! +60 pts. de energia; +Tocha Nível 3\n ", vitorias);
                        *energia+=60;
                        inventario[(*i)]='3';
                        break;
                    case 4:
                        printf("%d de 5 VITÓRIAS! +40 pts. de energia; +Tocha Nível 2\n ", vitorias);
                        *energia+=40;
                        inventario[(*i)]='2';
                        break;
                    case 3:
                        printf("%d de 5 VITÓRIAS! +30 pts. de energia; +Tocha Nível 1\n ", vitorias);
                        *energia+=30;
                        inventario[(*i)]='1';
                        break;
                    case 0:
                        printf("%d de 5 VITÓRIAS.... -10 pts. de energia.\n ", vitorias);
                        *energia-=10;
                        break;
                    default:
                        printf("%d de 5 VITÓRIAS.... +0 pts. de energia.\n", vitorias);
                        break;
                    }   
                mostrar_energia(*energia);
                limpar_tela();
                *i+=1;
}
/*funções para jogo dos dedos*/
void mao_direita(int dedos){
    switch (dedos){
        case 0:
            printf("\n\t");
            break;
        case 1:
            printf("\n |\t");
            break;
        case 2:
            printf("\n ||\t");
            break;
        case 3:
            printf("\n |||\t");
            break;
        case 4:
            printf("\n ||||\t");
            break;  
    }
}
void mao_esquerda(int dedos){
    switch (dedos){
        case 0:
            printf("\n");
            break;
        case 1:
            printf("\t|\n");
            break;
        case 2:
            printf("\t||\n");
            break;
        case 3:
            printf("\t|||\n");
            break;
        case 4:
            printf("\t||||\n");
            break;  
    }
}
void mostrar_todas_as_maos(int dedos_mao_direita1, int dedos_mao_esquerda1, int dedos_mao_direita2, int dedos_mao_esquerda2){
    printf("\n\n");
    printf ("\n   MÃOS DO OPONENTE\n");
    mao_direita(dedos_mao_direita1);
    mao_esquerda(dedos_mao_esquerda1);
    printf("\n\n");
    mao_direita(dedos_mao_direita2);
    mao_esquerda(dedos_mao_esquerda2);
    printf ("      SUAS MÃOS\n");
    printf("\n\n");
}
char caso_1_mao_que_ataca(){
    char mao_que_ataca;
    char validador;
    printf ("DIGITE O NÚMERO CORRESPONDENTE À MÃO QUE SERÁ UTILIZADA PARA ATACAR (MÃO DIREITA=1 ; MÃO ESQUERDA=2):");
    scanf ("%c",&mao_que_ataca);
    scanf ("%c",&validador);   
    if (validador!='\n'){
        while (getchar()!='\n');
    }   
    while ((validador!='\n')||(mao_que_ataca!='1' && mao_que_ataca!='2')){ 
        printf("Resposta invalida, meu caro...\nTente novamente!\n\n");
        printf ("DIGITE O NÚMERO CORRESPONDENTE À MÃO QUE SERÁ UTILIZADA PARA ATACAR (MÃO DIREITA=1 ; MÃO ESQUERDA=2):");
        scanf ("%c",&mao_que_ataca);
        scanf ("%c",&validador);
        if (validador!='\n'){
            while (getchar()!='\n');
        }
    }
    return mao_que_ataca;
}
char caso_2_mao_que_ataca(){
    char mao_que_ataca;
    char validador;
    printf ("DIGITE O NÚMERO CORRESPONDENTE À MÃO QUE SERÁ UTILIZADA PARA ATACAR (MÃO ESQUERDA=2) OU DIGITE '3' PARA DIVIDIR O NÚMERO DE DEDOS ENTRE AS DUAS MÃOS:");
    scanf ("%c",&mao_que_ataca);
    scanf ("%c",&validador);   
    if (validador!='\n'){
        while (getchar()!='\n');
    }    
    while ((validador!='\n')||(mao_que_ataca!='2'&& mao_que_ataca!='3')){ 
        printf("Resposta invalida, meu caro...\nTente novamente!\n\n");
        printf ("DIGITE O NÚMERO CORRESPONDENTE À MÃO QUE SERÁ UTILIZADA PARA ATACAR (MÃO ESQUERDA=2) OU DIGITE '3' PARA DIVIDIR O NÚMERO DE DEDOS ENTRE AS DUAS MÃOS:");
        scanf ("%c",&mao_que_ataca);
        scanf ("%c",&validador);
        if (validador!='\n'){
            while (getchar()!='\n');
        }
    }
    return mao_que_ataca;
}
char caso_3_mao_que_ataca(){
    char mao_que_ataca;
    char validador;
    printf ("DIGITE O NÚMERO CORRESPONDENTE À MÃO QUE SERÁ UTILIZADA PARA ATACAR (MÃO DIREITA=1) OU DIGITE 3 PARA DIVIDIR O NÚMERO DE DEDOS ENTRE AS DUAS MÃOS:");
            scanf ("%c",&mao_que_ataca);
            scanf ("%c",&validador);   
            if (validador!='\n'){
                while (getchar()!='\n');
            }  
            while ((validador!='\n')||(mao_que_ataca!='1'&& mao_que_ataca!='3')){ 
                printf("Resposta invalida, meu caro...\nTente novamente!\n\n");
                printf ("DIGITE O NÚMERO CORRESPONDENTE À MÃO QUE SERÁ UTILIZADA PARA ATACAR (MÃO DIREITA=1) OU DIGITE 3 PARA DIVIDIR O NÚMERO DE DEDOS ENTRE AS DUAS MÃOS:");
                scanf ("%c",&mao_que_ataca);
                scanf ("%c",&validador);
                if (validador!='\n'){
                    while (getchar()!='\n');
                }
            }
    return mao_que_ataca;
}
char caso_4_mao_que_ataca(){
    char mao_que_ataca;
    char validador;
    printf ("DIGITE O NÚMERO CORRESPONDENTE À MÃO QUE SERÁ UTILIZADA PARA ATACAR (MÃO ESQUERDA=2):");
    scanf ("%c",&mao_que_ataca);
    scanf ("%c",&validador);   
    if (validador!='\n'){
        while (getchar()!='\n');
    }  
    while ((validador!='\n')||(mao_que_ataca!='2')){ 
        printf("Resposta invalida, meu caro...\nTente novamente!\n\n");
        printf ("DIGITE O NÚMERO CORRESPONDENTE À MÃO QUE SERÁ UTILIZADA PARA ATACAR (MÃO ESQUERDA=2):");
        scanf ("%c",&mao_que_ataca);
        scanf ("%c",&validador);
        if (validador!='\n'){
            while (getchar()!='\n');
        }
    }
    return mao_que_ataca;
}
char caso_5_mao_que_ataca(){
    char mao_que_ataca;
    char validador;
    printf ("DIGITE O NÚMERO CORRESPONDENTE À MÃO QUE SERÁ UTILIZADA PARA ATACAR (MÃO DIREITA=1):");
    scanf ("%c",&mao_que_ataca);
    scanf ("%c",&validador);   
    if (validador!='\n'){
        while (getchar()!='\n');
    }  
    while ((validador!='\n')||(mao_que_ataca!='1')){ 
        printf("Resposta invalida, meu caro...\nTente novamente!\n\n");
        printf ("DIGITE O NÚMERO CORRESPONDENTE À MÃO QUE SERÁ UTILIZADA PARA ATACAR (MÃO DIREITA=1):");
        scanf ("%c",&mao_que_ataca);
        scanf ("%c",&validador);
        if (validador!='\n'){
            while (getchar()!='\n');
        }
    }
    return mao_que_ataca;
}
char validar_mao_que_ataca(int sua_mao_direita, int sua_mao_esquerda){
    char mao_que_ataca;
    if (sua_mao_esquerda>0&&sua_mao_direita>0){
        mao_que_ataca=caso_1_mao_que_ataca();
        }
    else {
        if (sua_mao_direita==0 && sua_mao_esquerda>0 && sua_mao_esquerda%2==0){
            mao_que_ataca=caso_2_mao_que_ataca();
         }
         else {
            if (sua_mao_direita>0 && sua_mao_esquerda==0 && sua_mao_direita%2==0){
                mao_que_ataca=caso_3_mao_que_ataca();
            }
            else {
                if (sua_mao_direita==0 && sua_mao_esquerda>0 && sua_mao_esquerda%2!=0){
                    mao_que_ataca=caso_4_mao_que_ataca();
                }
                else {
                    mao_que_ataca=caso_5_mao_que_ataca();
                }
            }
        }
    }
    return mao_que_ataca;
}
char caso_1_mao_atacada(){
    char mao_atacada;
    char validador;
    printf ("\nDIGITE O NÚMERO CORRESPONDENTE À MÃO QUE SERÁ ATACADA (MÃO DIREITA DO OPONENTE=1 ; MÃO ESQUERDA DO OPONENTE=2):");
        scanf ("%c",&mao_atacada);
        scanf ("%c",&validador);   
        if (validador!='\n'){
            while (getchar()!='\n');
        }   
        while ((validador!='\n')||(mao_atacada!='1' && mao_atacada!='2')){ 
            printf("Resposta invalida, meu caro...\nTente novamente!\n\n");
            printf ("DIGITE O NÚMERO CORRESPONDENTE À MÃO QUE SERÁ ATACADA (MÃO DIREITA DO OPONETE=1 ; MÃO ESQUERDA DO OPONETE=2):");
            scanf ("%c",&mao_atacada);
            scanf ("%c",&validador);
            if (validador!='\n'){
                while (getchar()!='\n');
            }
        }
    return mao_atacada;
}
char caso_2_mao_atacada(){
    char mao_atacada;
    char validador;
    printf ("\nDIGITE O NÚMERO CORRESPONDENTE À MÃO QUE SERÁ ATACADA (MÃO ESQUERDA DO OPONETE=2):");
    scanf ("%c",&mao_atacada);
    scanf ("%c",&validador);   
    if (validador!='\n'){
        while (getchar()!='\n');
    }   
    while ((validador!='\n')||(mao_atacada!='2')){ 
        printf("Resposta invalida, meu caro...\nTente novamente!\n\n");
        printf ("DIGITE O NÚMERO CORRESPONDENTE À MÃO QUE SERÁ ATACADA (MÃO ESQUERDA DO OPONETE=2):");
        scanf ("%c",&mao_atacada);
        scanf ("%c",&validador);
        if (validador!='\n'){
            while (getchar()!='\n');
        }
    }
    return mao_atacada;
}
char caso_3_mao_atacada(){
    char mao_atacada;
    char validador;
    printf ("\nDIGITE O NÚMERO CORRESPONDENTE À MÃO QUE SERÁ ATACADA (MÃO DIREITA DO OPONETE=1):");
    scanf ("%c",&mao_atacada);
    scanf ("%c",&validador);   
    if (validador!='\n'){
        while (getchar()!='\n');
    }   
    while ((validador!='\n')||(mao_atacada!='1')){ 
        printf("Resposta invalida, meu caro...\nTente novamente!\n\n");
        printf ("DIGITE O NÚMERO CORRESPONDENTE À MÃO QUE SERÁ ATACADA (MÃO DIREITA DO OPONETE=1):");
        scanf ("%c",&mao_atacada);
        scanf ("%c",&validador);
        if (validador!='\n'){
            while (getchar()!='\n');
        }
    }
    return mao_atacada;
}
char validar_mao_atacada(int mao_direita_oponente, int mao_esquerda_oponente){
    char mao_atacada;
    
    if (mao_direita_oponente>0 && mao_esquerda_oponente>0){
        mao_atacada=caso_1_mao_atacada();
    }
    else {
        if (mao_direita_oponente==0 && mao_esquerda_oponente>0){
            mao_atacada=caso_2_mao_atacada();
        }
        else {
            mao_atacada=caso_3_mao_atacada();
        }
    }       
return mao_atacada;
}
int jogada_padrao_CPU(int mao_de_ataque1, int mao_de_ataque2 , int mao_atacada){
    if (mao_de_ataque1+mao_de_ataque1+mao_atacada!=5){
        mao_atacada+=mao_de_ataque1;
        if (mao_atacada>=5){
            mao_atacada-=5;
        }
    }
    else{
        mao_atacada+=mao_de_ataque2;
        if (mao_atacada>=5){
            mao_atacada-=5;
        }
    }
    return mao_atacada;
}
int jogada_simples_CPU(int mao_que_ataca, int mao_atacada){
    mao_atacada+=mao_que_ataca;
    if (mao_atacada>=5){
        mao_atacada-=5;
    }
    return mao_atacada;
}
void jogo_dos_dedos(int* energia, char* inventario, int* i){
    int mao_direita_oponente=1,mao_esquerda_oponente=1,sua_mao_direita=1,sua_mao_esquerda=1,total_de_dedos_na_sua_mao,acoes=0;
    char mao_que_ataca, mao_atacada;
    iniciar_desafio();
    while((mao_direita_oponente!=0 || mao_esquerda_oponente!=0)&&(sua_mao_direita!=0 || sua_mao_esquerda!=0)){
            acoes+=1;
            printf("\nDESAFIO: O JOGO DOS DEDOS\n\nRODADA: %d\n\n",acoes);
            mostrar_energia(*energia);
            mostrar_todas_as_maos(mao_direita_oponente, mao_esquerda_oponente,sua_mao_esquerda,sua_mao_direita);
            mao_que_ataca=validar_mao_que_ataca(sua_mao_direita, sua_mao_esquerda);
            if (mao_que_ataca!='3'){
                    mao_atacada=validar_mao_atacada(mao_direita_oponente, mao_esquerda_oponente);
                    if (mao_que_ataca=='1'){
                        if (mao_atacada=='1'){
                            mao_direita_oponente+=sua_mao_direita;
                            if (mao_direita_oponente>5){
                                mao_direita_oponente-=5;
                            }
                            else {
                                if (mao_direita_oponente==5){
                                    mao_direita_oponente=0;
                                }
                            }
                        }
                        else {
                            mao_esquerda_oponente+=sua_mao_direita;
                            if (mao_esquerda_oponente>5){
                                mao_esquerda_oponente-=5;
                            }
                            else {
                                if (mao_esquerda_oponente==5){
                                    mao_esquerda_oponente=0;
                                }
                            }
                        }
                    }
                    else {
                        if (mao_atacada=='1'){
                            mao_direita_oponente+=sua_mao_esquerda;
                            if (mao_direita_oponente>5){
                                mao_direita_oponente-=5;
                            }
                            else {
                                if (mao_direita_oponente==5){
                                    mao_direita_oponente=0;
                                }
                            }
                        }
                        else {
                            mao_esquerda_oponente+=sua_mao_esquerda;
                            if (mao_esquerda_oponente>5){
                                mao_esquerda_oponente-=5;
                            }
                            else {
                                if (mao_esquerda_oponente==5){
                                    mao_esquerda_oponente=0;
                                }
                            }
                        }
                    }
            }
            else {
                total_de_dedos_na_sua_mao=sua_mao_direita+sua_mao_esquerda;
                sua_mao_direita=total_de_dedos_na_sua_mao/2;
                sua_mao_esquerda=total_de_dedos_na_sua_mao/2;


            }

            limpar_tela();
            /*---------------------jogada do oponente--------------------------------*/
            if (mao_direita_oponente==0 && mao_esquerda_oponente==0){
                break;
            }
            printf("\n DESAFIO: O JOGO DOS DEDOS\n\nRODADA: %d\n\n",acoes);
            mostrar_energia(*energia);
            mostrar_todas_as_maos(mao_direita_oponente, mao_esquerda_oponente,sua_mao_esquerda,sua_mao_direita);
            printf("\nSeu oponente está elaborando uma jogada...\n");
            
            if((mao_direita_oponente+sua_mao_direita==5||mao_esquerda_oponente+sua_mao_direita==5)&&((sua_mao_direita+(2*mao_direita_oponente)!=5)||(sua_mao_direita+(2*mao_esquerda_oponente)!=5))){
                sua_mao_direita=0;
            }
            else{
                if((mao_direita_oponente+sua_mao_esquerda==5||mao_esquerda_oponente+sua_mao_esquerda==5)&&((sua_mao_esquerda+(2*mao_direita_oponente)!=5)||(sua_mao_esquerda+(2*mao_esquerda_oponente)!=5))){
                    sua_mao_esquerda=0;
                }
                else{
                    if (mao_direita_oponente>=sua_mao_direita && mao_direita_oponente!=0 && mao_esquerda_oponente!=0){
                        if (sua_mao_direita!=0){
                            sua_mao_direita=jogada_padrao_CPU(mao_direita_oponente,mao_esquerda_oponente,sua_mao_direita);
                        }
                        else {
                            sua_mao_esquerda=jogada_padrao_CPU(mao_direita_oponente,mao_esquerda_oponente,sua_mao_esquerda);
                        }
                    }
                    else {
                        if (mao_direita_oponente<sua_mao_direita && mao_direita_oponente!=0 && mao_esquerda_oponente!=0){
                            if (sua_mao_esquerda!=0){   
                                sua_mao_esquerda=jogada_padrao_CPU(mao_esquerda_oponente, mao_direita_oponente,sua_mao_esquerda);
                            }
                            else{
                                sua_mao_direita=jogada_padrao_CPU(mao_esquerda_oponente, mao_direita_oponente,sua_mao_direita);
                            }
                        }
                        else{
                            if (mao_direita_oponente>=sua_mao_direita && mao_direita_oponente!=0 && mao_esquerda_oponente==0){
                                if (sua_mao_direita!=0){
                                    if ((((mao_direita_oponente/2)+sua_mao_direita!=5)&&(mao_direita_oponente/2)+sua_mao_esquerda!=5)&&(mao_direita_oponente%2==0)){
                                        mao_direita_oponente=mao_direita_oponente/2;
                                        mao_esquerda_oponente=mao_direita_oponente;
                                    }
                                    else {
                                        if((mao_direita_oponente+mao_direita_oponente+sua_mao_direita!=5)||(sua_mao_esquerda==0)){
                                            sua_mao_direita=jogada_simples_CPU(mao_direita_oponente,sua_mao_direita);
                                        }
                                        else {
                                            if (sua_mao_esquerda!=0){
                                                sua_mao_esquerda=jogada_simples_CPU(mao_direita_oponente,sua_mao_esquerda); 
                                            }
                                        }
                                    }
                                }   
                                else {
                                    if (((mao_direita_oponente/2)+sua_mao_esquerda!=5)&&(mao_direita_oponente%2==0)){
                                        mao_direita_oponente=mao_direita_oponente/2;
                                        mao_esquerda_oponente=mao_direita_oponente;
                                    }
                                    else{
                                        sua_mao_esquerda=jogada_simples_CPU(mao_direita_oponente,sua_mao_esquerda);
                                    }
                                }   
                            }
                            else{ 
                                if (mao_direita_oponente<sua_mao_direita && mao_direita_oponente==0 && mao_esquerda_oponente!=0){
                                    if (sua_mao_direita!=0){
                                        if ((((mao_esquerda_oponente/2)+sua_mao_direita!=5)&&(mao_esquerda_oponente/2)+sua_mao_esquerda!=5)&&(mao_esquerda_oponente%2==0)){
                                            mao_esquerda_oponente=mao_esquerda_oponente/2;
                                            mao_direita_oponente=mao_esquerda_oponente;
                                        }
                                        else {
                                            if((mao_esquerda_oponente+mao_esquerda_oponente+sua_mao_direita!=5)||(sua_mao_esquerda==0)){
                                                sua_mao_direita=jogada_simples_CPU(mao_esquerda_oponente,sua_mao_direita);
                                            }
                                            else {
                                                if (sua_mao_esquerda!=0){
                                                    sua_mao_esquerda=jogada_simples_CPU(mao_esquerda_oponente,sua_mao_esquerda);
                                                }
                                            }
                                        }
                                    }
                                    
                                    else {
                                        if (((mao_esquerda_oponente/2)+sua_mao_esquerda!=5)&&(mao_esquerda_oponente%2==0)){
                                            mao_esquerda_oponente=mao_esquerda_oponente/2;
                                            mao_direita_oponente=mao_esquerda_oponente;
                                        }
                                        else{
                                            sua_mao_esquerda=jogada_simples_CPU(mao_esquerda_oponente,sua_mao_esquerda);
                                        }       
                                    }
                                }
                                else {
                                    if (mao_esquerda_oponente!=0){
                                        if (sua_mao_direita!=0){
                                            sua_mao_direita=jogada_simples_CPU(mao_esquerda_oponente,sua_mao_direita);
                                        }
                                        else{
                                            sua_mao_esquerda=jogada_simples_CPU(mao_esquerda_oponente,sua_mao_esquerda);
                                        }
                                    }
                                    else{
                                        if (sua_mao_direita!=0){
                                            sua_mao_direita=jogada_simples_CPU(mao_direita_oponente, sua_mao_direita);
                                        }
                                        else{
                                            sua_mao_esquerda=jogada_simples_CPU(mao_direita_oponente,sua_mao_esquerda);
                                            
                                        }
                                    }
                                }   
                            }   
                        }
                    }
                }
            }
            
            limpar_tela();
        }
        if (sua_mao_direita==0 && sua_mao_esquerda==0){
            printf("\n\nParece que você não foi pareo para a máquina, amigo...\n\n");
            printf("--------------------------------\n");
            printf("Você perdeu o jogo em %d ações, mas isso não importa, já que você não ganhará nenhum ponto de energia mesmo (╥_╥)\n",acoes);
            mostrar_energia(*energia);
            limpar_tela();
        }
        else {
            printf("\n\nPARABÉNS, VOCÊ VENCEU O JOGO DOS DEDOS!!!!\n\n");
            printf("--------------------------------\n");
            if (acoes<=10){
                *energia+=90;
                printf("VOCÊ GANHOU O JOGO EM %d AÇÕES!!! + 90 pts. de energia; +Tocha Nível 3\n",acoes);
                mostrar_energia(*energia);
                inventario[(*i)]='3';
            }
            else {
                if(acoes>10 && acoes <=20){
                    *energia+=60;
                    printf("VOCÊ GANHOU O JOGO EM %d AÇÕES!!! + 60 pts. de energia; +Tocha Nível 2\n",acoes);
                    mostrar_energia(*energia);
                    inventario[(*i)]='2';
                }
                else{
                    *energia+=40;
                    printf("VOCÊ GANHOU O JOGO EM %d AÇÕES!!! + 40 pts. de energia; +Tocha Nível 1\n",acoes);
                    mostrar_energia(*energia);
                    inventario[(*i)]='1';
                }
            }
            limpar_tela();
        }
        *i+=1;
}
void mostra_bonequinho(int erros){
    switch(erros){
        case 0:
            printf("______    \n");
            printf("|         \n");
            printf("|         \n");
            printf("|         \n");
            printf("|         \n");
            printf("|_________\n");
            break;
        case 1:
            printf("______    \n");
            printf("|    O    \n");
            printf("|         \n");
            printf("|         \n");
            printf("|         \n");
            printf("|_________\n");
            break;
        case 2:
            printf("______    \n");
            printf("|    O    \n");
            printf("|    |    \n");
            printf("|         \n");
            printf("|         \n");
            printf("|_________\n");
            break;
        case 3:
            printf("______    \n");
            printf("|    O    \n");
            printf("|   /|    \n");
            printf("|         \n");
            printf("|         \n");
            printf("|_________\n");
            break;
        case 4:
            printf("______    \n");
            printf("|    O    \n");
            printf("|   /|\\  \n");
            printf("|         \n");
            printf("|         \n");
            printf("|_________\n");
            break;
        case 5:
            printf("______    \n");
            printf("|    O    \n");
            printf("|   /|\\  \n");
            printf("|    |    \n");
            printf("|         \n");
            printf("|_________\n");
            break;
        case 6:
            printf("______    \n");
            printf("|    O    \n");
            printf("|   /|\\  \n");
            printf("|    |    \n");
            printf("|   /      \n");
            printf("|_________\n");
            break;
        case 7:
            printf("______    \n");
            printf("|    O    \n");
            printf("|   /|\\  \n");
            printf("|    |    \n");
            printf("|   / \\  \n");
            printf("|_________\n");
            break;
    }
    putchar('\n');
}
void escolhe_palavra(char* string, char* linhas, char* tema){
    int escolhedor;
    char palavra_0[]="jabuticaba", palavra_1[]="cacatua", palavra_2[]="oftalmologista", palavra_3[]="pamonha", palavra_4[]="gonorreia";
    char linhas_0[]="__________", linhas_1[]="_______", linhas_2[]="______________", linhas_3[]="_______", linhas_4[]="_________";
    char tema_0[]="FRUTAS",tema_1[]="ANIMAIS", tema_2[]="SAÚDE", tema_3[]="DERIVADOS DO MILHO", tema_4[]="DSTs";
    srand(time(NULL));
    escolhedor=rand()%5;
    switch(escolhedor){
        case 0:
            strcpy(string,palavra_0);
            strcpy(linhas,linhas_0);
            strcpy(tema, tema_0);
            break;
        case 1:
            strcpy(string,palavra_1);
            strcpy(linhas,linhas_1);
            strcpy(tema, tema_1);
            break;
        case 2:
            strcpy(string,palavra_2);
            strcpy(linhas,linhas_2);
            strcpy(tema, tema_2);
            break;
        case 3:
            strcpy(string,palavra_3);
            strcpy(linhas,linhas_3);
            strcpy(tema, tema_3);
            break;
        case 4:
            strcpy(string,palavra_4);
            strcpy(linhas,linhas_4);
            strcpy(tema, tema_4);
            break;

    }
}
int busca_caracteres(char* string, char caractere){
    int i,ocorrencia=0;
    for(i=0;string[i]!='\0';++i)
        if(string[i]==caractere)
            ocorrencia=1;
    return ocorrencia;
}
char validar_caractere(char* string){
    char resposta;
    char validador;
    
    printf ("\nDigite uma letra (entre a e z) ou 1, caso queira tentar a sorte e advinhar a palavra:");
    scanf ("%c",&resposta);
    scanf ("%c",&validador); 
    resposta=tolower(resposta);  
    if (validador!='\n'){
        while (getchar()!='\n');
    }   
        while (((validador!='\n')||(resposta<'a'||resposta>'z')||(busca_caracteres(string, resposta)))&& (resposta!='1')){ 
            printf("\nResposta invalida, meu caro...\nTente novamente!\n");
            printf ("\nDigite uma letra (entre a e z) ou 1, caso queira tentar a sorte e advinhar a palavra:");
            scanf ("%c",&resposta);
            scanf ("%c",&validador);
            resposta=tolower(resposta);
            if (validador!='\n'){
                while (getchar()!='\n');
            }
        }
    return resposta ;
}
void analiza_jogada(char* string, char caractere, int* erros, int* tentativas,char* guarda_tentativas, char* guarda_tentativas_erradas){
    guarda_tentativas[(*tentativas)]=caractere;
    *tentativas+=1;
    if(!busca_caracteres(string, caractere)){
        guarda_tentativas_erradas[(*erros)]=caractere;
        *erros+=1;
    }
}
void mostra_tentativas_erradas(int erros, char* guarda_tentativas_erradas){
    int i;
    printf("Letras ja utilizadas em tentativas falhas:");
    for(i=0;i<erros;++i)
        printf("%c ",guarda_tentativas_erradas[i]);
    putchar('\n');
}
void transcrever(char* origem, char* destino, char caractere){
    int i;
    for (i=0;origem[i]!='\0'; ++i)
        if(origem[i]==caractere)
            destino[i]=origem[i];
}
void forca(int* energia, char* inventario, int* i){
    char palavra_escolhida[30], linhas[30],tema[30],guarda_tentativas_erradas[30], guarda_tentativas[30],chute[30], resposta;
    int erros=0,tentativas=0;
    escolhe_palavra(palavra_escolhida, linhas, tema);
    iniciar_desafio();
    while(strcmp(palavra_escolhida,linhas)!=0){
        if(erros==7)
            break;
        printf("DESAFIO: FORCA\n\n");
        printf("TEMA:%s\n\n", tema );
        mostrar_energia(*energia);
        printf("JOGADAS:%d\n\n",tentativas);
        mostra_tentativas_erradas(erros,guarda_tentativas_erradas);
        mostra_bonequinho(erros);
        printf("\t%s\n", linhas);
        resposta=validar_caractere(guarda_tentativas);
        if (resposta=='1'){
            printf("Digite a palavra que você acredita ser a resposta:");
            scanf("%29[^\n]", chute);
            tentativas+=1;
            limpar_tela();
            break;
        }
        else{   
            analiza_jogada(palavra_escolhida, resposta, &erros, &tentativas, guarda_tentativas, guarda_tentativas_erradas);
            if(busca_caracteres(palavra_escolhida,resposta))
                transcrever(palavra_escolhida, linhas, resposta);
            limpar_tela();
        }
    }
    printf("DESAFIO: FORCA\n\n");
    printf("TEMA:%s\n\n", tema );
    mostrar_energia(*energia);
    printf("JOGADAS:%d\n\n",tentativas);
    mostra_tentativas_erradas(erros, guarda_tentativas_erradas);
    mostra_bonequinho(erros);
    if(erros==7 && strcmp(palavra_escolhida,chute)!=0){
        printf("%s\n", linhas);
        printf("\nVOCÊ PERDEU!!!\t -10 pts. de Energia\n\n");
        *energia-=10;
        limpar_tela();
    }

    else{
        printf("%s\n", palavra_escolhida);
        printf("\nVOCÊ GANHOU EM %d JOGADAS!!!", tentativas);
        if(tentativas==1){
            *energia+=90;
            printf("\t +90 pts. de Energia; +Tocha Nível 3\n\n");
            inventario[(*i)]='3';
        }
        if(tentativas>1 && tentativas<=9){
            printf("\t +80 pts. de Energia; +Tocha Nível 2\n\n");
            *energia+=80;
            inventario[(*i)]='2';
        }
        if(tentativas>5 && tentativas<12){
            printf("\t +60 pts. de Energia; +Tocha Nível 2\n\n");
            *energia+=60;
            inventario[(*i)]='2';
        }
        if (tentativas>=12){
            printf("\t +50 pts. de Energia; +Tocha Nível 1\n\n");
            *energia+=50; 
            inventario[(*i)]='1';
        }
        limpar_tela();       
    }

    *i+=1;
}
void mostra_inventario(char* inventario){
    int i;
    system("clear");
    printf("\nINVENTÁRIO:\n");
    for(i=0;inventario[i]!='\0';++i){
        printf("\n\tCOMPARTIMENTO %d:", i+1);
        switch(inventario[i]){
            case '1':
                printf("Tocha nível 1\n");
                break;
            case'2':
                printf("Tocha nível 2\n");
                break;
            case'3':
                printf("Tocha nível 3\n");
                break;
            default:
                printf("Vazio\n");
                break;
        }
    }
    limpar_tela();
}
void mostra_regras(){
    printf("DESCRIÇÃO:\n\n-O jogador tem o objetivo de chegar ao final do labirinto, porém cada movimento realizado por ele terá o custo de um ponto de energia( inicialmente o jogador possuirá 90 deles). Para que o jogador obtenha novos pontos de energia, além de itens especiais, é necessário que ele vença os desafios que serão encontrados dentro do labirinto, sendo assim, ao final do jogo, quanto mais pontos de energia acumulados o usuário possuir, maior será sua pontuação final.\n\n");
    printf("COMANDOS NO LABIRINTO:\n\n\ta-> andar para a esquerda;\n\td-> andar para a direita;\n\ts-> andar para baixo;\n\tw-> andar para cima;");
    printf("\n\ti-> ver inventario;\n\tm-> voltar para o menu;\n\tx-> sair do jogo;\n\t1-> usar item armazenado no compartimento 1 do inventário;\n\t2-> usar item armazenado no compartimento 2 do inventário;\n\t3-> usar item armazenado no compartimento 3 do inventário;\n\t4-> usar item armazenado no compartimento 4 do inventário;\n\t5-> usar item armazenado no compartimento 5 do inventário;\n\n ");
    printf("\nITENS:\n\n\tTocha: a tocha ilumina fixamente a área em que ela foi ativada, quanto maior o nível da tocha, maior será a area iluminda;\n\n\tNIVEL DAS TOCHAS:\n\n\t\tTOCHA NIVEL 1-> Ilumina permanentemente uma área de 7x7;\n\n\t\tTOCHA NIVEL 2-> Ilumina permanentemente uma área de 9x9;\n\n\t\tTOCHA NIVEL 3-> Ilumina permanentemente uma área de 13x13;\n\n");
    printf("DESAFIOS:\n");
    printf("\n\tPEDRA PAPEL E TESOURA:\n\n\t\tDESCRIÇÃO:\n\n\t\t-Nesse deafio o jogador batalhará num épico jogo com duração de 5 rodadas contra a maquina, onde ele deverá escolher entre três opções de jogada:pedra(0), papel(1) e tesoura(2). Dessa forma:\n");
    printf("\t\t-Pedra vence tesoura;\n\t\t-Tesoura vence papel;\n\t\t-Papel vence pedra;\n\t\tCaso ocorra empate em alguma rodada, a mesma será repetida novamente.");
    printf("\n\n\t\tRECOMPENSAS:\n\n\t\t\t-5 VITÓRIAS: +60 pts. de Energia +Tocha nível 3;\n\t\t\t-4 VITÓRIAS: +40 pts. de Energia +Tocha nível 2;\n\t\t\t-3 VITÓRIAS: +30 pts. de Energia +Tocha nível 1;\n\t\t\t-(2/1) VITÓRIA(S): +0 pts. de Energia;\n\t\t\t-0 VITÓRIAS: -10 pts. de Energia;\n");
    printf("\n\tJOGO DOS DEDOS:\n\n\t\tDESCRIÇÃO:\n\n\t\t-Nesse desafio o jogador batalhará num ainda mais épico jogo contra uma inteligência artificial, onde ele terá a opção de atacar com sua mão direita(1) ou sua mão esquerda (2), a mão direita do oponente(1) ou a mão esquerda do oponente(2)(mãos começam com um dedo em cada). Ao efetuar um ataque, o número de dedos da mão que ataca será adcionado a mão atacada, caso o jogador possua 5 dedos em uma mão, ele a perde, caso ele perca as duas, perderá o jogo. Se só tiver uma mão em jogo, desde que o número de dedos nela seja par, o jogador poderá divir esse número entre suas duas mãos ao apertar (3).");
    printf("\n\n\t\tRECOMPENSAS:\n\n\t\t\tVITÓRIA COM NÚMERO DE AÇÕES <= 10: +90 pts. de Energia +Tocha nível 3;\n\t\t\tVITÓRIA COM 10 < NÚMERO DE AÇÕES <= 20: +60 pts. de Energia +Tocha nível 2;\n\t\t\tVITÓRIA COM NÚMERO DE AÇÕES > 20: +30 pts. de Energia +Tocha nível 1;\n\t\t\tDERROTA: +0 pts. de Energia;");
    printf("\n\tFORCA:\n\n\t\tDESCRIÇÃO:\n\n\t\t-Nesse desafio o jogador enfrentará os meandros da língua portuguesa no temivel jogo da forca. Nese jogo, o usuario devera advinhar a palavra secreta por meio das letras que a compõe, as letras n podem ser repetidas e caso queira, o usuario pode apertar a tecla (1) e escrever o seu palpite, contudo, perderá o jogo se errar. Se o jogador cometer 7 erros ele também perderá o jogo. Em caso de derrota o jogador perderá 10 pts. de Energia.");
    printf("\n\n\t\tRECOMPENSAS:\n\n\t\t\tVITÓRIA COM NÚMERO DE JOGADAS = 1 : +90 pts. de Energia +Tocha nível 3;\n\t\t\tVITÓRIA COM 1 < NÚMERO DE JOGADAS <= 5: +80 pts. de Energia +Tocha nível 2;\n\t\t\tVITÓRIA COM 5 < NÚMERO DE JOGADAS <= 10: +60 pts. de Energia +Tocha nível 2;\n\t\t\tVITÓRIA COM NÚMERO DE JOGADAS > 10 : +50 pts. de Energia +Tocha nível 1;\n\n");
    printf("\n\nPREMIAÇÃO:\n\t->Caso o jogador consiga chegar ao final do labirinto, ele será premiado com uma classificação em medalhas e estrelas de acordo com a quantidade de pontos de mérito que ele possuir(os pontos de Energia serão transformados em pontos de mérito ao final do jogo). As classificações serão subdivididas tal que:\n\n\t-MEDALHA DE BRONZE: caso o usuário possua até 40 pontos de mérito;\n\n\t\t->1 estrela:caso o usuário possua até 14 pontos de mérito;\n\t\t->2 estrelas:caso o usuário possua entre 15 e 28 pontos de mérito;\n\t\t->3 estrelas:caso o usuário possua entre 29 e 40 pontos de mérito;\n\n\t-MEDALHA DE PRATA: caso o usuário possua entre 41 e 79 pontos de mérito;\n\n\t\t->1 estrela:caso o usuário possua entre 41 e 54 pontos de mérito;\n\t\t->2 estrela:caso o usuário possua entre 55 e 68 pontos de mérito;\n\t\t->3 estrelas:caso o usuário possua entre 69 e 80 pontos de mérito;\n\n\t-MEDALHA DE OURO: caso o usuário possua mais de 80 pontos de mérito;\n\n\t\t->1 estrela:caso o usuário possua entre 81 e 90 pontos de mérito;\n\t\t->2 estrelas:caso o usuário possua entre 91 e 100 pontos de mérito;\n\t\t->3 estrelas:caso o usuário possua mais de 100 pontos de mérito;\n\n");
}
void usar_tocha(char* inventario, int indice, int* alcance, int* cordenadax_tocha, int* cordenaday_tocha, int linha_inicial, int coluna_inicial){
    if(inventario[indice]!='0'){
        *cordenadax_tocha=linha_inicial;
        *cordenaday_tocha=coluna_inicial;
        if(inventario[indice]=='1')
            *alcance=3;
        if(inventario[indice]=='2')
            *alcance=4;
        if(inventario[indice]=='3')
            *alcance=6;
        inventario[indice]='0';
    }
}
int main() {
    const int colunas=82;
    const int linhas=38;
    int i, j, linha_inicial, coluna_inicial, nova_linha,nova_coluna,energia, continuar=2, desafios_completos, cordenaday1_tocha, cordenadax1_tocha, alcance1;
    char direcao, opcao_do_usuario, inventario[6], menu;
    int cordenaday2_tocha, cordenadax2_tocha, alcance2, cordenaday3_tocha, cordenadax3_tocha, alcance3,cordenaday4_tocha, cordenadax4_tocha, alcance4, cordenaday5_tocha, cordenadax5_tocha, alcance5, n=200;
    char labirinto[38][82]= {
                                {"##################################################################################"},
                                {"########O     #     # ############################################################"},
                                {"#             #  #  #                                              #             #"},
                                {"########         #  # ############################# ####################### ### ##"},
                                {"##     #      #  #    #                           # #           #         # #    #"},
                                {"## ### ############ ###  ################ #  #    # ########### # #       # ######"},
                                {"## ### #              #  ##################  ######             # #              #"},
                                {"## ###         #                    #        #    ########### ### ###            #"},
                                {"@   ####### ################### #        #   #              #       ###### #######"},
                                {"###                           # #   #    #                  # #####              #"},
                                {"#   ############ ############## # ##### #### ################ #   ############## #"},
                                {"#              # #              # #     #                         #     #   #    #"},
                                {"## ########## ## ####### ###### # ## ##############################O  #   #      #"},
                                {"#    #         #       #           # #                            ######### ######"},
                                {"#  # # #  ###### ##### #### #####  # #  ########## ################              #"},
                                {"#  #   #       # #   # #     ## #  # #        #  # #              ####### #### ###"},
                                {"############ ### ## ## # ### ## #  ###  ###   #  # # ###########        # #  # # #"},
                                {"#  #  #             ## #   #    #                # #   #       # ######## #  # # #"},
                                {"#       #       #      ######## ########### ###### # # ###### ## #        #  # # #"},
                                {"##### ########### ##########                    #  # #      #  # ### #### #  #   #"},
                                {"#                                 O       #   #        ###     #        # #  # # #"},
                                {"# ######## #################              ############################### #  # # #"},
                                {"#   #   #  #       #       #              #                               #  # # #"},
                                {"# #   #     ####   #     ################### ############# ################  # # #"},
                                {"# #########                       #        # #           # #                 # # #"},
                                {"#       # ######################  ###### # # # # ### # # # ####### ########### # #"},
                                {"### # # #                      #         # # # #     # # # #                   # #"},
                                {"#   # #     #################  #######   #     # #   # # # #######################"},
                                {"#  ## # #   #    #   #   #           # # ####  # #   # # #                       #"},
                                {"#  #  # #   #  #   #   #       ##    # # #  #  #  #    ### #######################"},
                                {"#  #  # ### ##################    ## # #    #  ## #                    #   #    ##"},
                                {"# ##  #       #              #### #  #    #     # #  ## ################ # # ##  #"},
                                {"#        #            O        #          #          #  ################       ###"},
                                {"#    ##########                   # ##### #  ####    #  #             O# # ###   #"},
                                {"# ##          #              #### #   #   #  #    ####  #              # # # ## ##"},
                                {"# #  ######## ################  # ### # #### ######     #              # # #  #   "},
                                {"#       #            #                #              #                   #    ####"},
                                {"##################################################################################"}};

    while(continuar){
        linha_inicial=8;
        coluna_inicial=0;
        energia=90;
        desafios_completos=0;
        cordenaday1_tocha=n,cordenaday2_tocha=n,cordenaday3_tocha=n,cordenaday4_tocha=n,cordenaday5_tocha=n;
        cordenadax1_tocha=n,cordenadax2_tocha=n,cordenadax3_tocha=n,cordenadax4_tocha=n,cordenadax5_tocha=n;
        strcpy(inventario,"00000");
        menu='2';
        if(continuar==2){   
            titulo_menu();
            menu=validador2();
            system("clear");
            if(menu=='3')
                break;
            if (menu=='1'){
                mostra_regras();
            limpar_tela();
            }
        }
        if(menu=='2'){    
            while (linha_inicial!=35 || coluna_inicial!=81){
                nova_coluna=coluna_inicial;
                nova_linha=linha_inicial;
                printf("||Energia: %d\n", energia);
                for (i=0;i<linhas;++i)
                    for(j=0;j<colunas;++j){
                            if ((i==0||i==37)||(i>0 && i<37 && (j==0||j==81))||(linha_inicial-2<=i && linha_inicial+2>=i && j>=coluna_inicial-2 && j<=coluna_inicial+2)
                                ||(cordenadax1_tocha-alcance1<=i && cordenadax1_tocha+alcance1>=i && j>=cordenaday1_tocha-alcance1 && j<=cordenaday1_tocha+alcance1)
                                ||(cordenadax2_tocha-alcance2<=i && cordenadax2_tocha+alcance2>=i && j>=cordenaday2_tocha-alcance2 && j<=cordenaday2_tocha+alcance2)
                                ||(cordenadax3_tocha-alcance3<=i && cordenadax3_tocha+alcance3>=i && j>=cordenaday3_tocha-alcance3 && j<=cordenaday3_tocha+alcance3)
                                ||(cordenadax4_tocha-alcance4<=i && cordenadax4_tocha+alcance4>=i && j>=cordenaday4_tocha-alcance4 && j<=cordenaday4_tocha+alcance4)
                                ||(cordenadax5_tocha-alcance5<=i && cordenadax5_tocha+alcance5>=i && j>=cordenaday5_tocha-alcance5 && j<=cordenaday5_tocha+alcance5)){
                                printf("%c", labirinto[i][j]);
                                if(j==81)
                                    printf("\n");
                            }
                            else
                                putchar(' ');    
                    }
                direcao=validar_direcao();
                if(direcao=='a')
                    nova_coluna-=1;
                if(direcao=='d')
                    nova_coluna+=1;
                if(direcao=='w')
                    nova_linha-=1;
                if(direcao=='s') 
                    nova_linha+=1; 
                if(direcao=='i')
                    mostra_inventario(inventario);
                if(direcao=='m'){
                    system("clear");
                    continuar=2;
                    break;
                }
                if(direcao=='x'){
                    continuar=0;
                    break;
                }
                if(direcao=='1')
                    usar_tocha(inventario, 0, &alcance1, &cordenadax1_tocha, &cordenaday1_tocha, linha_inicial, coluna_inicial);
                if(direcao=='2')
                    usar_tocha(inventario, 1 , &alcance2, &cordenadax2_tocha, &cordenaday2_tocha, linha_inicial, coluna_inicial);
                if(direcao=='3')
                    usar_tocha(inventario, 2, &alcance3, &cordenadax3_tocha, &cordenaday3_tocha, linha_inicial, coluna_inicial);
                if(direcao=='4')
                    usar_tocha(inventario, 3, &alcance4, &cordenadax4_tocha, &cordenaday4_tocha, linha_inicial, coluna_inicial);
                if(direcao=='5')
                    usar_tocha(inventario, 4, &alcance5, &cordenadax5_tocha, &cordenaday5_tocha, linha_inicial, coluna_inicial);
                

               
                if (labirinto[nova_linha][nova_coluna]!='#'){
                    labirinto[linha_inicial][coluna_inicial]=' ';
                    coluna_inicial=nova_coluna;
                    linha_inicial=nova_linha;
                    if (labirinto[nova_linha][nova_coluna]=='O'){
                        labirinto[linha_inicial][coluna_inicial]='@';
                        --energia;
                        if(nova_linha==20 && nova_coluna==34)
                            jogo_dos_dedos(&energia, inventario, &desafios_completos);
                        if(nova_linha==1 && nova_coluna==8)
                            forca(&energia, inventario,&desafios_completos);
                        if(nova_linha==12 && nova_coluna==67)
                            jogo_dos_dedos(&energia, inventario, &desafios_completos);
                        if(nova_linha==32 && nova_coluna==22)
                            forca(&energia, inventario,&desafios_completos);
                        if(nova_linha==33 && nova_coluna==70)
                            pedra_papel_tesoura(&energia,inventario, &desafios_completos);
                    }
                    else{
                        labirinto[linha_inicial][coluna_inicial]='@';
                        if(direcao=='a'||direcao=='w'||direcao=='s'||direcao=='d')
                            --energia;
                    }
                }
                system("clear");
                if(energia<=0||(linha_inicial==35 && coluna_inicial==81)){
                    break;
                }
            }
        }    
        if(energia<=0||(linha_inicial==35 && coluna_inicial==81)||direcao=='m'){
            labirinto[linha_inicial][coluna_inicial]=' ';
            linha_inicial=8;
            coluna_inicial=0;
            labirinto[linha_inicial][coluna_inicial]='@';
            labirinto[1][8]='O';
            labirinto[20][34]='O';
            labirinto[12][67]='O';
            labirinto[32][22]='O';
            labirinto[33][70]='O';
            if(direcao!='m'){   
                if(energia<=0 &&(linha_inicial!=35 || coluna_inicial!=81)){
                    escreve_game_over();
                    caveira();
                    limpar_tela();
                }
                else{
                    fim();
                    printf("\nPARABÉNS!!!!VOCÊ COMPLETOU O LABIRINTO:\n");
                    printf("\nSUA PONTUAÇÃO FINAL FOI DE:%d Pts. de Mérito\n", energia);
                    printf("\nESTA MEDALHA E O NÚMERO DE ESTRELAS SÃO REFLEXOS DE SUAS HABILIDADES:\n");
                    if(energia<=40){
                        medalha_de_bronze();
                        if(energia<15)
                            estrela_1();
                        if(energia>=15&&energia<=28)
                            estrela_2();
                        if(energia>=29&&energia<=40)
                            estrela_3();
                    }
                    if(energia>40 && energia<=80){
                        medalha_de_prata();
                        if(energia>=41&&energia<=54)
                            estrela_1();
                        if(energia>=55&&energia<=68)
                            estrela_2();
                        if(energia>=69&&energia<=80)
                            estrela_3();
                    }
                    if(energia>80){
                        medalha_de_ouro();
                        if(energia>=81&&energia<=90)
                            estrela_1();
                        if(energia>=91&&energia<=100)
                            estrela_2();
                        if(energia>100)
                            estrela_3();
                    }
                    limpar_tela();
                }
                agora_escolha();
                opcao_do_usuario=validador();
                if (opcao_do_usuario=='1')
                    continuar=1;
                if(opcao_do_usuario=='2')
                    continuar=2;
                if(opcao_do_usuario=='3')
                    continuar=0;
                system("clear");
            }
        } 
    }


                                                                
    
  return 0;
}
    
    
