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
int main() {
    setlocale(LC_ALL, "Portuguese");
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    int escolha;
    char nome[50];
    FILE *CAD;
    CAD = fopen("ticket_registro.csv","a");
    SetConsoleTextAttribute(h,4);
    if (CAD == NULL) {
        cout << "OCORREU UM ERRO AO LER/ACHAR O ARQUIVO.TXT" << endl;
        exit(1);
        fclose(CAD);
        return 0;
    }
    //CAD = fopen("example3.csv","a");
    int registro_ano_nascimento,registro_dia_nascimento,registro_mes_nascimento,registro_museu,registro_museu_ticket;
    float registro_valor;
    static int total_inteira=0,total_meia=0,total_gratis=0;
    string registro_cpf;
    srand (time(NULL));
    SetConsoleTextAttribute(h,6);
    printf("\n\n\t\t\t\t ,--------.,--. ,-----.,--. ,--.,------.,--------. ,---.  ");
    printf("\n\t\t\t\t '--.  .--'|  |'  .--./|  .'   /|  .---''--.  .--''   .-'  ");
    printf("\n\t\t\t\t    |  |   |  ||  |    |  .   ' |  `--,    |  |   `.  `-.  ");
    printf("\n\t\t\t\t    |  |   |  |'  '--'\\|  |\\   \\|  `---.   |  |   .-'    | ");
    printf("\n\t\t\t\t    `--'   `--' `-----'`--' '--'`------'   `--'   `-----' ");
    SetConsoleTextAttribute(h,7);
    cout << "\n\t\t\t\t\t__________________________________________" << endl;
    printf("\n\t\t\t\t\t | < Bem-vindo ao registro de ");
    SetConsoleTextAttribute(h,6); cout << "TICKETS!" << endl;
    SetConsoleTextAttribute(h,7);
    cout << "\n\t\t\t\t\t | < Antes de qualquer coisa, é necessário que" << endl;
    cout << "\t\t\t\t\t | <  você aceite os termos de serviço." << endl;
    cout << "\t\t\t\t\t | < (caso queira ler os termos, digite 3)" << endl;
    cout << "" << endl;
    do {
        SetConsoleTextAttribute(h,7);
        cout << "\t\t\t\t\t | < Deseja aceita-los?" << endl;
        cout << "\t\t\t\t\t | < Sim (0) / Não (1)" << endl;
        SetConsoleTextAttribute(h,2);
        printf("\n\t\t\t\t\t |  > "); cin >> escolha;
        SetConsoleTextAttribute(h,7);
        if (escolha == 3) {
        cout << "\t\t\t\t\t | < 3.	NOSSA LEI GERAL DA PROTEÇÃO DE DADOS" << endl;
        cout << "\t\t\t\t\t | < 3.1 Política de Privacidade do Museu Multitemático" << endl;
        cout << "\t\t\t\t\t | < Data de efetividade:" << endl;
            cout << "\t\t\t\t\t | < Este documento descreve como o Museu coleta," << endl;
            cout << "\t\t\t\t\t | < utiliza e protege suas informações pessoais, em conformidade" << endl;
            cout << "\t\t\t\t\t | < com a Lei Geral de Proteção de Dados (LGPD)." << endl;
            cout << "\t\t\t\t\t | < 3.2 Coleta de Dados Pessoais" << endl;
            cout << "\t\t\t\t\t | < Coletamos dados pessoais quando você visita nosso" << endl;
            cout << "\t\t\t\t\t | < museu ou utiliza nossos serviços. Os tipos de dados que podemos" << endl;
            cout << "\t\t\t\t\t | < coletar incluem, mas não se limitam a:" << endl;

cout << "\t\t\t\t\t | < - Nome" << endl;
cout << "\t\t\t\t\t | < - Número de telefone" << endl;
cout << "\t\t\t\t\t | < - Informações de pagamento" << endl;
cout << "\t\t\t\t\t | < - Data de nascimento" << endl;

   cout << "\t\t\t\t\t | < 3.3 Finalidades dos Dados Pessoais" << endl;

   cout << "\t\t\t\t\t | < Os dados pessoais coletados são utilizados para os seguintes fins:" << endl;

cout << "\t\t\t\t\t | < - Gerenciar seu acesso ao museu" << endl;
cout << "\t\t\t\t\t | < - Facilitar a compra de ingressos e reservas de visitas" << endl;
cout << "\t\t\t\t\t | < - Enviar informações sobre eventos e exposições" << endl;
cout << "\t\t\t\t\t | < - Retirar dúvidas e melhorar nossos serviços" << endl;

    cout << "\t\t\t\t\t | < 3.4 Sigilo e privacidade de seus Dados Pessoais" << endl;

    cout << "\t\t\t\t\t | < Nós não compartilhamos seus dados pessoais com terceiros," << endl;
    cout << "\t\t\t\t\t | < exceto quando necessário para cumprir obrigações legais," << endl;
    cout << "\t\t\t\t\t | < como requisitos fiscais ou regulatórios." << endl;



    cout << "\t\t\t\t\t | < 3.5 Segurança de Dados" << endl;

    cout << "\t\t\t\t\t | < Tomamos medidas de segurança adequadas para" << endl;
    cout << "\t\t\t\t\t | < proteger seus dados pessoais contra acesso não autorizado," << endl;
    cout << "\t\t\t\t\t | < alteração, divulgação ou destruição. Utilizamos medidas técnicas," << endl;
    cout << "\t\t\t\t\t | < administrativas e físicas para garantir a integridade" << endl;
    cout << "\t\t\t\t\t | < e confidencialidade dos seus dados." << endl;

    cout << "\t\t\t\t\t | < 3.6 Seus Direitos" << endl;

    cout << "\t\t\t\t\t | < De acordo com a LGPD, você tem os seguintes direitos em" << endl;
    cout << "\t\t\t\t\t | < relação aos seus dados pessoais:" << endl;

cout << "\t\t\t\t\t | < - Acesso aos seus dados" << endl;
cout << "\t\t\t\t\t | < - Retificação de dados imprecisos" << endl;
cout << "\t\t\t\t\t | < - Eliminação de dados pessoais" << endl;
cout << "\t\t\t\t\t | < - Portabilidade de dados" << endl;
cout << "\t\t\t\t\t | < - Oposição ao nosso tratamento de dados" << endl;

     cout << "\t\t\t\t\t | < Para exercer esses direitos, entre em contato conosco" << endl;
     cout << "\t\t\t\t\t | < usando as informações de contato fornecidas no final desta política." << endl;

    cout << "\t\t\t\t\t | < 3.7 Alterações nesta Política" << endl;

     cout << "\t\t\t\t\t | < Reservamo-nos o direito de atualizar esta política de" << endl;
     cout << "\t\t\t\t\t | < privacidade periodicamente. Qualquer alteração" << endl;
     cout << "\t\t\t\t\t | < significativa será comunicada a você." << endl;

     cout << "\t\t\t\t\t | < 3.8 Contato" << endl;

     cout << "\t\t\t\t\t | < Se você tiver dúvidas ou preocupações sobre" << endl;
     cout << "\t\t\t\t\t | < esta política de privacidade ou sobre o tratamento" << endl;
     cout << "\t\t\t\t\t | < de seus dados pessoais, entre em contato conosco" << endl;
     cout << "\t\t\t\t\t | < através dos seguintes meios:" << endl;

cout << "\t\t\t\t\t | < Telefone: 11 98512-4707" << endl;
cout << "\t\t\t\t\t | < Gmail: museumultitematico.lgpd@gmail.com" << endl;
        }
        if (escolha != 0)cout << "t\t\t\t\t\t | < Caso não aceite, não podemos continuar com o registro :(" << endl;
    }while(escolha != 0);
    do {
    cout << "\n\t\t\t\t\t | < Vamos começar a fazer o seu agora mesmo!" << endl;
    cout << "\t\t\t\t\t | < Mas antes será necessário o seu Nome!" << endl;
    SetConsoleTextAttribute(h,2);
    printf("\n\t\t\t\t\t |  > "); scanf(" %49[^\n]", nome); getchar();
    SetConsoleTextAttribute(h,7);
    printf("\t\t\t\t\t | < O Nome foi registrado como: ");
    SetConsoleTextAttribute(h,2);
    cout << nome << endl;
    SetConsoleTextAttribute(h,7);
    cout << "\t\t\t\t\t | < O Nome está correto?" << endl;
    cout << "\t\t\t\t\t | < Sim (0) / Não (1)" << endl;
    SetConsoleTextAttribute(h,2);
    printf("\n\t\t\t\t\t |  > "); cin >> escolha;
    SetConsoleTextAttribute(h,7);
    if (escolha != 0)cout << "\n\t\t\t\t\t | < Certo, vamos tentar de novo." << endl;
    }while(escolha != 0);

    do {
    cout << "\n\t\t\t\t\t | < Mas antes será necessário a data do seu Aniversario!" << endl;
    cout << "\n\t\t\t\t\t | < Data (enter) Mes (enter) Ano (enter)" << endl;

    SetConsoleTextAttribute(h,2);
    printf("\n\t\t\t\t\t |  > "); cin >> registro_dia_nascimento;printf("\n\t\t\t\t\t |  > "); cin >> registro_mes_nascimento;printf("\n\t\t\t\t\t |  > "); cin >> registro_ano_nascimento;
    SetConsoleTextAttribute(h,7);
    printf("\t\t\t\t\t | < O data foi registrada como: ");
    SetConsoleTextAttribute(h,2);
    cout << registro_dia_nascimento << "/" << registro_mes_nascimento << "/" << registro_ano_nascimento << endl;
    SetConsoleTextAttribute(h,7);
    cout << "\t\t\t\t\t | < O data está correta?" << endl;
    cout << "\t\t\t\t\t | < Sim (0) / Não (1)" << endl;
    SetConsoleTextAttribute(h,2);
    printf("\n\t\t\t\t\t |  > "); cin >> escolha;
    SetConsoleTextAttribute(h,7);
    if (escolha != 0)cout << "\n\t\t\t\t\t | < Certo, vamos tentar de novo." << endl;
    }while(escolha != 0);

    cout << "\n\t\t\t\t\t | < Em seguida digite o seu CPF por favor" << endl;
    cout << "\n\t\t\t\t\t | < Exemplo: 12345678901" << endl;
    do {
    SetConsoleTextAttribute(h,2);
        printf("\n\t\t\t\t\t |  > "); cin >> registro_cpf;
        SetConsoleTextAttribute(h,7);
        cout << "\t\t\t\t\t | < O cpf está correto? " << registro_cpf << endl;
        cout << "\t\t\t\t\t | < Sim (0) / Não (1)" << endl;
        SetConsoleTextAttribute(h,2);
        printf("\n\t\t\t\t\t |  > "); cin >> escolha;
        SetConsoleTextAttribute(h,7);
        if (escolha != 0)cout << "\t\t\t\t\t | < Certo, vamos tentar de novo." << endl;
    }while(escolha != 0);

    cout << "\t\t\t\t\t | < Aqui estão os valores das inteiras e meias\n" << endl;
    SetConsoleTextAttribute(h,4);
    cout << "\t\t\t\t\t | < !Aviso que apenas maiores de 60 anos ou estudantes podem receber meia\n" << endl;
    cout << "\t\t\t\t\t | < Para PCD o ingresso é gratuito\n" << endl;
    int ano_atual = 2023;
    int calcular = ano_atual-registro_ano_nascimento;
    cout << "\t\t\t\t\t | < Sua idade: " << calcular << endl;
    do {
    SetConsoleTextAttribute(h,7);
        cout << "\t\t\t\t\t | < 1) INTEIRA R$ 10.00" << endl;
        cout << "\t\t\t\t\t | < 2) MEIA R$ 5.00" << endl;
        cout << "\t\t\t\t\t | < 3) PCD" << endl;
        SetConsoleTextAttribute(h,2);
        do {
        printf("\n\t\t\t\t\t |  > ");
        cin >> registro_museu_ticket;
        }while(registro_museu_ticket != 1 && registro_museu_ticket != 2 && registro_museu_ticket != 3);
        SetConsoleTextAttribute(h,7);
        cout << "\t\t\t\t\t | < A escolha está correta?" << endl;
        cout << "\t\t\t\t\t | < Sim (0) / Não (1)" << endl;
        SetConsoleTextAttribute(h,2);
        printf("\n\t\t\t\t\t |  > "); cin >> escolha;
        SetConsoleTextAttribute(h,7);
        if (escolha != 0)cout << "\t\t\t\t\t | < Certo, vamos tentar de novo." << endl;
    }while(escolha != 0);


    cout << "\t\t\t\t\t | < NOME: " << nome << endl;
    cout << "\t\t\t\t\t | < DATA: " << registro_dia_nascimento << "/" << registro_mes_nascimento << "/" << registro_ano_nascimento << endl;
    cout << "\t\t\t\t\t | < CPF:" << registro_cpf << endl;
    if (registro_museu_ticket == 1) registro_valor = 10;
    if (registro_museu_ticket == 2) registro_valor = 5;
    if (registro_museu_ticket == 3) registro_valor = 0;
    if (registro_museu_ticket == 1) total_inteira = total_inteira+1;
    if (registro_museu_ticket == 2) total_meia = total_meia+1;
    if (registro_museu_ticket == 3) total_gratis = total_gratis+1;
    cout << "\t\t\t\t\t | < VALOR: R$ " << registro_valor << endl;
    int numero_ticket = rand() % 999999 + 1;
    printf("\t\t\t\t\t | < Esse sera o seu ticket para entrar: ");SetConsoleTextAttribute(h,6); printf("%d\n",numero_ticket);
    numero_ticket = numero_ticket+1;
    cout << "\t\t\t\t\t | < Aproveite essa experiencia." << endl;

    std::ofstream myfile;
      myfile.open ("ticket_valores.csv");
      myfile << "VISITANTES,QUANTIDADE";
      myfile << "\nINTEIRA," << total_inteira;
      myfile << "\nMEIA," << total_meia;
      myfile << "\nGRATIS," << total_gratis;
      int total_ganhos = total_inteira*total_meia;
      int total_inteira_ganhos = total_inteira*10;
      int total_meia_ganhos = total_meia*5;
      int total_gratis_ganhos = total_gratis_ganhos*0;
      myfile << "\n\nTOTAL_SEMANA,QUANTIDADE";
      myfile << "\nINTEIRA," << total_inteira_ganhos;
      myfile << "\nMEIA," << total_meia_ganhos;
      myfile << "\nGRATIS," << total_gratis_ganhos;

      myfile << "\n\nTOTAL_MES,QUANTIDADE";
      myfile << "\nINTEIRA," << total_inteira_ganhos*30;
      myfile << "\nMEIA," << total_meia_ganhos*30;
      myfile << "\nGRATIS," << total_gratis_ganhos*30;
      myfile.close();


     fprintf(CAD, "TICKET: %d",numero_ticket);
     fprintf(CAD, "\nNOME: %s",nome);
     fprintf(CAD, "\nDATA: %d/",registro_dia_nascimento);
     fprintf(CAD, "%d/",registro_mes_nascimento);
     fprintf(CAD, "%d\n",registro_ano_nascimento);
     float convert = std::stof(registro_cpf);
     fprintf(CAD, "CPF: %.0f",convert);
     fprintf(CAD, "\nVALOR: %.2f\n\n",registro_valor);
     fclose(CAD);

    SetConsoleTextAttribute(h,7);
    printf("\t\t\t\t\t | < (Pressione > Enter <)\n\t\t");
    SetConsoleTextAttribute(h,0);
    system("pause");
    SetConsoleTextAttribute(h,7);
    cout << "\t\t\t\t\t | < Oque deseja fazer agora?" << endl;
    cout << "\t\t\t\t\t | - Repetir o programa (1)" << endl;
    //cout << "\t\t\t\t\t\t - Ver o registro (2)" << endl;
    cout << "\t\t\t\t\t | - Fechar o programa (3)" << endl;
    do {
    SetConsoleTextAttribute(h,2);
    printf("\n\t\t\t\t\t |  > ");
    SetConsoleTextAttribute(h,7);
    cin >> escolha;
    }while(escolha != 1 && escolha != 3);
    switch(escolha) {
    case 1:
    system("cls");
        return main();
        break;
    case 3:
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t Adeus..\n\n\n" << endl;;
        break;
    }
}
