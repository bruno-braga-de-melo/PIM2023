#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <windows.h>
#include <locale.h>
#include <conio.h>

using namespace std;
main() {
    setlocale(LC_ALL, "Portuguese");
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);

    int escolha, numero_questao=1;
    static int numero_ticket=0, pontuacao=0;
    FILE *CAD;
    CAD = fopen("Registro_OLI.txt","w");
    SetConsoleTextAttribute(h,4);
    if (CAD == NULL) {
        cout << "OCORREU UM ERRO AO LER/ACHAR O ARQUIVO.TXT" << endl;
        return 0;
    }

    static int RESPOSTA[5];

    int ticket;

    SetConsoleTextAttribute(h,2);

printf("\n\t\t\t\t  ____              _              ____                              _   ");
printf("\n\t\t\t\t / ___|  __ _ _ __ | |_ ___  ___  |  _ \\ _   _ _ __ ___   ___  _ __ | |_ ");
printf("\n\t\t\t\t \\___ \\ / _` | '_ \\| __/ _ \\/ __| | | | | | | | '_ ` _ \\ / _ \\| '_ \\| __|");
printf("\n\t\t\t\t  ___) | (_| | | | | || (_) \\__ \\ | |_| | |_| | | | | | | (_) | | | | |_ ");
printf("\n\t\t\t\t |____/ \\__,_|_| |_|\\__\\___/|___/ |____/ \\__,_|_| |_| |_|\\___/|_| |_|\\__|");
    SetConsoleTextAttribute(h,7);
    cout << "\n\t\t\t\t\t\t__________________________________________" << endl;
    cout << "\n\n\t\t\t\t\t\t | < Olá, esse é o QUIZ das OLIMPIADAS DE PARIS 2024" << endl;
    cout << "\t\t\t\t\t\t |\t< Gostaria de participar?" << endl;
    cout << "\t\t\t\t\t\t |\t< [ SIM (0) ] [ NÃO (1) ]" << endl;
    SetConsoleTextAttribute(h,2);
    printf("\n\t\t\t\t\t\t |\t> ");cin >> escolha;

    switch(escolha) {
    case 0:
        SetConsoleTextAttribute(h,6);
        printf("\t\t\t\t\t\t |\t< Certo");
        cout << ", Vamos lá." << endl;
        SetConsoleTextAttribute(h,7);

    do {
    printf("\n\t\t\t\t\t\t |\t< Mas para isso vamos precisar do seu ");
    SetConsoleTextAttribute(h,6);
    cout << "TICKET!" << endl;
    SetConsoleTextAttribute(h,2);
    printf("\n\t\t\t\t\t\t |\t> "); cin >> ticket;
    SetConsoleTextAttribute(h,7);
    printf("\t\t\t\t\t\t |\t< Seu TICKET foi registrado como: ");
    SetConsoleTextAttribute(h,6);
    cout << ticket << endl;
    SetConsoleTextAttribute(h,7);
    cout << "\t\t\t\t\t\t |\t< Esta escrito de forma correta?" << endl;
    cout << "\t\t\t\t\t\t |\t< [ SIM (0) ] [ NÃO (1) ]" << endl;
    SetConsoleTextAttribute(h,2);
    printf("\n\t\t\t\t\t\t |\t> "); cin >> escolha;
    SetConsoleTextAttribute(h,6);
    if (escolha != 0)cout << "\n\t\t\t\t\t\t |\t< Certo, vamos tentar de novo." << endl;
    }while(escolha != 0);
        printf("\n\t\t\t\t\t\t |\t< Otimo");
        cout << ", vamos comecar!!" << endl;
        SetConsoleTextAttribute(h,4);
        cout << "\n\t\t\t\t\t\t |\t< Cada questão terá o seu texto\n\t\t\t\t\t\t |\t< respectivo acima dela." << endl;


        //PERGUNTA 1
        cout << "\n\t\t\t\t\t\t |\t< [" << numero_questao << "] Questao:" << endl;
        SetConsoleTextAttribute(h,15);
        cout << "\n\t\t\t\t\t\t |\t<  Na primeira imagem abaixo qual é o nome do aeroplano?" <<  endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 1) ");
        SetConsoleTextAttribute(h,7);
        cout << "Brasil" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 2) ");
        SetConsoleTextAttribute(h,7);
        cout << "Demoiselle" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 3) ");
        SetConsoleTextAttribute(h,7);
        cout << "um dirigível ônibus" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 4) ");
        SetConsoleTextAttribute(h,7);
        cout << " 14 Bis" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 5) ");
        SetConsoleTextAttribute(h,7);
        cout << "Charutos voadores" << endl;
        SetConsoleTextAttribute(h,2);
        printf("\n\t\t\t\t\t\t |\t> "); cin >> escolha;
        SetConsoleTextAttribute(h,7);

        if (escolha == 4) {
            SetConsoleTextAttribute(h,6);
            cout << "\n\t\t\t\t\t\t |\t< Resposta correta!!!" << endl;

        switch(escolha) {
            case 1:
                RESPOSTA[0]=RESPOSTA[0]+1;
            break;
            case 2:
                RESPOSTA[1]=RESPOSTA[1]+1;
            break;
            case 3:
                RESPOSTA[2]=RESPOSTA[2]+1;
            break;
            case 4:
                RESPOSTA[3]=RESPOSTA[3]+1;
            break;
            case 5:
                RESPOSTA[4]=RESPOSTA[4]+1;
            break;

            }
        }else{
            SetConsoleTextAttribute(h,4);
            cout << "\n\t\t\t\t\t\t |\t< Resposta errada.." << endl;

            switch(escolha) {
            case 1:
                RESPOSTA[0]=RESPOSTA[0]+1;
            break;
            case 2:
                RESPOSTA[1]=RESPOSTA[1]+1;
            break;
            case 3:
                RESPOSTA[2]=RESPOSTA[2]+1;
            break;
            case 4:
                RESPOSTA[3]=RESPOSTA[3]+1;
            break;
            case 5:
                RESPOSTA[4]=RESPOSTA[4]+1;
            break;

            }
        }
        numero_questao = numero_questao+1;
        //PERGUNTA 2
        cout << "\n\t\t\t\t\t\t |\t< [" << numero_questao << "] Questao:" << endl;
        SetConsoleTextAttribute(h,15);
        cout << "\n\t\t\t\t\t\t |\t< O que foi o prêmio “Deutsch”?" <<  endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 1) ");
        SetConsoleTextAttribute(h,7);
        cout << "Foi um prêmio em que um balão dirigível\n\t\t\t\t\t\t |\t< saísse do parque Saint-Cloud e voltar no mesmo\n\t\t\t\t\t\t |\t< ponto de partida em 45 minutos" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 2) ");
        SetConsoleTextAttribute(h,7);
        cout << "Foi um desafio em que um balão não dirigível\n\t\t\t\t\t\t |\t< saísse do parque Saint-Cloud e voltar no mesmo\n\t\t\t\t\t\t |\t< ponto de partida em 50 minutos" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 3) ");
        SetConsoleTextAttribute(h,7);
        cout << "Foi um prêmio em que aconteceu em 1902 que\n\t\t\t\t\t\t |\t< um balão qualquer saísse do parque Saint-Cloud\n\t\t\t\t\t\t |\t< e aterrissar em um terreno plano" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 4) ");
        SetConsoleTextAttribute(h,7);
        cout << "Esse prêmio (Deutsch) teve como objetivo de\n\t\t\t\t\t\t |\t< sair do parque Saint-Cloud circundar a torre\n\t\t\t\t\t\t |\t< Eiffel em 30 minutos e mostrar dirigibilidade no balão" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 5) ");
        SetConsoleTextAttribute(h,7);
        cout << "Foi um desafio em que deveria circundar\n\t\t\t\t\t\t |\t< a torre Eiffel em 29 minutos" << endl;
        SetConsoleTextAttribute(h,2);
        printf("\n\t\t\t\t\t\t |\t> "); cin >> escolha;
        SetConsoleTextAttribute(h,7);

        if (escolha == 4) {
            SetConsoleTextAttribute(h,6);
            cout << "\n\t\t\t\t\t\t |\t< Resposta correta!!!" << endl;

        switch(escolha) {
            case 1:
                RESPOSTA[0]=RESPOSTA[0]+1;
            break;
            case 2:
                RESPOSTA[1]=RESPOSTA[1]+1;
            break;
            case 3:
                RESPOSTA[2]=RESPOSTA[2]+1;
            break;
            case 4:
                RESPOSTA[3]=RESPOSTA[3]+1;
            break;
            case 5:
                RESPOSTA[4]=RESPOSTA[4]+1;
            break;

            }
        }else{
            SetConsoleTextAttribute(h,4);
            cout << "\n\t\t\t\t\t\t |\t< Resposta errada.." << endl;

            switch(escolha) {
            case 1:
                RESPOSTA[0]=RESPOSTA[0]+1;
            break;
            case 2:
                RESPOSTA[1]=RESPOSTA[1]+1;
            break;
            case 3:
                RESPOSTA[2]=RESPOSTA[2]+1;
            break;
            case 4:
                RESPOSTA[3]=RESPOSTA[3]+1;
            break;
            case 5:
                RESPOSTA[4]=RESPOSTA[4]+1;
            break;

            }
        }

        numero_questao = numero_questao+1;
        //PERGUNTA 3
        cout << "\n\t\t\t\t\t\t |\t< [" << numero_questao << "] Questao:" << endl;
        SetConsoleTextAttribute(h,15);
        cout << "\n\t\t\t\t\t\t |\t<  Em que ano aconteceu o primeiro voo do 14 Bis? " <<  endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 1) ");
        SetConsoleTextAttribute(h,7);
        cout << "15 de Outubro de 1902" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 2) ");
        SetConsoleTextAttribute(h,7);
        cout << "20 de Novembro de 1006" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 3) ");
        SetConsoleTextAttribute(h,7);
        cout << "10 de Dezembro de 1906" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 4) ");
        SetConsoleTextAttribute(h,7);
        cout << "31 de Junho do de 1909" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 5) ");
        SetConsoleTextAttribute(h,7);
        cout << "23 de outubro de 1906" << endl;
        SetConsoleTextAttribute(h,2);
        printf("\n\t\t\t\t\t\t |\t> "); cin >> escolha;
        SetConsoleTextAttribute(h,7);

        if (escolha == 5) {
            SetConsoleTextAttribute(h,6);
            cout << "\n\t\t\t\t\t\t |\t< Resposta correta!!!" << endl;

        switch(escolha) {
            case 1:
                RESPOSTA[0]=RESPOSTA[0]+1;
            break;
            case 2:
                RESPOSTA[1]=RESPOSTA[1]+1;
            break;
            case 3:
                RESPOSTA[2]=RESPOSTA[2]+1;
            break;
            case 4:
                RESPOSTA[3]=RESPOSTA[3]+1;
            break;
            case 5:
                RESPOSTA[4]=RESPOSTA[4]+1;
            break;

            }
        }else{
            SetConsoleTextAttribute(h,4);
            cout << "\n\t\t\t\t\t\t |\t< Resposta errada.." << endl;

            switch(escolha) {
            case 1:
                RESPOSTA[0]=RESPOSTA[0]+1;
            break;
            case 2:
                RESPOSTA[1]=RESPOSTA[1]+1;
            break;
            case 3:
                RESPOSTA[2]=RESPOSTA[2]+1;
            break;
            case 4:
                RESPOSTA[3]=RESPOSTA[3]+1;
            break;
            case 5:
                RESPOSTA[4]=RESPOSTA[4]+1;
            break;

            }
        }

        numero_questao = numero_questao+1;
        //PERGUNTA 4
        cout << "\n\t\t\t\t\t\t |\t< [" << numero_questao << "] Questao:" << endl;
        SetConsoleTextAttribute(h,15);
        cout << "\n\t\t\t\t\t\t |\t< Em que ano Santos Dumont faleceu? " <<  endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 1) ");
        SetConsoleTextAttribute(h,7);
        cout << "23 de Julho de 1932" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 2) ");
        SetConsoleTextAttribute(h,7);
        cout << "16 de Fevereiro de 1928" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 3) ");
        SetConsoleTextAttribute(h,7);
        cout << "19 de Dezembro de 1935" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 4) ");
        SetConsoleTextAttribute(h,7);
        cout << "27 de Outubro de 1914" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 5) ");
        SetConsoleTextAttribute(h,7);
        cout << "30 de Agosto de 1944" << endl;
        SetConsoleTextAttribute(h,2);
        printf("\n\t\t\t\t\t\t |\t> "); cin >> escolha;
        SetConsoleTextAttribute(h,7);

        if (escolha == 1) {
            SetConsoleTextAttribute(h,6);
            cout << "\n\t\t\t\t\t\t |\t< Resposta correta!!!" << endl;

        switch(escolha) {
            case 1:
                RESPOSTA[0]=RESPOSTA[0]+1;
            break;
            case 2:
                RESPOSTA[1]=RESPOSTA[1]+1;
            break;
            case 3:
                RESPOSTA[2]=RESPOSTA[2]+1;
            break;
            case 4:
                RESPOSTA[3]=RESPOSTA[3]+1;
            break;
            case 5:
                RESPOSTA[4]=RESPOSTA[4]+1;
            break;

            }
        }else{
            SetConsoleTextAttribute(h,4);
            cout << "\n\t\t\t\t\t\t |\t< Resposta errada.." << endl;

            switch(escolha) {
            case 1:
                RESPOSTA[0]=RESPOSTA[0]+1;
            break;
            case 2:
                RESPOSTA[1]=RESPOSTA[1]+1;
            break;
            case 3:
                RESPOSTA[2]=RESPOSTA[2]+1;
            break;
            case 4:
                RESPOSTA[3]=RESPOSTA[3]+1;
            break;
            case 5:
                RESPOSTA[4]=RESPOSTA[4]+1;
            break;

            }
        }



printf("\n        ..                            .......     ..............,,,,,,,,,,,,,,,,,,,,,...");
printf("\n..              ..       ............*........,,.......,,,,,....,,,,,.,,,,,,,,,,");
printf("\n..              .  .    ...........,/,..       .,,,,,,,,,,,.........,,,,,,,,,,,,");
printf("\n....   ..                 ........,,...          ,,,,,,,*,,,.....,,,,,,,,,,,,,**");
printf("\n.....  ...                    .....*&&&%##(((##/  ..,,,,,,,,,.............,,,,,,");
printf("\n...   .                     ....,&&@&&#*,.   ..(%&%,*.,,,,,,,.............,,,,,,");
printf("\n               ........ .....                 .,(@&&@@&/.,,,,..........,,.,,,***");
printf("\n.        .    ........*%&@&&&&@@@@@&&&&&&%#%%##(/(#&&@@@@&%,,*,,,,,,,,,,,,,*****");
printf("\n..           ........,&&@@@@&&&@@&&%&&&&&&#,,/&&&&/(&@@@@@@%******,*,,******////");
printf("\n .......     .........#&@&@@@@&@@&&&%&&&%&&% (&%@%,,%@@@@@@&&.,*/***********/*//");
printf("\n.......................,@@@&&@&&&&&%#/*,,/##        #&&&@@&&&%/(////////**//*/*/");
printf("\n...........      .........#@&&&&&&&&%(/*,(&&.      ,*/&&&&&#(////////////////*/*");
printf("\n..........         .   ......,%&%%%&&#(*,,#&##,   .*,(&&%(/((///////////////////");
printf("\n.....  ..       ..       ..........&&%%(%&&@&&@&&,.,*///((//////((/////////*//**");
printf("\n                            .......*&&%%##%&&%/.  .,***/////////(((((/((((//////");
printf("\n                              ..  .  ..&%#*,.     .,,***/////////(((((((((((////");
printf("\n                                .@       ..*/%.   ..,,,****/***///((##(((((((///");
printf("\n  .        .....             . #&&&/        *.    #.,,,******/////((((((((((((//");
printf("\n..         ...     .       .%&@&&&&&&      @%/(  .%%%**/////*/////((((((((((((((");
printf("\n             ..      .. #&%&&%&&&%%%%%#   .*(/#. %%%&&&%/////////////(((((((((#(");
printf("\n             . ....(%%%%%%%%%%%&%&%%#%%&/ ..#%/#(###%%%%%%###///(/////(((/((((((");
printf("\n. ............,%#%%%##%%%%%%%%%&&&&&&#%&%% ,%&/&/(######%##%%###%#(////////////(");
printf("\n,............%&&%%####%%%%#%%%%%%&&&&&%####/&&#%%(#(#((%#########%%#****/**/////");
printf("\n...........*&&&&&%%%#%%%&%%%%%%%%%%&&&&%&&&&&#&&##(#&%###(((###%#%%#%,**********");
printf("\n...........&&&&&&%%%##%%&&%%%%%%%%%%%&&&%%##%%%&(&%%&####(((###%%%%#%/,*,,,,,*,*");
printf("\n..........,&&&&&&&&&%%#%%&&&&%%%%%%%%%%%%%%%%#%%(########(((##%%%%%%%#,***,,,,,,");
printf("\n.... .....,&&&&&&&&&%&%%&&&&&&&%%%%%%%&%%&%%%%%&%############%%%&&&&&%**,*,,,,*,");
printf("\n...........&&&&&&&&&&&&&%&&&&&&&&&%%&%%%%%%%%%&&&##########%%%%%&&&&&%***,,**,,,");
printf("\n..,,,,,,..*&&&&&&&&&&&&&&&&&&&&&&&&&&%&%%%%%%%&&&##%##%#%%%%%%%&&&&&%%**,,,*,*,,");
printf("\n*,*******,#&&&&&&&&&&@&&&&&&&&&&&&&&&%&&&&&&&&&&&#%#%%%%#%%%%%%&&&&&&%/,,******,");
printf("\n,,****,,,,#&&&&&&&&&&@&&@&&&&&&&&&&&&&&&&&&&&&&&&%%%%%%%%%%%%%%&&&&&&%#*********");



        numero_questao = numero_questao+1;
        //PERGUNTA 5
        cout << "\n\t\t\t\t\t\t |\t< [" << numero_questao << "] Questao:" << endl;
        SetConsoleTextAttribute(h,15);
        cout << "\n\t\t\t\t\t\t |\t< Tente adivinhar quem é esse homem." <<  endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 1) ");
        SetConsoleTextAttribute(h,7);
        cout << "Machado de Assis" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 2) ");
        SetConsoleTextAttribute(h,7);
        cout << "Albert Chapin" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 3) ");
        SetConsoleTextAttribute(h,7);
        cout << "Alberto Santos Dumont" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 4) ");
        SetConsoleTextAttribute(h,7);
        cout << "Henriq Dumont" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 5) ");
        SetConsoleTextAttribute(h,7);
        cout << "François Dumont" << endl;
        SetConsoleTextAttribute(h,2);
        printf("\n\t\t\t\t\t\t |\t> "); cin >> escolha;
        SetConsoleTextAttribute(h,7);

        if (escolha == 3) {
            SetConsoleTextAttribute(h,6);
            cout << "\n\t\t\t\t\t\t |\t< Resposta correta!!!" << endl;

        switch(escolha) {
            case 1:
                RESPOSTA[0]=RESPOSTA[0]+1;
            break;
            case 2:
                RESPOSTA[1]=RESPOSTA[1]+1;
            break;
            case 3:
                RESPOSTA[2]=RESPOSTA[2]+1;
            break;
            case 4:
                RESPOSTA[3]=RESPOSTA[3]+1;
            break;
            case 5:
                RESPOSTA[4]=RESPOSTA[4]+1;
            break;

            }
        }else{
            SetConsoleTextAttribute(h,4);
            cout << "\n\t\t\t\t\t\t |\t< Resposta errada.." << endl;

            switch(escolha) {
            case 1:
                RESPOSTA[0]=RESPOSTA[0]+1;
            break;
            case 2:
                RESPOSTA[1]=RESPOSTA[1]+1;
            break;
            case 3:
                RESPOSTA[2]=RESPOSTA[2]+1;
            break;
            case 4:
                RESPOSTA[3]=RESPOSTA[3]+1;
            break;
            case 5:
                RESPOSTA[4]=RESPOSTA[4]+1;
            break;

            }
        }

                fprintf(CAD, "Resposta [A] %d\n",RESPOSTA[0]);
                fprintf(CAD, "Resposta [B] %d\n",RESPOSTA[1]);
                fprintf(CAD, "Resposta [C] %d\n",RESPOSTA[2]);
                fprintf(CAD, "Resposta [D] %d\n",RESPOSTA[3]);
                fprintf(CAD, "Resposta [E] %d\n",RESPOSTA[4]);
                fclose(CAD);

                SetConsoleTextAttribute(h,7);
                cout << "\n\t\t\t\t\t\t__________________________________________" << endl;
                    printf("\n\n\t\t\t\t\t\t   (Pressione > Enter <)\n\t\t");
                    SetConsoleTextAttribute(h,0);
                    system("pause");
                    SetConsoleTextAttribute(h,7);
                    cout << "\n\t\t\t\t\t\t < Oque deseja fazer agora?" << endl;
                    cout << "\t\t\t\t\t\t - Repetir o programa (1)" << endl;
                    //cout << "\t\t\t\t\t\t - Ver o registro (2)" << endl;
                    cout << "\t\t\t\t\t\t - Fechar o programa (3)" << endl;
                    do {
                    printf("\t\t\t\t\t\t > ");
                    cin >> escolha;
                    }while(escolha != 1 && escolha != 3);
                    switch(escolha) {
                    case 1:
                        system("cls");
                        return main();
                        break;
                    case 2:
                        system("cls");
                        //goto registro();
                        break;
                    case 3:
                        system("cls");
                        cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t Adeus..\n\n\n" << endl;;
                        break;
                    }

    break;

    case 1:
        SetConsoleTextAttribute(h,7);
        cout << "\n\t\t\t\t\t\t__________________________________________" << endl;
        SetConsoleTextAttribute(h,6);
        cout << "\n\n\t\t\t\t\t\t\t| < Tudo bem, tenha um bom dia" << endl;
        SetConsoleTextAttribute(h,0);
        return 0;
    }
}
