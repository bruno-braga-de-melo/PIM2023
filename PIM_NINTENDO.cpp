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
    CAD = fopen("Registro_NIN.txt","w");
    SetConsoleTextAttribute(h,4);
    if (CAD == NULL) {
        cout << "OCORREU UM ERRO AO LER/ACHAR O ARQUIVO.TXT" << endl;
        return 0;
    }

    static int RESPOSTA[5];

    int ticket;

    SetConsoleTextAttribute(h,4);
    printf("\n\n\t\t\t\t\t\t __  _ _ __  _ _____ ___ __  _ __     __   ");
    printf("\n\t\t\t\t\t\t|  \\| | |  \\| |_   _| __|  \\| | _\\  / __ \\  ");
    printf("\n\t\t\t\t\t\t| | ' | | | ' | | | | _|| | ' | v | | \\/ | ");
    printf("\n\t\t\t\t\t\t|_|\\__|_|_|\\__| |_| |___|_|\\__|__/  \\ __ /  ");
    SetConsoleTextAttribute(h,7);
    cout << "\n\t\t\t\t\t\t__________________________________________" << endl;
    cout << "\n\n\t\t\t\t\t\t | < Olá, esse é o QUIZ da NINTENDO" << endl;
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
        cout << "\n\t\t\t\t\t\t |\t< Qual das seguintes afirmações é verdadeira\n\t\t\t\t\t\t <  sobre o Nintendo Switch?" <<  endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 1) ");
        SetConsoleTextAttribute(h,7);
        cout << "Não possui uma opção de modo portátil;\n\t\t\t\t\t\t < apenas pode ser usado em uma TV." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 2) ");
        SetConsoleTextAttribute(h,7);
        cout << "Usa discos ópticos para jogos, como os\n\t\t\t\t\t\t < consoles anteriores da Nintendo." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 3) ");
        SetConsoleTextAttribute(h,7);
        cout << "Não possui jogos físicos; todos os jogos\n\t\t\t\t\t\t < são baixados da loja online." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 4) ");
        SetConsoleTextAttribute(h,7);
        cout << "Pode ser usado tanto como um console\n\t\t\t\t\t\t < de mesa quanto como um console portátil." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 5) ");
        SetConsoleTextAttribute(h,7);
        cout << "Não possui controles destacáveis;\n\t\t\t\t\t\t < todos os jogos são jogados com o controle principal\n\t\t\t\t\t\t < fixo." << endl;
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
        cout << "\n\t\t\t\t\t\t |\t< Qual das seguintes afirmações é verdadeira\n\t\t\t\t\t\t < sobre o Nintendo 3DS, um console de videogame\n\t\t\t\t\t\t < portátil lançado pela Nintendo em 2011?" <<  endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 1) ");
        SetConsoleTextAttribute(h,7);
        cout << "Era um console exclusivamente digital,\n\t\t\t\t\t\t < sem suporte para cartuchos de jogos físicos." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 2) ");
        SetConsoleTextAttribute(h,7);
        cout << "Não possuía funcionalidades 3D, apesar\n\t\t\t\t\t\t < do nome." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 3) ");
        SetConsoleTextAttribute(h,7);
        cout << "Tinha uma tela sensível ao toque em 2D." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 4) ");
        SetConsoleTextAttribute(h,7);
        cout << "Tinha uma tela superior que exibia\n\t\t\t\t\t\t < gráficos em 3D sem a necessidade de óculos especiais." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 5) ");
        SetConsoleTextAttribute(h,7);
        cout << "Possuía uma câmera traseira, mas não\n\t\t\t\t\t\t < uma câmera frontal." << endl;
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
        cout << "\n\t\t\t\t\t\t |\t< O que fez do Nintendo Wii um console inovador?" <<  endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 1) ");
        SetConsoleTextAttribute(h,7);
        cout << "Era o primeiro console a oferecer gráficos\n\t\t\t\t\t\t < em alta definição." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 2) ");
        SetConsoleTextAttribute(h,7);
        cout << "Possuía um processador de 64 bits, aumentando\n\t\t\t\t\t\t < significativamente a potência de processamento. " << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 3) ");
        SetConsoleTextAttribute(h,7);
        cout << "Permitia a reprodução de DVDs e Blu-rays." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 4) ");
        SetConsoleTextAttribute(h,7);
        cout << "Tinha uma tela de toque embutida no controle\n\t\t\t\t\t\t < principal." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 5) ");
        SetConsoleTextAttribute(h,7);
        cout << "Utilizava um sistema de controle sem fio que\n\t\t\t\t\t\t < respondia a movimentos físicos." << endl;
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
        cout << "\n\t\t\t\t\t\t |\t< Qual destas afirmações é verdadeira sobre o\n\t\t\t\t\t\t < Nintendo 64?" <<  endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 1) ");
        SetConsoleTextAttribute(h,7);
        cout << "Foi o primeiro console de videogame a\n\t\t\t\t\t\t < utilizar discos ópticos em vez de cartuchos." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 2) ");
        SetConsoleTextAttribute(h,7);
        cout << "Possuía um processador de 32 bits." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 3) ");
        SetConsoleTextAttribute(h,7);
        cout << "Foi lançado exclusivamente no Japão." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 4) ");
        SetConsoleTextAttribute(h,7);
        cout << "Não permitia a conexão de expansões\n\t\t\t\t\t\t < ou periféricos." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 5) ");
        SetConsoleTextAttribute(h,7);
        cout << "Tinha um controle com um analógico\n\t\t\t\t\t\t < e um direcional digital." << endl;
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
        //PERGUNTA 5
        cout << "\n\t\t\t\t\t\t |\t< [" << numero_questao << "] Questao:" << endl;
        SetConsoleTextAttribute(h,15);
        cout << "\n\t\t\t\t\t\t |\t< Qual destas afirmações é verdadeira sobre\n\t\t\t\t\t\t < o Super Nintendo Entertainment System (SNES)?" <<  endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 1) ");
        SetConsoleTextAttribute(h,7);
        cout << "Foi lançado nos anos 2000." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 2) ");
        SetConsoleTextAttribute(h,7);
        cout << "Foi o primeiro console de videogame da Nintendo." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 3) ");
        SetConsoleTextAttribute(h,7);
        cout << "Possui um processador de 16 bits." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 4) ");
        SetConsoleTextAttribute(h,7);
        cout << "Nunca teve um adaptador para jogos de Game Boy." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 5) ");
        SetConsoleTextAttribute(h,7);
        cout << "Era exclusivo para jogos de esportes." << endl;
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

        numero_questao = numero_questao+1;
        //PERGUNTA 5
        cout << "\n\t\t\t\t\t\t |\t< [" << numero_questao << "] Questao:" << endl;
        SetConsoleTextAttribute(h,15);
        cout << "\n\t\t\t\t\t\t |\t< Qual destes dispositivos foi lançado como\n\t\t\t\t\t\t < parte da linha Game Boy?" <<  endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 1) ");
        SetConsoleTextAttribute(h,7);
        cout << "PlayStation Portable (PSP)." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 2) ");
        SetConsoleTextAttribute(h,7);
        cout << "Xbox Portable." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 3) ");
        SetConsoleTextAttribute(h,7);
        cout << "Game Boy Color." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 4) ");
        SetConsoleTextAttribute(h,7);
        cout << "PlayStation Vita." << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 5) ");
        SetConsoleTextAttribute(h,7);
        cout << "Nintendo DS Lite." << endl;
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
