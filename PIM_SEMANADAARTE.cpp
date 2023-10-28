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

    SetConsoleTextAttribute(h,9);

    printf("\n\n\t\t\t\t ____  ____  _  _   __   __ _   __     ____   __      __   ____  ____  ____ ");
    printf("\n\t\t\t\t/ ___)(  __)( \\/ ) / _\\ (  ( \\ / _\\   (    \\ / _\\    / _\\ (  _ \\(_  _)(  __)");
    printf("\n\t\t\t\t\\___ \\ ) _) / \\/ \\/    \\/    //    \\   ) D (/    \\  /    \\ )   /  )(   ) _) ");
    printf("\n\t\t\t\t(____/(____)\\_)(_/\\_/\\_/\\_)__)\\_/\\_/  (____/\\_/\\_/  \\_/\\_/(__\\_) (__) (____)");

    SetConsoleTextAttribute(h,7);
    cout << "\n\t\t\t\t\t\t__________________________________________" << endl;
    cout << "\n\n\t\t\t\t\t\t | < Olá, esse é o QUIZ da SEMANA DA ARTE MODERNA" << endl;
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
        cout << "\n\t\t\t\t\t\t |\t< Em que ano ocorreu a Semana da Arte Moderna?" <<  endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 1) ");
        SetConsoleTextAttribute(h,7);
        cout << "1622" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 2) ");
        SetConsoleTextAttribute(h,7);
        cout << "1722" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 3) ");
        SetConsoleTextAttribute(h,7);
        cout << "1822" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 4) ");
        SetConsoleTextAttribute(h,7);
        cout << "1922" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 5) ");
        SetConsoleTextAttribute(h,7);
        cout << "2022" << endl;
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
        cout << "\n\t\t\t\t\t\t |\t< Qual escola artística era o foco da Semana\n\t\t\t\t\t\t |\t< da Arte Moderna?" <<  endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 1) ");
        SetConsoleTextAttribute(h,7);
        cout << "Modernismo" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 2) ");
        SetConsoleTextAttribute(h,7);
        cout << "Parnasianismo" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 3) ");
        SetConsoleTextAttribute(h,7);
        cout << "Iluminismo" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 4) ");
        SetConsoleTextAttribute(h,7);
        cout << "Cubismo" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 5) ");
        SetConsoleTextAttribute(h,7);
        cout << "Romantismo" << endl;
        SetConsoleTextAttribute(h,2);
        printf("\n\t\t\t\t\t\t |\t> "); cin >> escolha;
        SetConsoleTextAttribute(h,7);

        if (escolha == 2) {
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
        cout << "\n\t\t\t\t\t\t |\t< Em que dia do Festival ocorreu a palestra\n\t\t\t\t\t\t |\t< que se tornaria o livro “A Escrava Que\n\t\t\t\t\t\t |\t< Não Era Isaura”?" <<  endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 1) ");
        SetConsoleTextAttribute(h,7);
        cout << "13" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 2) ");
        SetConsoleTextAttribute(h,7);
        cout << "15 " << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 3) ");
        SetConsoleTextAttribute(h,7);
        cout << "17" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 4) ");
        SetConsoleTextAttribute(h,7);
        cout << "19" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 5) ");
        SetConsoleTextAttribute(h,7);
        cout << "21" << endl;
        SetConsoleTextAttribute(h,2);
        printf("\n\t\t\t\t\t\t |\t> "); cin >> escolha;
        SetConsoleTextAttribute(h,7);

        if (escolha == 2) {
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
        cout << "\n\t\t\t\t\t\t |\t< Qual o nome do movimento literário de\n\t\t\t\t\t\t |\t<  que o livro “Macunaíma” faz parte?" <<  endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 1) ");
        SetConsoleTextAttribute(h,7);
        cout << "Primeiro Iluminismo Brasileiro" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 2) ");
        SetConsoleTextAttribute(h,7);
        cout << "Primeiro Parnasianismo Brasileiro" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 3) ");
        SetConsoleTextAttribute(h,7);
        cout << "Primeiro Modernismo Brasileiro" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 4) ");
        SetConsoleTextAttribute(h,7);
        cout << "Primeiro Romantismo Brasileiro" << endl;
        SetConsoleTextAttribute(h,6);
        printf("\n\t\t\t\t\t\t |\t< 5) ");
        SetConsoleTextAttribute(h,7);
        cout << "Primeiro Naturalismo Brasileiro" << endl;
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
