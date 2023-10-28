#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <windows.h>
#include <locale.h>
#include <conio.h>
#include <fstream>
#include <time.h>

using namespace std;
main() {
    setlocale(LC_ALL, "Portuguese");
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);

    int escolha, numero_questao=1;
    static int numero_ticket=0, pontuacao=0;
    FILE *CAD;
    CAD = fopen("Registro_SM.csv","w");
    SetConsoleTextAttribute(h,4);
    if (CAD == NULL) {
        cout << "OCORREU UM ERRO AO LER/ACHAR O ARQUIVO.TXT" << endl;
        return 0;
    }

    static int RESPOSTA1[5];
    static int RESPOSTA2[5];
    static int RESPOSTA3[5];
    static int RESPOSTA4[5];
    static int RESPOSTA5[5];

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
        printf("\n\t\t\t\t\t\t |\t< Otimo");
        SetConsoleTextAttribute(h,7);
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
        char questao_1 = 'd';
        if (escolha == 4) {
            SetConsoleTextAttribute(h,6);
            cout << "\n\t\t\t\t\t\t |\t< Resposta correta!!!" << endl;

        switch(escolha) {
            case 1:
                RESPOSTA1[0]=RESPOSTA1[0]+1;
            break;
            case 2:
                RESPOSTA1[1]=RESPOSTA1[1]+1;
            break;
            case 3:
                RESPOSTA1[2]=RESPOSTA1[2]+1;
            break;
            case 4:
                RESPOSTA1[3]=RESPOSTA1[3]+1;
            break;
            case 5:
                RESPOSTA1[4]=RESPOSTA1[4]+1;
            break;

            }
        }else{
            SetConsoleTextAttribute(h,4);
            cout << "\n\t\t\t\t\t\t |\t< Resposta errada.." << endl;

            switch(escolha) {
            case 1:
                RESPOSTA1[0]=RESPOSTA1[0]+1;
            break;
            case 2:
                RESPOSTA1[1]=RESPOSTA1[1]+1;
            break;
            case 3:
                RESPOSTA1[2]=RESPOSTA1[2]+1;
            break;
            case 4:
                RESPOSTA1[3]=RESPOSTA1[3]+1;
            break;
            case 5:
                RESPOSTA1[4]=RESPOSTA1[4]+1;
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
        char questao_2 = 'b';
        if (escolha == 2) {
            SetConsoleTextAttribute(h,6);
            cout << "\n\t\t\t\t\t\t |\t< Resposta correta!!!" << endl;

        switch(escolha) {
            case 1:
                RESPOSTA2[0]=RESPOSTA2[0]+1;
            break;
            case 2:
                RESPOSTA2[1]=RESPOSTA2[1]+1;
            break;
            case 3:
                RESPOSTA2[2]=RESPOSTA2[2]+1;
            break;
            case 4:
                RESPOSTA2[3]=RESPOSTA2[3]+1;
            break;
            case 5:
                RESPOSTA2[4]=RESPOSTA2[4]+1;
            break;

            }
        }else{
            SetConsoleTextAttribute(h,4);
            cout << "\n\t\t\t\t\t\t |\t< Resposta errada.." << endl;

            switch(escolha) {
            case 1:
                RESPOSTA2[0]=RESPOSTA2[0]+1;
            break;
            case 2:
                RESPOSTA2[1]=RESPOSTA2[1]+1;
            break;
            case 3:
                RESPOSTA2[2]=RESPOSTA2[2]+1;
            break;
            case 4:
                RESPOSTA2[3]=RESPOSTA2[3]+1;
            break;
            case 5:
                RESPOSTA2[4]=RESPOSTA2[4]+1;
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
        char questao_3 = 'b';
        if (escolha == 2) {
            SetConsoleTextAttribute(h,6);
            cout << "\n\t\t\t\t\t\t |\t< Resposta correta!!!" << endl;

        switch(escolha) {
            case 1:
                RESPOSTA3[0]=RESPOSTA3[0]+1;
            break;
            case 2:
                RESPOSTA3[1]=RESPOSTA3[1]+1;
            break;
            case 3:
                RESPOSTA3[2]=RESPOSTA3[2]+1;
            break;
            case 4:
                RESPOSTA3[3]=RESPOSTA3[3]+1;
            break;
            case 5:
                RESPOSTA3[4]=RESPOSTA3[4]+1;
            break;

            }
        }else{
            SetConsoleTextAttribute(h,4);
            cout << "\n\t\t\t\t\t\t |\t< Resposta errada.." << endl;

            switch(escolha) {
            case 1:
                RESPOSTA3[0]=RESPOSTA3[0]+1;
            break;
            case 2:
                RESPOSTA3[1]=RESPOSTA3[1]+1;
            break;
            case 3:
                RESPOSTA3[2]=RESPOSTA3[2]+1;
            break;
            case 4:
                RESPOSTA3[3]=RESPOSTA3[3]+1;
            break;
            case 5:
                RESPOSTA3[4]=RESPOSTA3[4]+1;
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
        char questao_4 = 'c';
        if (escolha == 3) {
            SetConsoleTextAttribute(h,6);
            cout << "\n\t\t\t\t\t\t |\t< Resposta correta!!!" << endl;

        switch(escolha) {
            case 1:
                RESPOSTA4[0]=RESPOSTA4[0]+1;
            break;
            case 2:
                RESPOSTA4[1]=RESPOSTA4[1]+1;
            break;
            case 3:
                RESPOSTA4[2]=RESPOSTA4[2]+1;
            break;
            case 4:
                RESPOSTA4[3]=RESPOSTA4[3]+1;
            break;
            case 5:
                RESPOSTA4[4]=RESPOSTA4[4]+1;
            break;

            }
        }else{
            SetConsoleTextAttribute(h,4);
            cout << "\n\t\t\t\t\t\t |\t< Resposta errada.." << endl;

            switch(escolha) {
            case 1:
                RESPOSTA4[0]=RESPOSTA4[0]+1;
            break;
            case 2:
                RESPOSTA4[1]=RESPOSTA4[1]+1;
            break;
            case 3:
                RESPOSTA4[2]=RESPOSTA4[2]+1;
            break;
            case 4:
                RESPOSTA4[3]=RESPOSTA4[3]+1;
            break;
            case 5:
                RESPOSTA4[4]=RESPOSTA4[4]+1;
            break;

            }
        }
                fprintf(CAD, "QUESTOES:\n",questao_1);
                fprintf(CAD, "1) resposta: %c\n",questao_1);
                fprintf(CAD, "a: %d\n",RESPOSTA1[0]);
                fprintf(CAD, "b: %d\n",RESPOSTA1[1]);
                fprintf(CAD, "c: %d\n",RESPOSTA1[2]);
                fprintf(CAD, "d: %d\n",RESPOSTA1[3]);
                fprintf(CAD, "e: %d\n",RESPOSTA1[4]);
                fprintf(CAD, "2) resposta: %c\n",questao_2);
                fprintf(CAD, "a: %d\n",RESPOSTA2[0]);
                fprintf(CAD, "b: %d\n",RESPOSTA2[1]);
                fprintf(CAD, "c: %d\n",RESPOSTA2[2]);
                fprintf(CAD, "d: %d\n",RESPOSTA2[3]);
                fprintf(CAD, "e: %d\n",RESPOSTA2[4]);
                fprintf(CAD, "3) resposta: %c\n",questao_3);
                fprintf(CAD, "a: %d\n",RESPOSTA3[0]);
                fprintf(CAD, "b: %d\n",RESPOSTA3[1]);
                fprintf(CAD, "c: %d\n",RESPOSTA3[2]);
                fprintf(CAD, "d: %d\n",RESPOSTA3[3]);
                fprintf(CAD, "e: %d\n",RESPOSTA3[4]);
                fprintf(CAD, "4) resposta: %c\n",questao_4);
                fprintf(CAD, "a: %d\n",RESPOSTA4[0]);
                fprintf(CAD, "b: %d\n",RESPOSTA4[1]);
                fprintf(CAD, "c: %d\n",RESPOSTA4[2]);
                fprintf(CAD, "d: %d\n",RESPOSTA4[3]);
                fprintf(CAD, "e: %d\n",RESPOSTA4[4]);
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
        return 0;
    }
}
