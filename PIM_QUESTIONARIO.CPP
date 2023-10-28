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
    FILE *CAD;
    CAD = fopen("Registro_QUESTIONARIO.csv","w");
    SetConsoleTextAttribute(h,4);
    if (CAD == NULL) {
        cout << "OCORREU UM ERRO AO LER/ACHAR O ARQUIVO.TXT" << endl;
        return 0;
    }

    static int RESPOSTA1[4];
    static int RESPOSTA2[4];
    static int RESPOSTA3[4];
    static int RESPOSTA4[4];
    static int RESPOSTA5[4];
    static int RESPOSTA6[4];
    SetConsoleTextAttribute(h,6);

    printf("\n\n\t\t\t\t  ___   __ __    ___  _____ ______  ____  ___   ____    ____  ____   ____  ___  ");
    printf("\n\t\t\t\t /   \\ |  |  |  /  _]/ ___/|      ||    |/   \\ |    \\  /    ||    \\ |    |/   \\ ");
    printf("\n\t\t\t\t|     ||  |  | /  [_(   \\_ |      | |  ||     ||  _  ||  o  ||  D  ) |  ||     |");
    printf("\n\t\t\t\t|  Q  ||  |  ||    _]\\__  ||_|  |_| |  ||  O  ||  |  ||     ||    /  |  ||  O  |");
    printf("\n\t\t\t\t|     ||  :  ||   [_ /  \\ |  |  |   |  ||     ||  |  ||  _  ||    \\  |  ||     |");
    printf("\n\t\t\t\t|     ||     ||     |\\    |  |  |   |  ||     ||  |  ||  |  ||  .  \\ |  ||     |");
    printf("\n\t\t\t\t \\__,_| \\__,_||_____| \\___|  |__|  |____|\\___/ |__|__||__|__||__|\\_||____|\\___/ ");
    printf("\n\t\t\t\t                                                                                ");

    SetConsoleTextAttribute(h,7);
    cout << "\n\t\t\t\t\t\t__________________________________________" << endl;
    cout << "\n\n\t\t\t\t\t\t | < Olá, esse é o QUESTIONARIO DO MUSEU" << endl;
    cout << "\t\t\t\t\t\t |\t< Gostaria de participar?" << endl;
    cout << "\t\t\t\t\t\t |\t< [ SIM (0) ] [ NÃO (1) ]" << endl;
    printf("\n\t\t\t\t\t\t |\t> ");cin >> escolha;
    switch(escolha) {
    case 0:
    cout << "\n\n\t\t\t\t\t\t | < Certo, vamos começar!" << endl;
    cout << "\t\t\t\t\t\t | < Os testes podem ser avaliados de 1 a 5" << endl;
    cout << "\n\n\t\t\t\t\t\t | < Oque você achou da exposição da NINTENDO?" << endl;
    cout << "\n\t\t\t\t\t\t | < não gostei 1__2__3__4__5 muito bom" << endl;
    do{
    printf("\n\t\t\t\t\t\t |\t> "); cin >> escolha;
    }while(escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 && escolha != 5);
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

    cout << "\n\n\t\t\t\t\t\t | < Oque você achou da exposição da SEMANA DA ARTE MODERNA?" << endl;
    cout << "\n\t\t\t\t\t\t | < não gostei 1__2__3__4__5 muito bom" << endl;
    do{
    printf("\n\t\t\t\t\t\t |\t> "); cin >> escolha;
    }while(escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 && escolha != 5);
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

    cout << "\n\n\t\t\t\t\t\t | < Oque você achou da exposição dos JOGOS OLÍMPICOS DE PARIS?" << endl;
    cout << "\n\t\t\t\t\t\t | < não gostei 1__2__3__4__5 muito bom" << endl;
    do{
    printf("\n\t\t\t\t\t\t |\t> "); cin >> escolha;
    }while(escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 && escolha != 5);
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

    cout << "\n\n\t\t\t\t\t\t | < Oque você achou da exposição do SANTOS DUMONT?" << endl;
    cout << "\n\t\t\t\t\t\t | < não gostei 1__2__3__4__5 muito bom" << endl;
    do{
    printf("\n\t\t\t\t\t\t |\t> "); cin >> escolha;
    }while(escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 && escolha != 5);
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
    cout << "\n\n\t\t\t\t\t\t | < Oque você achou da estrutura do museu?" << endl;
    cout << "\n\t\t\t\t\t\t | < não gostei 1__2__3__4__5 muito bom" << endl;
    do{
    printf("\n\t\t\t\t\t\t |\t> "); cin >> escolha;
    }while(escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 && escolha != 5);
    switch(escolha) {
            case 1:
                RESPOSTA5[0]=RESPOSTA5[0]+1;
            break;
            case 2:
                RESPOSTA5[1]=RESPOSTA5[1]+1;
            break;
            case 3:
                RESPOSTA5[2]=RESPOSTA5[2]+1;
            break;
            case 4:
                RESPOSTA5[3]=RESPOSTA5[3]+1;
            break;
            case 5:
                RESPOSTA5[4]=RESPOSTA5[4]+1;
            break;

    }

                fprintf(CAD, "QUESTOES:\n");
                fprintf(CAD, "QUESTIONARIO 1\n");
                fprintf(CAD, "1: %d\n",RESPOSTA1[0]);
                fprintf(CAD, "2: %d\n",RESPOSTA1[1]);
                fprintf(CAD, "3: %d\n",RESPOSTA1[2]);
                fprintf(CAD, "4: %d\n",RESPOSTA1[3]);
                fprintf(CAD, "5: %d\n",RESPOSTA1[4]);
                fprintf(CAD, "QUESTIONARIO 2\n");
                fprintf(CAD, "a: %d\n",RESPOSTA2[0]);
                fprintf(CAD, "b: %d\n",RESPOSTA2[1]);
                fprintf(CAD, "c: %d\n",RESPOSTA2[2]);
                fprintf(CAD, "d: %d\n",RESPOSTA2[3]);
                fprintf(CAD, "e: %d\n",RESPOSTA2[4]);
                fprintf(CAD, "QUESTIONARIO 3\n");
                fprintf(CAD, "a: %d\n",RESPOSTA3[0]);
                fprintf(CAD, "b: %d\n",RESPOSTA3[1]);
                fprintf(CAD, "c: %d\n",RESPOSTA3[2]);
                fprintf(CAD, "d: %d\n",RESPOSTA3[3]);
                fprintf(CAD, "e: %d\n",RESPOSTA3[4]);
                fprintf(CAD, "QUESTIONARIO 4\n");
                fprintf(CAD, "a: %d\n",RESPOSTA4[0]);
                fprintf(CAD, "b: %d\n",RESPOSTA4[1]);
                fprintf(CAD, "c: %d\n",RESPOSTA4[2]);
                fprintf(CAD, "d: %d\n",RESPOSTA4[3]);
                fprintf(CAD, "e: %d\n",RESPOSTA4[4]);
                fprintf(CAD, "QUESTIONARIO 5\n");
                fprintf(CAD, "a: %d\n",RESPOSTA5[0]);
                fprintf(CAD, "b: %d\n",RESPOSTA5[1]);
                fprintf(CAD, "c: %d\n",RESPOSTA5[2]);
                fprintf(CAD, "d: %d\n",RESPOSTA5[3]);
                fprintf(CAD, "e: %d\n",RESPOSTA5[4]);
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
    }
}
