/*-------------- MEDIC SYSTEM [PIM II] ------------
By: Wesley Silva Araujo de Sousa | RA: F332AD0 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
#include <locale.h>


char sexo[SIZE];                //Sexo do Paciente/Medico
long long int cpf[SIZE];        // CPF do Paciente/Medico
int idade[SIZE];                //Idade do Paciente/Medico
int op;                         //OP
int nota[SIZE];                 //Nota para o atendimento (FeedBack)
char coment[SIZE];              //Comentario do Atendimento
char nome[SIZE][50];            //Nome do Paciente/Medico
char email[SIZE][50];           //Email do Paciente/Medico
char sbnome[SIZE][50];          //Sobrenome do Paciente/Medico
char comentario[SIZE][50];      // Comentario do cliente
long long int numconvenio[SIZE];//Numero do Convenio do Paciente
char nomeconvenio[SIZE][50];    //Nome do Convenio do paciente
int valfinal[SIZE];             // Data de validade do convenio
long long int tel[SIZE];        //Telefone do Paciente/Medico
char rua[SIZE][50];             //Rua do Paciente/Medico
int cep[SIZE];                  //Cep do Paciente/Medico
int nm[SIZE];                   //Numero da Residencia do Paciente/Medico
long long int cnes[SIZE];       //CNES Do medico ou da clinica
char espmedic[SIZE][50];        //Especialidade do medico
long long int crm[SIZE];        //Numero da carteirinha do medico
char city[SIZE][50];            // Cidade do paciente/Medico
char estado[SIZE][50];          // Estado do paciente/Medico
char areadeatu[SIZE][50];       // AREA DE ATUACAO DO FUNCIONARIO
char ndd[SIZE];                 //Contador de pacientes Santo Amaro
char nddm[SIZE];                // Contador de pacientes Moema
char nddc[SIZE];                // Contador de Pacientes Chacara
char dataagen[SIZE];
char nmsb[SIZE];
char hrcon[SIZE];
long long int valorc[SIZE];


typedef struct{
    char login[30]; // vetor login da struct pessoa
    char senha[30]; // vetor senha da struct pessoa
} pessoa; pessoa p[1];  // diminuindo o nome da struct para "p" e o "[1]" Ã© o mÃ¡ximo de pessoas com logins e senhas

void menugeral();
void tdunidades();
void calculadora();
void faturamentogeral();
//Func Santo Amaro
void faturamentosanto();
void agendamentosanto();
void agenpesquisasanto();
void exibirconsultasanto();
void cancelamentoconsultasanto();

void deletarfuncionariosanto();
void listafuncionariosanto();
void pesquisafuncionariosanto();
void cadastrofuncionariosanto();
void listafeedsanto();
void feedbacksanto();
void deletarcadastromedicsantoamaro();
void listamedicsantoamaro();
void pesquisamedicsanto();
void cadastromedicsanto();
void menusantoamaro();
void cadastroclientesantoamaro();
void listaclientesantoamaro();
void pesquisaclientesantoamaro();
void deletarcadastroclientesantoamaro();

//Func Moema
void faturamentomoema();
void agendamentomoema();
void agenpesquisamoema();
void exibirconsultamoema();
void cancelamentoconsultamoema();

void deletarfuncionariomoema();
void listafuncionariomoema();
void pesquisafuncionariomoema();
void cadastrofuncionariomoema();
void listafeedmoema();
void feedbackmoema();
void deletarcadastromedicmoema();
void listamedicmoema();
void pesquisamedicmoema();
void cadastromedicmoema();
void menumoema();
void cadastroclientemoema();
void listaclientemoema();
void pesquisaclientemoema();
void deletarcadastroclientemoema();

//Func Chacara
void faturamentochacara();
void agendamentochacara();
void agenpesquisachacara();
void exibirconsultachacara();
void cancelamentoconsultachacara();

void deletarfuncionariochacara();
void listafuncionariochacara();
void pesquisafuncionariochacara();
void cadastrofuncionariochacara();
void listafeedchacara();
void feedbackchacara();
void deletarcadastromedicchacara();
void listamedicchacara();
void pesquisamedicchacara();
void cadastromedicchacara();
void menuchacara();
void cadastroclientechacara();
void listaclientechacara();
void pesquisaclientechacara();
void deletarcadastroclientechacara();

//Programa PRINCIPAL
int main(void){
	setlocale(LC_ALL, "Portuguese");
    login();
}
//Final Programa PRINCIPAL


//Login
int login(){
	
    system("cls");
    system("color 71");

    char login1[30]; // armazenar o login inserida pelo usuÃ¡rio
    char senha[30]; // armazenar a senha inserida pelo usuÃ¡rio
    printf("\n=======================================\n");
    printf("*                                     *\n");
    printf("*            CLÍNICA MÉDICA           *\n");
    printf("*                                     *\n");
    printf("=======================================\n");
    strcpy(p[0].login, "Clinica"); // Definindo o login "clinica" na struct
    strcpy(p[0].senha, "123"); // Definindo a senha "123"  na struct

    printf("\nlogin:");
    scanf("%s", login1); // armazenando os dados inseridos pelo usuÃ¡rio para o vetor login que estÃ¡ dentro da funÃ§Ã£o main

    printf("\nsenha:");
    scanf("%s", senha); // armazenando os dados inseridos pelo usuÃ¡rio para o vetor senha que estÃ¡ dentro da funÃ§Ã£o main

    if ((strcmp(login1,p[0].login)==0) && (strcmp(senha,p[0].senha)==0)){ // A funÃ§Ã£o strcmp Ã© responsÃ¡vel por comparar string com string
        printf("\nUsuario logado \n"); // se os vetores de dentro da struct tiver os mesmos dados do vetor interno da funÃ§Ã£o main, usuÃ¡rio serÃ¡ logado.
        menugeral();
    }else{
        printf("Login e/ou senha incorretos\n"); // senÃ£o, login ou senha incorreta.
        login();
    }
  
    return 0;
}
//Fim Login


//################################## Interface para a unidade de Santo Amaro ########################################
void menugeral(){
    system("cls");
    printf("\n=======================================\n");
    printf("*                                     *\n");
    printf("*         ESCOLHA UMA UNIDADE         *\n");
    printf("*                                     *\n");
    printf("=======================================\n");
    printf("\n1- Unidade Santo Amaro \n");
    printf("\n2- Unidade Moema \n");
    printf("\n3- Unidade Chácara \n");
    printf("\n=======================================\n");
    printf("*                                     *\n");
    printf("*         ESCOLHA UM RELATÓRIO        *\n");
    printf("*                                     *\n");
    printf("=======================================\n");
    printf("\n4- Relatório de Pacientes [Santo Amaro]\n ");
    printf("\n5- Relatório de Pacientes [Moema]\n ");
    printf("\n6- Relatório de Pacientes [Chácara]\n ");
    printf("\n\n=======================================\n");
    printf("*          TOTAL DE PACIENTES         *\n");
    printf("=======================================\n");
    printf("\n7- Quantidade de pacientes por unidade: \n\n");
    printf("\n=======================================\n");
    printf("*                                     *\n");
    printf("*             FATURAMENTOS            *\n");
    printf("*                                     *\n");
    printf("=======================================\n");
    printf("\n 8- Faturamento Diário e Mensal da Rede: \n");
    printf("\n10- Faturamento Diário e Mensal [Santo Amaro] \n");
    printf("\n11- Faturamento Diário e Mensal [Moema] \n");
    printf("\n12- Faturamento Diário e Mensal [Chácara] \n");
    printf(" \nSair(9)\n\nInsira a opção desejada: ");
    scanf("%d", &op); 
    if(op==1)
    { 
        menusantoamaro();
    }
    if(op==2)
    { 
        menumoema();
    }
    if(op==3)
    { 
        menuchacara();
    }
    if (op==4)
    {
        listafeedsanto();
    }
    if (op==5)
    {
        listafeedmoema();
    }
    if (op==6)
    {
        listafeedchacara();
    }
    if (op==7)
    {
        tdunidades();
    }
    if (op==8)
    {
        faturamentogeral();
    }
    if (op==10)
    {
        faturamentosanto();
    }
    if (op==11)
    {
        faturamentomoema();
    }
    if (op==12)
    {
        faturamentochacara();
    }
    if(op==9)
    {
        exit(0);
    }
    
}


//Função Menu
void menusantoamaro(){
    system("cls");
    printf("\n     ====UNIDADE SANTO AMARO====");
    printf("\n=======================================\n");
    printf("*                                     *\n");
    printf("*       DIGITE A OPÇÃO DESEJADA       *\n");
    printf("*                                     *\n");
    printf("=======================================\n");
    printf("\nCadastrar Pacientes(1) \nPesquisar Pacientes(2) \nLista de Pacientes(3) \nDeletar Cadastro de Pacientes(4) \n\nCadastrar Médicos(5) \nPesquisar Médicos(6) \nLista de Médicos(7) \nDeletar Cadastro de Médicos(10) \n\nCadastro de Funcionários(11) \nPesquisar Funcionários(12) \nLista de Funcionários(13) \nDeletar Funcionários(14) \n\nAgendamento de Consulta(15) \nPesquisar Consulta(16) \nLista de Consultas(17) \nDesmarcar Consulta(18) \n\n\nFEEDBACK(0) \n\nMenu Geral(8) ");
    printf(" \nSair(9)\n\nInsira a opção desejada: ");
	scanf("%d", &op); 
    
    if(op==1)
    { 
        cadastroclientesantoamaro();
    }
    if(op==2)
    {
        pesquisaclientesantoamaro();
    }
    if(op==3)
    {
        listaclientesantoamaro();
    }
    if(op==4)
    {
        deletarcadastroclientesantoamaro();
    }
    if (op==5)
    {
        cadastromedicsanto();
    }
    if (op==6)
    {
        pesquisamedicsanto();
    }
    if (op==7)
    {
        listamedicsantoamaro();
    }
    if (op==10)
    {
        deletarcadastromedicsantoamaro();
    }
    if (op==0)
    {
        feedbacksanto();
    }
    if (op==11)
    {
        cadastrofuncionariosanto();
    }
    if (op==12)
    {
        pesquisafuncionariosanto();
    }
    if (op==13)
    {
        listafuncionariosanto();
    }
    if (op==14)
    {
        deletarfuncionariosanto();
    }
    if (op==15)
    {
        agendamentosanto();
    }
    if (op==16)
    {
        agenpesquisasanto();
    }
    if (op==17)
    {
        exibirconsultasanto();
    }
    if (op==18)
    {
        cancelamentoconsultasanto();
    }
    if(op==9)
    {
        exit(0);
    }
    if (op==8)
    {
        menugeral();
        system("cls");
    }
    
    exit(0);
}
//Fim da Função Menu


//Função Cadastro Cliente
void cadastroclientesantoamaro(){
    system("cls");
    static int linha;
    int contadorantigo;
    int resultado;


    //Recolhe os Dados dos Clientes
    do{
        printf("---- Cadastrando Paciente----\n");
        printf("\nDigite somente o primeiro nome: ");
        scanf("%s", &nome[linha]);
        printf("\nDigite somente o último sobrenome: ");
        scanf("%s", &sbnome[linha]);
        printf("\nDigite o e-mail do paciente: ");
        scanf("%s", &email[linha]);
        printf("\nDigite a idade do paciente: ");
        scanf("%d", &idade[linha]);
        printf("\nDigite o CPF do paciente: ");
        scanf("%lld", &cpf[linha]);
        printf("\nDigite o gênero do paciente [F ou M]: ");
        scanf("%s", &sexo[linha]); 
        printf("\nDigite o nome do Convênio do Paciente [SE NÃO TIVER DIGITE N]: "); 
        scanf("%s", &nomeconvenio[linha]);
        printf("\nNumero do Convênio do Paciente [SE NAO TIVER DIGITE 0]: "); 
        scanf("%lld", &numconvenio[linha]); 
        printf("\nDigite a Data de Validade do Convênio do Paciente [EX: 00/00/0000]: ");
        scanf("%s", &valfinal[linha]);
        printf("\nDigite o Telefone/Celular do paciente: ");
        scanf("%lld", &tel[linha]);
        printf("\nDigite a Rua do Paciente: ");
        scanf("%s", &rua[linha]);
        printf("\nDigite o CEP do paciente: ");
        scanf("%d", &cep[linha]);
        printf("\nDigite o número da residência do paciente: ");
        scanf("%d", &nm[linha]); 
        printf("\nDigite o Estado do Paciente[EX: SP]: ");
        scanf("%s", &estado[linha]);
        printf("\nDigite a Cidade do Paciente: ");
        scanf("%s", &city[linha]);



        //Salva o Cadastro no banco de dados
        FILE* filecliente;
        filecliente = fopen("CadastroClienteSantoAmaro.txt", "a");
        fprintf(filecliente, "%s %s %s %d %lld %s %s %lld %s %lld %s %d %d %s %s\n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &nomeconvenio[linha], numconvenio[linha], &valfinal[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
        fclose(filecliente);

        //Reseta o valor da variavÃ©l caso o looping seja efetuado
        contadorantigo = 0;
        resultado = 0;

        //LÃª o Contador no Banco de Dados
        FILE* filecontadorcliente;
        filecontadorcliente = fopen("ContadorClienteSantoAmaro.txt", "r");
        fscanf(filecontadorcliente, "%d", &contadorantigo);
        fclose(filecontadorcliente);

        //Salva o contador no banco de dados
        resultado = contadorantigo + 1;
        filecontadorcliente = fopen("ContadorClienteSantoAmaro.txt", "w");
        fprintf(filecontadorcliente, "%d", resultado);
        fclose(filecontadorcliente);

        //OpÃ§Ãµes
        printf("\nDigite 1 para continuar cadastrando, 8 para voltar ao menu ou 9 para sair: ");
        scanf("%d", &op);
        linha++;
        if(op==8){
            menusantoamaro();
        }
        if(op==9){
            exit(0);
        }
    }while(op==1);
}
//Fim FunÃ§Ã£o Cadastro Cliente


//FunÃ§Ã£o Cadastro DE MEDICOS
void cadastromedicsanto(){
    system("cls");
    static int linha;
    int contadorantigo;
    int resultado;


    //Recolhe os Dados dos MEDICOS
    do{
        printf("---- Cadastrando Médico---\n");
        printf("\nDigite somente o primeiro nome: ");
        scanf("%s", &nome[linha]);
        printf("\nDigite somente o último sobrenome: ");
        scanf("%s", &sbnome[linha]);
        printf("\nDigite o e-mail do médico: ");
        scanf("%s", &email[linha]);
        printf("\nDigite a idade do médico: ");
        scanf("%d", &idade[linha]);
        printf("\nDigite o CPF do médico: ");
        scanf("%lld", &cpf[linha]);
        printf("\nDigite o gênero do médico[F ou M]: ");
        scanf("%s", &sexo[linha]); 
        printf("\nNumero do CRM do médico: "); 
        scanf("%lld", &crm[linha]); 
        printf("\nDigite o CNES: ");
        scanf("%lld", &cnes[linha]);
        printf("\nDigite a especialidade do médico: ");
        scanf("%s", &espmedic[linha]);
        printf("\nDigite o Telefone/Celular do médico: ");
        scanf("%lld", &tel[linha]);
        printf("\nDigite a Rua do médico: ");
        scanf("%s", &rua[linha]);
        printf("\nDigite o CEP do médico: ");
        scanf("%d", &cep[linha]);
        printf("\nDigite o número da residência do médico: ");
        scanf("%d", &nm[linha]); 
        printf("\nDigite o Estado do médico[EX: SP]: ");
        scanf("%s", &estado[linha]);
        printf("\nDigite a Cidade do médico [EX: Sao-Paulo]: ");
        scanf("%s", &city[linha]);

        //Salva o Cadastro no banco de dados
        FILE* filecliente;
        filecliente = fopen("CadastroMedicSantoAmaro.txt", "a");
        fprintf(filecliente, "%s %s %s %d %lld %s %lld %lld %s %lld %s %d %d %s %s\n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], crm[linha], cnes[linha], &espmedic[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
        fclose(filecliente);

        //Reseta o valor da variavÃ©l caso o looping seja efetuado
        contadorantigo = 0;
        resultado = 0;

        //LÃª o Contador no Banco de Dados
        FILE* filecontadorcliente;
        filecontadorcliente = fopen("ContadorMedicSantoAmaro.txt", "r");
        fscanf(filecontadorcliente, "%d", &contadorantigo);
        fclose(filecontadorcliente);

        //Salva o contador no banco de dados
        resultado = contadorantigo + 1;
        filecontadorcliente = fopen("ContadorMedicSantoAmaro.txt", "w");
        fprintf(filecontadorcliente, "%d", resultado);
        fclose(filecontadorcliente);

        //OpÃ§Ãµes
        printf("\nDigite 1 para continuar cadastrando, 8 para voltar ao menu ou 9 para sair: ");
        scanf("%d", &op);
        linha++;
        if(op==8){
            menusantoamaro();
        }
        if(op==9){
            exit(0);
        }
    }while(op==1);
}

//FIM DA FUNCAO DE CADASTRO DE MEDICOS





//FunÃ§Ã£o Deletar Cadastro Cliente
void deletarcadastroclientesantoamaro(){
    long long int deletarcpf;
    int contadorantigo;
    int contadornovo=0;
    int i;
    static int linha;
    system("cls");
    //Recebe o CPF que deseja excluir
    printf("\nDigite o CPF do cliente: ");
    scanf("%lld", &deletarcpf);

    //Abre o resgistro de clientes
    FILE* filecliente = fopen("CadastroClienteSantoAmaro.txt", "r");

    //abre e pega o contador de clientes
    FILE* filecontadorlciente = fopen("ContadorClienteSantoAmaro.txt", "r");
    fscanf(filecontadorlciente, "%d", &contadorantigo);
    fclose(filecontadorlciente);

    //Faz um looping ate encontrar no banco de dados o CPF digitado
    for(i = 0; i < contadorantigo; i++)
    {
        fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %lld %s %d %d %s %s", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &nomeconvenio[linha], &numconvenio[linha], &valfinal[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);

        //Se o CPF Ã© encontrado mostra os dados do Cliente
        if(deletarcpf == cpf[linha])
        {
            fclose(filecliente);

            //Mostra os dados do Cliente
            printf("\nDados de %s\n", &nome[linha]);
            printf("\nNome: %s \nSobrenome: %s \nE-mail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nNome do Convênio: %s \nNúmero do Convênio: %lld \nData de validade do Convênio: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &nomeconvenio[linha], numconvenio[linha], &valfinal[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);

            //Pergunta se deseja realmente excluir aquele CPF
            printf("\nDeseja deletar o cadastro de %s? Digite 1 para SIM e 2 para NÃO: ", &nome[linha]);
            scanf("%d", &op);

            if(op==1)
            {
                //Cria um novo arquivo txt para colocar os dados dos clientes exceto os dados do CPF que foi excluido
                FILE* filenew = fopen("new.txt", "a");

                //Reabre o registro de clientes para nova utilizaÃ§Ã£o
                filecliente = fopen("CadastroClienteSantoAmaro.txt", "r");

                for(i = 0; i < contadorantigo; i++)
                {
                    //LÃª os dados do registro de clientes
                    fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %lld %s %d %d %s %s", &nome[i], &sbnome[i], &email[i], &idade[i], &cpf[i], &sexo[i], &nomeconvenio[i], &numconvenio[i], &valfinal[i], &tel[i], &rua[i], &cep[i], &nm[i], &estado[i], &city[i]);

                    if(cpf[i] != deletarcpf)
                    {
                        //Guarda os dados dos clientes que restaram no novo banco de dados
                        fprintf(filenew, "%s %s %s %d %lld %s %s %lld %s %lld %s %d %d %s %s\n", &nome[i], &sbnome[i], &email[i], idade[i], cpf[i], &sexo[i], &nomeconvenio[i], numconvenio[i], &valfinal[i], tel[i], &rua[i], cep[i], nm[i], &estado[i], &city[i]);
                    }
                }
                fclose(filecliente);
                fclose(filenew);

                //Registra o novo valor do contador de clientes no banco de dados
                contadornovo = contadorantigo - 1;
                FILE* filecontadorlciente = fopen("ContadorClienteSantoAmaro.txt", "w");
                fprintf(filecontadorlciente, "%d", contadornovo);
                fclose(filecontadorlciente);

                //ExcluÃ­ o antigo banco de dados
                remove("CadastroClienteSantoAmaro.txt");


                //Altera o nome do novo banco de dados para o nome antigo
                rename("new.txt", "CadastroClienteSantoAmaro.txt");


                //opÃ§Ãµes
                printf("\nDigite 8 para retornar ao menu ou 9 para sair: ");
                scanf("%d", &op);
                if(op==8)
                {
                    menusantoamaro();
                }
                if(op==9)
                {
                    exit(0);
                }
                if(op!=8,9)
                {
                    menusantoamaro();
                }
            } 
            if(op!=1)
            {
                menusantoamaro();
            }    
        }
        linha++;
    }
    fclose(filecliente);  
    menusantoamaro();  
}
//Fim FunÃ§Ã£o Deletar Cadastro Cliente



//Deletar medicos
void deletarcadastromedicsantoamaro(){
    long long int deletarcpf;
    int contadorantigo;
    int contadornovo=0;
    int i;
    static int linha;
    system("cls");
    //Recebe o CPF que deseja excluir
    printf("\nDigite o CPF do medico: ");
    scanf("%lld", &deletarcpf);

    //Abre o resgistro de clientes
    FILE* filecliente = fopen("CadastroMedicSantoAmaro.txt", "r");

    //abre e pega o contador de clientes
    FILE* filecontadorlciente = fopen("ContadorMedicSantoAmaro.txt", "r");
    fscanf(filecontadorlciente, "%d", &contadorantigo);
    fclose(filecontadorlciente);

    //Faz um looping ate encontrar no banco de dados o CPF digitado
    for(i = 0; i < contadorantigo; i++)
    {
        fscanf(filecliente, "%s %s %s %d %lld %s %lld %lld %s %lld %s %d %d %s %s", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &crm[linha], &cnes[linha], &espmedic[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);

        //Se o CPF Ã© encontrado mostra os dados do Cliente
        if(deletarcpf == cpf[linha])
        {
            fclose(filecliente);

            //Mostra os dados do Cliente
            printf("\nDados de %s\n", &nome[linha]);
            printf("\nNome: %s \nSobrenome: %s \nE-mail: %s \nIdade: %d \nCPF: %lld \nGenêro: %s \nCRM: %lld \nCNES: %lld \nEspecialidade médica: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], crm[linha], cnes[linha], &espmedic[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);

            //Pergunta se deseja realmente excluir aquele CPF
            printf("\nDeseja deletar o cadastro de %s? Digite 1 para SIM e 2 para NÃO: ", &nome[linha]);
            scanf("%d", &op);

            if(op==1)
            {
                //Cria um novo arquivo txt para colocar os dados dos clientes exceto os dados do CPF que foi excluido
                FILE* filenew = fopen("new.txt", "a");

                //Reabre o registro de clientes para nova utilizaÃ§Ã£o
                filecliente = fopen("CadastroMedicSantoAmaro.txt", "r");

                for(i = 0; i < contadorantigo; i++)
                {
                    //LÃª os dados do registro de clientes
                    fscanf(filecliente, "%s %s %s %d %lld %s %lld %lld %s %lld %s %d %d %s %s", &nome[i], &sbnome[i], &email[i], &idade[i], &cpf[i], &sexo[i], &crm[i], &cnes[i], &espmedic[i], &tel[i], &rua[i], &cep[i], &nm[i], &estado[i], &city[i]);

                    if(cpf[i] != deletarcpf)
                    {
                        //Guarda os dados dos clientes que restaram no novo banco de dados
                        fprintf(filenew, "%s %s %s %d %lld %s %lld %lld %s %lld %s %d %d %s %s\n", &nome[i], &sbnome[i], &email[i], idade[i], cpf[i], &sexo[i], crm[i], cnes[i], &espmedic[i], tel[i], &rua[i], cep[i], nm[i], &estado[i], &city[i]);
                    }
                }
                fclose(filecliente);
                fclose(filenew);

                //Registra o novo valor do contador de clientes no banco de dados
                contadornovo = contadorantigo - 1;
                FILE* filecontadorlciente = fopen("ContadorMedicSantoAmaro.txt", "w");
                fprintf(filecontadorlciente, "%d", contadornovo);
                fclose(filecontadorlciente);

                //ExcluÃ­ o antigo banco de dados
                remove("CadastroMedicSantoAmaro.txt");


                //Altera o nome do novo banco de dados para o nome antigo
                rename("new.txt", "CadastroMedicSantoAmaro.txt");


                //opÃ§Ãµes
                printf("\nDigite 8 para retornar ao menu ou 9 para sair: ");
                scanf("%d", &op);
                if(op==8)
                {
                    menusantoamaro();
                }
                if(op==9)
                {
                    exit(0);
                }
                if(op!=8,9)
                {
                    menusantoamaro();
                }
            } 
            if(op!=1)
            {
                menusantoamaro();
            }    
        }
        linha++;
    }
    fclose(filecliente);  
    menusantoamaro();  
}
//Fim FunÃ§Ã£o Deletar Cadastro medicos



//FunÃ§Ã£o Pesquisa
void pesquisaclientesantoamaro(){
    system("cls");
    long long int cpfpesquisa;
    int contadorpesquisa;
    static int i;
    static int linha;

    //Abre Banco de Dados Cliente
    FILE* filecliente;
    filecliente = fopen("CadastroClienteSantoAmaro.txt", "r");

    //Abre e armazena contador
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorClienteSantoAmaro.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorpesquisa);
    fclose(filecontadorcliente);

    //Recebe CPF para Pesquisa
    printf("\nDigite o CPF: ");
    scanf("%lld", &cpfpesquisa);

    //LÃª o banco de dados atÃ© encontrar o CPF pesquisado
    for(i = 0; i < contadorpesquisa; i++)
    {
        fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %lld %s %d %d %s %s", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &nomeconvenio[linha], &numconvenio[linha], &valfinal[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);

        //Se o CPF pesquisado constar no Banco de Dados o resgistro Ã© exibido
        if(cpfpesquisa == cpf[linha])
        {
            printf("\nNome: %s \nSobrenome: %s \nEmail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nNome do Convênio: %s \nNúmero do Convênio: %lld \nData de validade do Convênio: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &nomeconvenio[linha], numconvenio[linha], &valfinal[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
            printf("\nDigite 1 para continuar pesquisando, 8 para voltar ao menu ou 9 para sair: ");
            scanf("%d", &op);
            //OpÃ§Ãµes
            if(op==1)
            {
                pesquisaclientesantoamaro();
            }
            
            if(op==8)
            {
                menusantoamaro();
            }
            if(op==9)
            {
                exit(0);
            }
            if(op!=8,9)
            {
                menusantoamaro();
            }
        }
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    if(op==8)
    {
        menusantoamaro();
    }
    if(op==9)
    {
        exit(0);
    }
    if(op!=8,9)
    {
        menusantoamaro();
    }
    exit(0);
}
//Fim FunÃ§Ã£o Pesquisa




//FunÃ§Ã£o Pesquisa Medic
void pesquisamedicsanto(){
    system("cls");
    long long int cpfpesquisa;
    int contadorpesquisa;
    static int i;
    static int linha;

    //Abre Banco de Dados Cliente
    FILE* filecliente;
    filecliente = fopen("CadastroMedicSantoAmaro.txt", "r");

    //Abre e armazena contador
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorMedicSantoAmaro.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorpesquisa);
    fclose(filecontadorcliente);

    //Recebe CPF para Pesquisa
    printf("\nDigite o CPF: ");
    scanf("%lld", &cpfpesquisa);

    //LÃª o banco de dados atÃ© encontrar o CPF pesquisado
    for(i = 0; i < contadorpesquisa; i++)
    {
        fscanf(filecliente, "%s %s %s %d %lld %s %lld %lld %s %lld %s %d %d %s %s", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &crm[linha], &cnes[linha], &espmedic[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);

        //Se o CPF pesquisado constar no Banco de Dados o resgistro Ã© exibido
        if(cpfpesquisa == cpf[linha])
        {
            printf("\nNome: %s \nSobrenome: %s \nEmail: %s \nIdade: %d \nCPF: %lld \nGenêro: %s \nCRM: %lld \nCNES: %lld \nEspecialidade médica: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], crm[linha], cnes[linha], &espmedic[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
            printf("\nDigite 1 para continuar pesquisando, 8 para voltar ao menu ou 9 para sair: ");
            scanf("%d", &op);
            //OpÃ§Ãµes
            if(op==1)
            {
                pesquisamedicsanto();
            }
            
            if(op==8)
            {
                menusantoamaro();
            }
            if(op==9)
            {
                exit(0);
            }
            if(op!=8,9)
            {
                menusantoamaro();
            }
        }
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    if(op==8)
    {
        menusantoamaro();
    }
    if(op==9)
    {
        exit(0);
    }
    if(op!=8,9)
    {
        menusantoamaro();
    }
    exit(0);
}
//Fim FunÃ§Ã£o Pesquisa Medic



//Lista de Cliente
void listaclientesantoamaro(){
    system("cls");
    static int linha;
    int i;
    int contadorantigo;

    //Abre os Cadastros dos Clientes
    FILE* filecliente;
    filecliente = fopen("CadastroClienteSantoAmaro.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorClienteSantoAmaro.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorantigo);
    fclose(filecontadorcliente);

    //Exibe a lista de Clientes
    printf("\n----Lista de Clientes Cadastrados----\n");
    for(i = 0; i < contadorantigo; i++){
        fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %lld %s %d %d %s %s\n", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &nomeconvenio[linha], &numconvenio[linha], &valfinal[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);
        printf("\nNome: %s \nSobrenome: %s \nE-mail: %s \nIdade: %d \nCPF: %lld \nGenêro: %s \nNome do Convênio: %s \nNúmero do Convênio: %lld \nData de validade do Convênio: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &nomeconvenio[linha], numconvenio[linha], &valfinal[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    printf("\nDigite 8 para voltar ao Menu ou 9 para Sair: ");
    scanf("%d", &op);
    if(op==8){
        menusantoamaro();
    }
    if(op==9){
        exit(0);
    }
    if(op!=8,9)
    {
        menusantoamaro();
    }
    exit(0);
}
//Fim da Lista de Clientes




//Lista de Medic
void listamedicsantoamaro(){
    system("cls");
    static int linha;
    int i;
    int contadorantigo;

    //Abre os Cadastros dos Clientes
    FILE* filecliente;
    filecliente = fopen("CadastroMedicSantoAmaro.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorMedicSantoAmaro.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorantigo);
    fclose(filecontadorcliente);

    //Exibe a lista de Clientes
    printf("\n----Lista de Medicos Cadastrados----\n");
    for(i = 0; i < contadorantigo; i++){
        fscanf(filecliente, "%s %s %s %d %lld %s %lld %lld %s %lld %s %d %d %s %s", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &crm[linha], &cnes[linha], &espmedic[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);
        printf("\nNome: %s \nSobrenome: %s \nE-mail: %s \nIdade: %d \nCPF: %lld \nGenÃªro: %s \nCRM: %lld \nCNES: %lld \nEspecialidade medica: %s \nNumero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNumero da Residencia: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], crm[linha], cnes[linha], &espmedic[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    printf("\nDigite 8 para voltar ao Menu ou 9 para Sair: ");
    scanf("%d", &op);
    if(op==8){
        menusantoamaro();
    }
    if(op==9){
        exit(0);
    }
    if(op!=8,9)
    {
        menusantoamaro();
    }
    exit(0);
}
//Fim da Lista de Medic


// func de func
void cadastrofuncionariosanto(){
    system("cls");
    static int linha;
    int contadorantigo;
    int resultado;
do{
        printf("---- Cadastrando Funcionário----\n");
        printf("\nDigite somente o primeiro nome: ");
        scanf("%s", &nome[linha]);
        printf("\nDigite somente o último sobrenome: ");
        scanf("%s", &sbnome[linha]);
        printf("\nDigite o e-mail do Funcionário: ");
        scanf("%s", &email[linha]);
        printf("\nDigite a idade do Funcionário: ");
        scanf("%d", &idade[linha]);
        printf("\nDigite o CPF do Funcionário: ");
        scanf("%lld", &cpf[linha]);
        printf("\nDigite o gênero do Funcionário[F ou M]: ");
        scanf("%s", &sexo[linha]); 
        printf("\nÁrea de Atuação do Funcionário: "); 
        scanf("%s", &areadeatu[linha]);
        printf("\nDigite o Telefone/Celular do Funcionário: ");
        scanf("%lld", &tel[linha]);
        printf("\nDigite a Rua do Funcionário: ");
        scanf("%s", &rua[linha]);
        printf("\nDigite o CEP do Funcionário: ");
        scanf("%d", &cep[linha]);
        printf("\nDigite o número da residência do Funcionário: ");
        scanf("%d", &nm[linha]); 
        printf("\nDigite o Estado do Funcionário[EX: SP]: ");
        scanf("%s", &estado[linha]);
        printf("\nDigite a Cidade do Funcionário: ");
        scanf("%s", &city[linha]);

        //Salva o Cadastro no banco de dados
        FILE* filecliente;
        filecliente = fopen("CadastroFuncionarioSanto.txt", "a");
        fprintf(filecliente, "%s %s %s %d %lld %s %s %lld %s %d %d %s %s\n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &areadeatu[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
        fclose(filecliente);

        contadorantigo = 0;
        resultado = 0;

        //LÃª o Contador no Banco de Dados
        FILE* filecontadorcliente;
        filecontadorcliente = fopen("ContadorFuncionarioSanto.txt", "r");
        fscanf(filecontadorcliente, "%d", &contadorantigo);
        fclose(filecontadorcliente);

        //Salva o contador no banco de dados
        resultado = contadorantigo + 1;
        filecontadorcliente = fopen("ContadorFuncionarioSanto.txt", "w");
        fprintf(filecontadorcliente, "%d", resultado);
        fclose(filecontadorcliente);

        //OpÃ§Ãµes
        printf("\nDigite 1 para continuar cadastrando, 8 para voltar ao menu ou 9 para sair: ");
        scanf("%d", &op);
        linha++;
        if(op==8){
            menusantoamaro();
        }
        if(op==9){
            exit(0);
        }
    }while(op==1);
}
//Fim Funcao Cadastro de func
void pesquisafuncionariosanto(){
    system("cls");
    long long int cpfpesquisa;
    int contadorpesquisa;
    static int i;
    static int linha;

    //Abre Banco de Dados Cliente
    FILE* filecliente;
    filecliente = fopen("CadastroFuncionarioSanto.txt", "r");

    //Abre e armazena contador
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorFuncionarioSanto.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorpesquisa);
    fclose(filecontadorcliente);

    //Recebe CPF para Pesquisa
    printf("\nDigite o CPF: ");
    scanf("%lld", &cpfpesquisa);

    //Le o banco de dados ate encontrar o CPF pesquisado
    for(i = 0; i < contadorpesquisa; i++)
    {
        fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %d %d %s %s\n", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &areadeatu[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);

        //Se o CPF pesquisado constar no Banco de Dados o resgistro Ã© exibido
        if(cpfpesquisa == cpf[linha])
        {
            printf("\nNome: %s \nSobrenome: %s \nE-mail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nÁrea de atuação: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &areadeatu[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
            printf("\nDigite 1 para continuar pesquisando, 8 para voltar ao menu ou 9 para sair: ");
            scanf("%d", &op);
            //OpÃ§Ãµes
            if(op==1)
            {
                pesquisafuncionariosanto();
            }
            
            if(op==8)
            {
                menuchacara();
            }
            if(op==9)
            {
                exit(0);
            }
            if(op!=8,9)
            {
                menusantoamaro();
            }
        }
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    if(op==8)
    {
        menusantoamaro();
    }
    if(op==9)
    {
        exit(0);
    }
    if(op!=8,9)
    {
        menusantoamaro();
    }
    exit(0);
}

//FIM

//Lista de Func
void listafuncionariosanto(){
    system("cls");
    static int linha;
    int i;
    int contadorantigo;

    //Abre os Cadastros dos Clientes
    FILE* filecliente;
    filecliente = fopen("CadastroFuncionarioSanto.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorFuncionarioSanto.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorantigo);
    fclose(filecontadorcliente);

    //Exibe a lista de Clientes
    printf("\n----Lista de Funcionários Cadastrados----\n");
    for(i = 0; i < contadorantigo; i++){
        fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %d %d %s %s\n", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &areadeatu[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);
        printf("\nNome: %s \nSobrenome: %s \nE-mail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nÁrea de atuação: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &areadeatu[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    printf("\nDigite 8 para voltar ao Menu ou 9 para Sair: ");
    scanf("%d", &op);
    if(op==8){
        menusantoamaro();
    }
    if(op==9){
        exit(0);
    }
    if(op!=8,9)
    {
        menusantoamaro();
    }
    exit(0);
}
//Fim da Lista de Clientes

//FunÃ§Ã£o Deletar Cadastro Cliente
void deletarfuncionariosanto(){
    system("cls");
    long long int deletarcpf;
    int contadorantigo;
    int contadornovo=0;
    int i;
    static int linha;

    //Recebe o CPF que deseja excluir
    printf("\nDigite o CPF do Funcionário: ");
    scanf("%lld", &deletarcpf);

    //Abre o resgistro de clientes
    FILE* filecliente = fopen("CadastroFuncionarioSanto.txt", "r");

    //abre e pega o contador de clientes
    FILE* filecontadorlciente = fopen("ContadorFuncionarioSanto.txt", "r");
    fscanf(filecontadorlciente, "%d", &contadorantigo);
    fclose(filecontadorlciente);

    //Faz um looping ate encontrar no banco de dados o CPF digitado
    for(i = 0; i < contadorantigo; i++)
    {
        fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %d %d %s %s\n", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &areadeatu[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);

        //Se o CPF Ã© encontrado mostra os dados do Cliente
        if(deletarcpf == cpf[linha])
        {
            fclose(filecliente);

            //Mostra os dados do Cliente
            printf("\nDados de %s\n", &nome[linha]);
            printf("\nNome: %s \nSobrenome: %s \nE-mail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nÁrea de atuação: %s \nNumero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &areadeatu[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);

            //Pergunta se deseja realmente excluir aquele CPF
            printf("\nDeseja deletar o cadastro de %s? Digite 1 para SIM e 2 para NÃO: ", &nome[linha]);
            scanf("%d", &op);

            if(op==1)
            {
                //Cria um novo arquivo txt para colocar os dados dos clientes exceto os dados do CPF que foi excluido
                FILE* filenew = fopen("new.txt", "a");

                //Reabre o registro de clientes para nova utilizaÃ§Ã£o
                filecliente = fopen("CadastroFuncionarioSanto.txt", "r");

                for(i = 0; i < contadorantigo; i++)
                {
                    //LÃª os dados do registro de clientes
                    fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %d %d %s %s", &nome[i], &sbnome[i], &email[i], &idade[i], &cpf[i], &sexo[i], &areadeatu[i], &tel[i], &rua[i], &cep[i], &nm[i], &estado[i], &city[i]);

                    if(cpf[i] != deletarcpf)
                    {
                        //Guarda os dados dos clientes que restaram no novo banco de dados
                        fprintf(filenew, "%s %s %s %d %lld %s %s %lld %s %d %d %s %s\n", &nome[i], &sbnome[i], &email[i], idade[i], cpf[i], &sexo[i], &areadeatu[i], tel[i], &rua[i], cep[i], nm[i], &estado[i], &city[i]);
                    }
                }
                fclose(filecliente);
                fclose(filenew);

                //Registra o novo valor do contador de clientes no banco de dados
                contadornovo = contadorantigo - 1;
                FILE* filecontadorlciente = fopen("ContadorFuncionarioSanto.txt", "w");
                fprintf(filecontadorlciente, "%d", contadornovo);
                fclose(filecontadorlciente);


                //ExcluÃ­ o antigo banco de dados
                remove("CadastroFuncionarioSanto.txt");


                //Altera o nome do novo banco de dados para o nome antigo
                rename("new.txt", "CadastroFuncionarioSanto.txt");


                //opÃ§Ãµes
                printf("\nDigite 8 para retornar ao menu ou 9 para sair: ");
                scanf("%d", &op);
                if(op==8)
                {
                    menusantoamaro();
                }
                if(op==9)
                {
                    exit(0);
                }
                if(op!=8,9)
                {
                    menusantoamaro();
                }
            } 
            if(op!=1)
            {
                menusantoamaro();
            }    
        }
        linha++;
    }
    fclose(filecliente);  
    menusantoamaro();  
}
//Fim FunÃ§Ã£o Deletar Cadastro func

//FunÃ§ao do feedback
void feedbacksanto(){
    system("cls");
    static int linha;
    int contadorantigo;
    int resultado;
    do{
        printf("---- Feedback do paciente----\n");
        printf("\nDigite o nome do paciente: ");
        scanf("%s", &nome[linha]);
        printf("\nDigite o Sobrenome do paciente: ");
        scanf("%s", &sbnome[linha]);
        printf("\nDigite o e-mail do paciente: ");
        scanf("%s", &email[linha]);
        printf("\nDigite a Nota para o Atendimento [0 a 5]: ");
        scanf("%d", &nota[linha]);
        printf("\n Digite o comentario do paciente [Utilizando (-) no lugar dos espacos]: ");
        scanf("%s", &comentario[linha]);
        printf("\nDigite o CPF do paciente: ");
        scanf("%lld", &cpf[linha]);


        //Salva o Cadastro no banco de dados
        FILE* filecliente;
        filecliente = fopen("CadastroFeedSantoAmaro.txt", "a");
        fprintf(filecliente, "%s %s %s %d %s %lld\n", &nome[linha], &sbnome[linha], &email[linha], nota[linha], &comentario[linha], cpf[linha]);
        fclose(filecliente);

        //Reseta o valor da variavÃ©l caso o looping seja efetuado
        contadorantigo = 0;
        resultado = 0;

        //LÃª o Contador no Banco de Dados
        FILE* filecontadorcliente;
        filecontadorcliente = fopen("ContadorFeedSantoAmaro.txt", "r");
        fscanf(filecontadorcliente, "%d", &contadorantigo);
        fclose(filecontadorcliente);

        //Salva o contador no banco de dados
        resultado = contadorantigo + 1;
        filecontadorcliente = fopen("ContadorFeedSantoAmaro.txt", "w");
        fprintf(filecontadorcliente, "%d", resultado);
        fclose(filecontadorcliente);

        //OpÃ§Ãµes
        printf("\nDigite 1 para continuar dando nota, 8 para voltar ao menu ou 9 para sair: ");
        scanf("%d", &op);
        linha++;
        if(op==8){
            menusantoamaro();
        }
        if(op==9){
            exit(0);
        }
    }while(op==1);

}
// FIM

// LISTA DE FEEDBACK 
void listafeedsanto(){
    system("cls");
    static int linha;
    int i;
    int contadorantigo;

    //Abre os Cadastros dos Clientes
    FILE* filecliente;
    filecliente = fopen("CadastroFeedSantoAmaro.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorFeedSantoAmaro.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorantigo);
    fclose(filecontadorcliente);

    //Exibe a lista de Clientes
    printf("\n----Lista de Relatórios----\n");
    for(i = 0; i < contadorantigo; i++){
        fscanf(filecliente, "%s %s %s %d %s %lld\n", &nome[linha], &sbnome[linha], &email[linha], &nota[linha], &comentario[linha], &cpf[linha]);
        printf("\nNome: %s \nSobrenome: %s \nEmail: %s \nNota: %d \nComentário: %s \nCPF: %lld \n", &nome[linha], &sbnome[linha], &email[linha], nota[linha], &comentario[linha], cpf[linha]);
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    printf("\nDigite 8 para voltar ao Menu ou 9 para Sair: ");
    scanf("%d", &op);
    if(op==8){
        menugeral();
    }
    if(op==9){
        exit(0);
    }
    if(op!=8,9)
    {
        menugeral();
    }
    exit(0);
}


// QUAL UNIDADE MAIS ATENDE
void tdunidades(){
    system("cls");
    static int linha;
    int i;
    int ii;
    int iii;
    int contadorantigo;
    int contadorantigoM;
    int contadorantigoC;
    


    FILE* filecliente;
    filecliente = fopen("ContadorClienteSantoAmaro.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorContadorSantoAmaro.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorantigo);
    fclose(filecontadorcliente);
    

    //Exibe a lista de Clientes
    printf("\n______________________QUANTIDADE DE PACIENTES EM TODAS UNIDADES______________________\n");
    printf("|                                                                                    |");
    for(i = 0; i < contadorantigo; i++){
        fscanf(filecliente, "%s\n", &ndd[linha]);
        printf("\n|Quantidade de Pacientes [Unidade Santo Amaro]: %s                                    |", &ndd[linha]);
        linha++;
    }
    fclose(filecliente);

//////////////////////////////////////////////////////////////////////////////

    FILE* fileclienteM;
    fileclienteM = fopen("ContadorClienteMoema.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorclienteM;
    filecontadorclienteM = fopen("ContadorContadorMoema.txt", "r");
    fscanf(filecontadorclienteM, "%d", &contadorantigoM);
    fclose(filecontadorclienteM);
    

    //Exibe a lista de Clientes
    
    for(ii = 0; ii < contadorantigoM; ii++){
        fscanf(fileclienteM, "%s\n", &nddm[linha]);
        printf("\n|Quantidade de Pacientes [Unidade Moema]: %s                                          |", &nddm[linha]);
        linha++;
    }
    fclose(fileclienteM);

//////////////////////////////////////////////////////////////////////////////
    FILE* fileclienteC;
    fileclienteC = fopen("ContadorClienteChacara.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorclienteC;
    filecontadorclienteC = fopen("ContadorContadorChacara.txt", "r");
    fscanf(filecontadorclienteC, "%d", &contadorantigoC);
    fclose(filecontadorclienteC);
    
    
    //Exibe a lista de Clientes
    
    for(iii = 0; iii < contadorantigoC; iii++){
        fscanf(fileclienteC, "%s\n", &nddc[linha]);
        printf("\n|Quantidade de Pacientes [Unidade Chácara]: %s                                        |", &nddc[linha]);
        linha++;
    }
    fclose(fileclienteC);
    printf("\n|____________________________________________________________________________________|\n");


    printf("\n\n_____________________________UNIDADE COM MAIS CLIENTES_______________________________\n");  
    printf("|                                                                                    |");
    if ("%s",ndd > "%s",nddc)
    {
        if ("%s",ndd > "%s",nddm)
        {
                printf("\n|Unidade Santo Amaro possui mais Pacientes: %s                                        |", &ndd);
        }else
        {
            if ("%s",nddc > "%s", nddm)
            {
                printf("\n|Unidade Chácara possui mais Pacientes: %s                                            |", &nddc);
            }else
            {
                printf("\n|Unidade Moema possui mais Pacientes: %s                                              |", &nddm);
            }    
        }
    }else
    {
        if ("%s",nddc > "%s", nddm)
        {
            printf("\nUnidade Chácara possui mais Pacientes: %s\n", &nddc);
        }else
        {
            printf("\nUnidade Moema possui mais Pacientes: %s\n", &nddm);
        }     
    }
    
    printf("\n|____________________________________________________________________________________|\n\n");

    //OpÃ§Ãµes
    printf("\n|Digite 8 para voltar ao Menu ou 9 para Sair: ");
    scanf("%d", &op);
    if(op==8){
        menugeral();
    }
    if(op==9){
        exit(0);
    }
    if(op!=8,9)
    {
        menugeral();
    }
    exit(0);


}
//fim


void agendamentosanto(){
    system("cls");
    static int linha;
    int contadorantigo;
    int resultado;
    do{
        printf("---- Dados da Consulta----\n");
        printf("\nDigite o nome do paciente: ");
        scanf("%s", &nome[linha]);
        printf("\nDigite o Sobrenome do paciente: ");
        scanf("%s", &sbnome[linha]);
        printf("\nDigite o e-mail do paciente: ");
        scanf("%s", &email[linha]);
        printf("\nDigite a especialidade do médico [EX: Clinico-Geral]: ");
        scanf("%s", &espmedic[linha]);
        printf("\nDigite o nome e sobrenome do médico [Separados por (-)]: ");
        scanf("%s", &nmsb[linha]);
        printf("\nDigite o CPF do paciente: ");
        scanf("%lld", &cpf[linha]);
        printf("\nDigite a data da consulta [EX: 00/00/0000]: ");
        scanf("%s", &dataagen[linha] );
		printf("\nDigite o horário da consulta: ");
		scanf("%s", &hrcon[linha]);
		printf("\nDigite o valor da consulta: R$");
		scanf("%lld",&valorc[linha]);

        //Salva o Cadastro no banco de dados
        FILE* filecliente;
        filecliente = fopen("ConsultaSantoAmaro.txt", "a");
        fprintf(filecliente, "%s %s %s %s %s %lld %s %s %lld\n", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], cpf[linha], &dataagen[linha], &hrcon[linha], valorc[linha]);
        fclose(filecliente);

        //Reseta o valor da variavÃ©l caso o looping seja efetuado
        contadorantigo = 0;
        resultado = 0;

        //LÃª o Contador no Banco de Dados
        FILE* filecontadorcliente;
        filecontadorcliente = fopen("ContadorConsultaSantoAmaro.txt", "r");
        fscanf(filecontadorcliente, "%d", &contadorantigo);
        fclose(filecontadorcliente);

        //Salva o contador no banco de dados
        resultado = contadorantigo + 1;
        filecontadorcliente = fopen("ContadorConsultaSantoAmaro.txt", "w");
        fprintf(filecontadorcliente, "%d", resultado);
        fclose(filecontadorcliente);

        //OpÃ§Ãµes
        printf("\nDigite 1 para continuar dando agendando, 8 para voltar ao menu ou 9 para sair: ");
        scanf("%d", &op);
        linha++;
        if(op==8){
            menusantoamaro();
        }
        if(op==9){
            exit(0);
        }
    }while(op==1);

}


void agenpesquisasanto(){
    system("cls");
    long long int cpfpesquisa;
    int contadorpesquisa;
    static int i;
    static int linha;

    //Abre Banco de Dados Cliente
    FILE* filecliente;
    filecliente = fopen("ConsultaSantoAmaro.txt", "r");

    //Abre e armazena contador
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorConsultaSantoAmaro.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorpesquisa);
    fclose(filecontadorcliente);

    //Recebe CPF para Pesquisa
    printf("\nDigite o CPF: ");
    scanf("%lld", &cpfpesquisa);

    //LÃª o banco de dados atÃ© encontrar o CPF pesquisado
    for(i = 0; i < contadorpesquisa; i++)
    {
        fscanf(filecliente, "%s %s %s %s %s %lld %s %s %lld", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], &cpf[linha], &dataagen[linha], &hrcon[linha], &valorc[linha]);

        //Se o CPF pesquisado constar no Banco de Dados o resgistro Ã© exibido
        if(cpfpesquisa == cpf[linha])
        {
            printf("\nNome: %s \nSobrenome: %s \nEmail: %s \nEspecialidade Médica: %s \nNome e Sobrenome do médico: %s \nCPF: %lld \nData da Consulta: %s \nHora da Consulta: %s \nValor da Consulta: R$ %lld", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], cpf[linha], &dataagen[linha], &hrcon[linha], valorc[linha]);
            printf("\nDigite 1 para continuar pesquisando, 8 para voltar ao menu ou 9 para sair: ");
            scanf("%d", &op);
            //OpÃ§Ãµes
            if(op==1)
            {
                agenpesquisasanto();
            }
            
            if(op==8)
            {
                menusantoamaro();
            }
            if(op==9)
            {
                exit(0);
            }
            if(op!=8,9)
            {
                menusantoamaro();
            }
        }
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    if(op==8)
    {
        menusantoamaro();
    }
    if(op==9)
    {
        exit(0);
    }
    if(op!=8,9)
    {
        menusantoamaro();
    }
    exit(0);
}

void exibirconsultasanto(){
    system("cls");
    static int linha;
    int i;
    int contadorantigo;

    //Abre os Cadastros dos Clientes
    FILE* filecliente;
    filecliente = fopen("ConsultaSantoAmaro.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorConsultaSantoAmaro.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorantigo);
    fclose(filecontadorcliente);

    //Exibe a lista de Clientes
    printf("\n----Lista de Consultas marcadas----\n");
    for(i = 0; i < contadorantigo; i++){
        fscanf(filecliente, "%s %s %s %s %s %lld %s %s %lld", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], &cpf[linha], &dataagen[linha], &hrcon[linha], &valorc[linha]);
        printf("\nNome: %s \nSobrenome: %s \nEmail: %s \nEspecialidade Médica: %s \nNome e Sobrenome do médico: %s \nCPF: %lld \nData da Consulta: %s \nHora da Consulta: %s \nValor da Consulta: R$ %lld\n", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], cpf[linha], &dataagen[linha], &hrcon[linha], valorc[linha]);
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    printf("\nDigite 8 para voltar ao Menu ou 9 para Sair: ");
    scanf("%d", &op);
    if(op==8){
        menusantoamaro();
    }
    if(op==9){
        exit(0);
    }
    if(op!=8,9)
    {
        menusantoamaro();
    }
    exit(0);
}

void cancelamentoconsultasanto(){
    system("cls");
    long long int deletarcpf;
    int contadorantigo;
    int contadornovo=0;
    int i;
    static int linha;

    //Recebe o CPF que deseja excluir
    printf("\nDigite o CPF do Paciente: ");
    scanf("%lld", &deletarcpf);

    //Abre o resgistro de clientes
    FILE* filecliente = fopen("ConsultaSantoAmaro.txt", "r");

    //abre e pega o contador de clientes
    FILE* filecontadorlciente = fopen("ContadorConsultaSantoAmaro.txt", "r");
    fscanf(filecontadorlciente, "%d", &contadorantigo);
    fclose(filecontadorlciente);

    //Faz um looping ate encontrar no banco de dados o CPF digitado
    for(i = 0; i < contadorantigo; i++)
    {
        fscanf(filecliente, "%s %s %s %s %s %lld %s %s %lld", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], &cpf[linha], &dataagen[linha], &hrcon[linha], &valorc[linha]);

        //Se o CPF Ã© encontrado mostra os dados do Cliente
        if(deletarcpf == cpf[linha])
        {
            fclose(filecliente);

            //Mostra os dados do Cliente
            printf("\nDados de %s\n", &nome[linha]);
            printf("\nNome: %s \nSobrenome: %s \nEmail: %s \nEspecialidade Médica: %s \nNome e Sobrenome do médico: %s \nCPF: %lld \nData da Consulta: %s \nHora da Consulta: %s \nValor da Consulta: R$ %lld\n", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], cpf[linha], &dataagen[linha], &hrcon[linha], valorc[linha]);

            //Pergunta se deseja realmente excluir aquele CPF
            printf("\nDeseja deletar o cadastro de %s? Digite 1 para SIM e 2 para NÃO: ", &nome[linha]);
            scanf("%d", &op);

            if(op==1)
            {
                //Cria um novo arquivo txt para colocar os dados dos clientes exceto os dados do CPF que foi excluido
                FILE* filenew = fopen("new.txt", "a");

                //Reabre o registro de clientes para nova utilizaÃ§Ã£o
                filecliente = fopen("ConsultaSantoAmaro.txt", "r");

                for(i = 0; i < contadorantigo; i++)
                {
                    //LÃª os dados do registro de clientes
                    fscanf(filecliente, "%s %s %s %s %s %lld %s %s %lld", &nome[i], &sbnome[i], &email[i], &espmedic[i], &nmsb[i], &cpf[i], &dataagen[i], &hrcon[i], &valorc[i]);

                    if(cpf[i] != deletarcpf)
                    {
                        //Guarda os dados dos clientes que restaram no novo banco de dados
                        fprintf(filenew, "%s %s %s %s %s %lld %s %s %lld\n", &nome[i], &sbnome[i], &email[i], &espmedic[i], &nmsb[i], cpf[i], &dataagen[i], &hrcon[i], valorc[i]);
                    }
                }
                fclose(filecliente);
                fclose(filenew);

                //Registra o novo valor do contador de clientes no banco de dados
                contadornovo = contadorantigo - 1;
                FILE* filecontadorlciente = fopen("ContadorConsultaSantoAmaro.txt", "w");
                fprintf(filecontadorlciente, "%d", contadornovo);
                fclose(filecontadorlciente);


                //ExcluÃ­ o antigo banco de dados
                remove("ConsultaSantoAmaro.txt");


                //Altera o nome do novo banco de dados para o nome antigo
                rename("new.txt", "ConsultaSantoAmaro.txt");


                //opÃ§Ãµes
                printf("\nDigite 8 para retornar ao menu ou 9 para sair: ");
                scanf("%d", &op);
                if(op==8)
                {
                    menusantoamaro();
                }
                if(op==9)
                {
                    exit(0);
                }
                if(op!=8,9)
                {
                    menusantoamaro();
                }
            } 
            if(op!=1)
            {
                menusantoamaro();
            }    
        }
        linha++;
    }
    fclose(filecliente);  
    menusantoamaro();  
}



//fta


void faturamentosanto(){
    system("cls");
    static int linha;
    int i;
    int contadorantigo;


    //Abre os Cadastros dos Clientes
    FILE* filecliente;
    filecliente = fopen("ConsultaSantoAmaro.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorConsultaSantoAmaro.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorantigo);
    fclose(filecontadorcliente);

    //Exibe a lista de Clientes
    printf("\n----Lista de Consultas marcadas----\n");
    for(i = 0; i < contadorantigo; i++){
        fscanf(filecliente, "%s %s %s %s %s %lld %s %s %lld", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], &cpf[linha], &dataagen[linha], &hrcon[linha], &valorc[linha]);
        printf("\nData da consulta: %s \nValor da Consulta: R$ %lld\n", &dataagen[linha], valorc[linha]);
        linha++;
        fflush(stdin);
    }
    fclose(filecliente);
	
	
    //OpÃ§Ãµes
    printf("\nDigite [1] para calcular o Faturamento ou [8] para voltar ao Menu ou [9] para Sair: ");
    scanf("%d", &op);
    if (op==1){
    	calculadora();
	}
    if(op==8){
        menugeral();
    }
    if(op==9){
        exit(0);
    }
    if(op!=8,9)
    {
        menugeral();
    }
    exit(0);
}


void faturamentogeral(){
    system("cls");
    static int linha;
    int i;
    int ii;
    int iii;
 	int contadorantigo;
 	int contadorantigoM;
 	int contadorantigoC;
    //Abre os Cadastros dos Clientes
    FILE* filecliente;
    filecliente = fopen("ConsultaSantoAmaro.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorConsultaSantoAmaro.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorantigo);
    fclose(filecontadorcliente);

    //Exibe a lista de Clientes
    
    for(i = 0; i < contadorantigo; i++){
        fscanf(filecliente, "%s %s %s %s %s %lld %s %s %lld", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], &cpf[linha], &dataagen[linha], &hrcon[linha], &valorc[linha]);
        printf("\nData da consulta: %s \nValor da Consulta: R$ %lld\n", &dataagen[linha], valorc[linha]);
        linha++;
        fflush(stdin);
    }
    fclose(filecliente);
	
	//////////////////////////////////
	
	    //Abre os Cadastros dos Clientes
    FILE* fileclienteM;
    fileclienteM = fopen("ConsultaMoema.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorclienteM;
    filecontadorclienteM = fopen("ContadorConsultaMoema.txt", "r");
    fscanf(filecontadorclienteM, "%d", &contadorantigoM);
    fclose(filecontadorclienteM);

    //Exibe a lista de Clientes
    
    for(ii = 0; ii < contadorantigoM; ii++){
        fscanf(filecliente, "%s %s %s %s %s %lld %s %s %lld", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], &cpf[linha], &dataagen[linha], &hrcon[linha], &valorc[linha]);
        printf("\nData da consulta: %s \nValor da Consulta: R$ %lld\n", &dataagen[linha], valorc[linha]);
        linha++;
        fflush(stdin);
    }
    fclose(fileclienteM);
    
    /////////////////////////////////////
    
        //Abre os Cadastros dos Clientes
    FILE* fileclienteC;
    fileclienteC = fopen("ConsultaChacara.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorclienteC;
    filecontadorclienteC = fopen("ContadorConsultaChacara.txt", "r");
    fscanf(filecontadorclienteC, "%d", &contadorantigoC);
    fclose(filecontadorclienteC);

    //Exibe a lista de Clientes
    
    for(iii = 0; iii < contadorantigoC; iii++){
        fscanf(filecliente, "%s %s %s %s %s %lld %s %s %lld", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], &cpf[linha], &dataagen[linha], &hrcon[linha], &valorc[linha]);
        printf("\nData da consulta: %s \nValor da Consulta: R$ %lld\n", &dataagen[linha], valorc[linha]);
        linha++;
        fflush(stdin);
    }
    fclose(fileclienteC);
    
    //OpÃ§Ãµes
    printf("\nDigite [1] para calcular o Faturamento ou [8] para voltar ao Menu ou [9] para Sair: ");
    scanf("%d", &op);
    if (op==1){
    	calculadora();
	}
    if(op==8){
        menugeral();
    }
    if(op==9){
        exit(0);
    }
    if(op!=8,9)
    {
        menugeral();
    }
    exit(0);
}
//################################## Interface para a unidade de Moema ##############################################

void calculadora(){
	/////////// Calculadora

float n1,n2, resultado;
char operador;


printf("\n\nDigite o primeiro valor:");
scanf ("%f",&n1);
printf("\nDigite o segundo valor:");
scanf ("%f",&n2);
printf("\nDigite o operador:");
scanf ("%s",&operador);
printf("\nAperte enter ");

getch();
if (operador=='+') {
resultado=n1+n2;    
printf ("\n\nO resultado e: R$%f",resultado);
    printf("\n\nDigite 1 para continuar calculando ou 8 para voltar ao menu : ");
    scanf("%d", &op);
    if (op==1){
    	calculadora();
	}


}   
  
else
if (operador=='-') {
resultado=n1-n2;
printf ("\n O resultado e: %f",resultado);
    printf("\n\nDigite 1 para continuar calculando ou 8 para voltar ao menu : ");
    scanf("%d", &op);
    if (op==1){
    	calculadora();
	}

}

else
if (operador=='/') {
resultado=n1/n2;
printf ("\n O resultado e: %f",resultado);
    printf("\n\nDigite 1 para continuar calculando ou 8 para voltar ao menu : ");
    scanf("%d", &op);
    if (op==1){
    	calculadora();
	}

}

else  
if (operador=='*') {
resultado=n1*n2;
printf ("\n O resultado e: %f",resultado);
    printf("\n\nDigite 1 para continuar calculando ou 8 para voltar ao menu : ");
    scanf("%d", &op);
    if (op==1){
    	calculadora();
	}


}
getch();
	
	
}

//FunÃ§Ã£o Menu
void menumoema(){
	system("cls");
    printf("\n     ====UNIDADE MOEMA====");
    printf("\n=======================================\n");
    printf("*                                     *\n");
    printf("*       DIGITE A OPÇÃO DESEJADA       *\n");
    printf("*                                     *\n");
    printf("=======================================\n");
    printf("\nCadastrar Pacientes(1) \nPesquisar Pacientes(2) \nLista de Pacientes(3) \nDeletar Cadastro de Pacientes(4) \n\nCadastrar Médicos(5) \nPesquisar Médicos(6) \nLista de Médicos(7) \nDeletar Cadastro de Médicos(10) \n\nCadastro de Funcionários(11) \nPesquisar Funcionários(12) \nLista de Funcionários(13) \nDeletar Funcionários(14) \n\nAgendamento de Consulta(15) \nPesquisar Consulta(16) \nLista de Consultas(17) \nDesmarcar Consulta(18) \n\n\nFEEDBACK(0) \n\nMenu Geral(8) ");
    printf(" \nSair(9)\n\nInsira a opção desejada: ");
	scanf("%d", &op);		
    if(op==1)
    { 
        cadastroclientemoema();
    }
    if(op==2)
    {
        pesquisaclientemoema();
    }
    if(op==3)
    {
        listaclientemoema();
    }
    if(op==4)
    {
        deletarcadastroclientemoema();
    }
    if (op==5)
    {
        cadastromedicmoema();
    }
    if (op==6)
    {
        pesquisamedicmoema();
    }
    if (op==7)
    {
        listamedicmoema();
    }
    if (op==10)
    {
        deletarcadastromedicmoema();
    }
    if (op==0)
    {
        feedbackmoema();
    }
    if (op==11)
    {
        cadastrofuncionariomoema();
    }
    if (op==12)
    {
       pesquisafuncionariomoema();
    }
    if (op==13)
    {
    	listafuncionariomoema();
    }
    if (op==14)
    {
        deletarfuncionariomoema();
    }
    if (op==15)
    {
        agendamentomoema();
    }
    if (op==16)
    {
        agenpesquisamoema();
    }
    if (op==17)
    {
        exibirconsultamoema();
    }
    if (op==18)
    {
        cancelamentoconsultamoema();
    }
    if(op==9)
    {
        exit(0);
    }
    if (op==8)
    {
        menugeral();
        system("cls");
    }
    exit(0);
}
//Fim da FunÃ§Ã£o Menu

//FunÃ§Ã£o Cadastro Cliente
void cadastroclientemoema(){
    system("cls");
    static int linha;
    int contadorantigo;
    int resultado;


    //Recolhe os Dados dos Clientes
    do{
        printf("---- Cadastrando Paciente----\n");
        printf("\nDigite somente o primeiro nome: ");
        scanf("%s", &nome[linha]);
        printf("\nDigite somente o último sobrenome: ");
        scanf("%s", &sbnome[linha]);
        printf("\nDigite o e-mail do paciente: ");
        scanf("%s", &email[linha]);
        printf("\nDigite a idade do paciente: ");
        scanf("%d", &idade[linha]);
        printf("\nDigite o CPF do paciente: ");
        scanf("%lld", &cpf[linha]);
        printf("\nDigite o gênero do paciente [F ou M]: ");
        scanf("%s", &sexo[linha]); 
        printf("\nDigite o nome do Convênio do Paciente [SE NÃO TIVER DIGITE N]: "); 
        scanf("%s", &nomeconvenio[linha]);
        printf("\nNumero do Convênio do Paciente [SE NAO TIVER DIGITE 0]: "); 
        scanf("%lld", &numconvenio[linha]); 
        printf("\nDigite a Data de Validade do Convênio do Paciente [EX: 00/00/0000]: ");
        scanf("%s", &valfinal[linha]);
        printf("\nDigite o Telefone/Celular do paciente: ");
        scanf("%lld", &tel[linha]);
        printf("\nDigite a Rua do Paciente: ");
        scanf("%s", &rua[linha]);
        printf("\nDigite o CEP do paciente: ");
        scanf("%d", &cep[linha]);
        printf("\nDigite o número da residência do paciente: ");
        scanf("%d", &nm[linha]); 
        printf("\nDigite o Estado do Paciente[EX: SP]: ");
        scanf("%s", &estado[linha]);
        printf("\nDigite a Cidade do Paciente: ");
        scanf("%s", &city[linha]);

        //Salva o Cadastro no banco de dados
        FILE* filecliente;
        filecliente = fopen("CadastroClienteMoema.txt", "a");
        fprintf(filecliente, "%s %s %s %d %lld %s %s %lld %s %lld %s %d %d %s %s\n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &nomeconvenio[linha], numconvenio[linha], &valfinal[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
        fclose(filecliente);

        //Reseta o valor da variavÃ©l caso o looping seja efetuado
        contadorantigo = 0;
        resultado = 0;

        //LÃª o Contador no Banco de Dados
        FILE* filecontadorcliente;
        filecontadorcliente = fopen("ContadorClienteMoema.txt", "r");
        fscanf(filecontadorcliente, "%d", &contadorantigo);
        fclose(filecontadorcliente);


        //Salva o contador no banco de dados
        resultado = contadorantigo + 1;
        filecontadorcliente = fopen("ContadorClienteMoema.txt", "w");
        fprintf(filecontadorcliente, "%d", resultado);
        fclose(filecontadorcliente);

        //OpÃ§Ãµes
        printf("\nDigite 1 para continuar cadastrando, 8 para voltar ao menu ou 9 para sair: ");
        scanf("%d", &op);
        linha++;
        if(op==8){
            menumoema();
        }
        if(op==9){
            exit(0);
        }
    }while(op==1);
}
//Fim FunÃ§Ã£o Cadastro Cliente


//FunÃ§Ã£o Deletar Cadastro Cliente
void deletarcadastroclientemoema(){
    system("cls");
    long long int deletarcpf;
    int contadorantigo;
    int contadornovo=0;
    int i;
    static int linha;

    //Recebe o CPF que deseja excluir
    printf("\nDigite o CPF do cliente: ");
    scanf("%lld", &deletarcpf);

    //Abre o resgistro de clientes
    FILE* filecliente = fopen("CadastroClienteMoema.txt", "r");

    //abre e pega o contador de clientes
    FILE* filecontadorlciente = fopen("ContadorClienteMoema.txt", "r");
    fscanf(filecontadorlciente, "%d", &contadorantigo);
    fclose(filecontadorlciente);

    //Faz um looping ate encontrar no banco de dados o CPF digitado
    for(i = 0; i < contadorantigo; i++)
    {
        fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %lld %s %d %d %s %s", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &nomeconvenio[linha], &numconvenio[linha], &valfinal[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);

        //Se o CPF Ã© encontrado mostra os dados do Cliente
        if(deletarcpf == cpf[linha])
        {
            fclose(filecliente);

            //Mostra os dados do Cliente
            printf("\nDados de %s\n", &nome[linha]);
            printf("\nNome: %s \nSobrenome: %s \nE-mail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nNome do Convênio: %s \nNúmero do Convênio: %lld \nData de validade do Convênio: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &nomeconvenio[linha], numconvenio[linha], &valfinal[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);

            //Pergunta se deseja realmente excluir aquele CPF
            printf("\nDeseja deletar o cadastro de %s? Digite 1 para SIM e 2 para NÃƒO: ", &nome[linha]);
            scanf("%d", &op);

            if(op==1)
            {
                //Cria um novo arquivo txt para colocar os dados dos clientes exceto os dados do CPF que foi excluido
                FILE* filenew = fopen("new.txt", "a");

                //Reabre o registro de clientes para nova utilizaÃ§Ã£o
                filecliente = fopen("CadastroClienteMoema.txt", "r");

                for(i = 0; i < contadorantigo; i++)
                {
                    //LÃª os dados do registro de clientes
                    fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %lld %s %d %d %s %s", &nome[i], &sbnome[i], &email[i], &idade[i], &cpf[i], &sexo[i], &nomeconvenio[i], &numconvenio[i], &valfinal[i], &tel[i], &rua[i], &cep[i], &nm[i], &estado[i], &city[i]);

                    if(cpf[i] != deletarcpf)
                    {
                        //Guarda os dados dos clientes que restaram no novo banco de dados
                        fprintf(filenew, "%s %s %s %d %lld %s %s %lld %s %lld %s %d %d %s %s\n", &nome[i], &sbnome[i], &email[i], idade[i], cpf[i], &sexo[i], &nomeconvenio[i], numconvenio[i], &valfinal[i], tel[i], &rua[i], cep[i], nm[i], &estado[i], &city[i]);
                    }
                }
                fclose(filecliente);
                fclose(filenew);

                //Registra o novo valor do contador de clientes no banco de dados
                contadornovo = contadorantigo - 1;
                FILE* filecontadorlciente = fopen("ContadorClienteMoema.txt", "w");
                fprintf(filecontadorlciente, "%d", contadornovo);
                fclose(filecontadorlciente);


                //ExcluÃ­ o antigo banco de dados
                remove("CadastroClienteMoema.txt");


                //Altera o nome do novo banco de dados para o nome antigo
                rename("new.txt", "CadastroClienteMoema.txt");


                //opÃ§Ãµes
                printf("\nDigite 8 para retornar ao menu ou 9 para sair: ");
                scanf("%d", &op);
                if(op==8)
                {
                    menumoema();
                }
                if(op==9)
                {
                    exit(0);
                }
                if(op!=8,9)
                {
                    menumoema();
                }
            } 
            if(op!=1)
            {
                menumoema();
            }    
        }
        linha++;
    }
    fclose(filecliente);  
    menumoema();  
}
//Fim FunÃ§Ã£o Deletar Cadastro Cliente


//FunÃ§Ã£o Pesquisa
void pesquisaclientemoema(){
    system("cls");
    long long int cpfpesquisa;
    int contadorpesquisa;
    static int i;
    static int linha;

    //Abre Banco de Dados Cliente
    FILE* filecliente;
    filecliente = fopen("CadastroClienteMoema.txt", "r");

    //Abre e armazena contador
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorClienteMoema.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorpesquisa);
    fclose(filecontadorcliente);

    //Recebe CPF para Pesquisa
    printf("\nDigite o CPF: ");
    scanf("%lld", &cpfpesquisa);

    //LÃª o banco de dados atÃ© encontrar o CPF pesquisado
    for(i = 0; i < contadorpesquisa; i++)
    {
        fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %lld %s %d %d %s %s", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &nomeconvenio[linha], &numconvenio[linha], &valfinal[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);

        //Se o CPF pesquisado constar no Banco de Dados o resgistro Ã© exibido
        if(cpfpesquisa == cpf[linha])
        {
            printf("\nNome: %s \nSobrenome: %s \nEmail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nNome do Convênio: %s \nNúmero do Convênio: %lld \nData de validade do Convênio: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &nomeconvenio[linha], numconvenio[linha], &valfinal[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
            printf("\nDigite 1 para continuar pesquisando, 8 para voltar ao menu ou 9 para sair: ");
            scanf("%d", &op);
            //OpÃ§Ãµes
            if(op==1)
            {
                pesquisaclientemoema();
            } 
            if(op==8)
            {
                menumoema();
            }
            if(op==9)
            {
                exit(0);
            }
            if(op!=8,9)
            {
                menumoema();
            }
        }
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    if(op==8)
    {
        menumoema();
    }
    if(op==9)
    {
        exit(0);
    }
    if(op!=8,9)
    {
        menumoema();
    }
    exit(0);
}
//Fim FunÃ§Ã£o Pesquisa


//Lista de Cliente
void listaclientemoema(){
    system("cls");
    static int linha;
    int i;
    int contadorantigo;

    //Abre os Cadastros dos Clientes
    FILE* filecliente;
    filecliente = fopen("CadastroClienteMoema.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorClienteMoema.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorantigo);
    fclose(filecontadorcliente);

    //Exibe a lista de Clientes
    printf("\n----Lista de Clientes Cadastrados----\n");
    for(i = 0; i < contadorantigo; i++){
        fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %lld %s %d %d %s %s\n", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &nomeconvenio[linha], &numconvenio[linha], &valfinal[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);
        printf("\nNome: %s \nSobrenome: %s \nE-mail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nNome do Convênio: %s \nNúmero do Convênio: %lld \nData de validade do Convênio: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &nomeconvenio[linha], numconvenio[linha], &valfinal[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    printf("\nDigite 8 para voltar ao Menu ou 9 para Sair: ");
    scanf("%d", &op);
    if(op==8){
        menumoema();
    }
    if(op==9){
        exit(0);
    }
    if(op!=8,9)
    {
        menumoema();
    }
    exit(0);
}
//Fim da Lista de Clientes

//FunÃ§Ã£o Cadastro DE MEDICOS
void cadastromedicmoema(){
    system("cls");
    static int linha;
    int contadorantigo;
    int resultado;


    //Recolhe os Dados dos MEDICOS
    do{
        printf("---- Cadastrando Médico---\n");
        printf("\nDigite somente o primeiro nome: ");
        scanf("%s", &nome[linha]);
        printf("\nDigite somente o último sobrenome: ");
        scanf("%s", &sbnome[linha]);
        printf("\nDigite o e-mail do médico: ");
        scanf("%s", &email[linha]);
        printf("\nDigite a idade do médico: ");
        scanf("%d", &idade[linha]);
        printf("\nDigite o CPF do médico: ");
        scanf("%lld", &cpf[linha]);
        printf("\nDigite o gênero do médico[F ou M]: ");
        scanf("%s", &sexo[linha]); 
        printf("\nNumero do CRM do médico: "); 
        scanf("%lld", &crm[linha]); 
        printf("\nDigite o CNES: ");
        scanf("%lld", &cnes[linha]);
        printf("\nDigite a especialidade do médico: ");
        scanf("%s", &espmedic[linha]);
        printf("\nDigite o Telefone/Celular do médico: ");
        scanf("%lld", &tel[linha]);
        printf("\nDigite a Rua do médico: ");
        scanf("%s", &rua[linha]);
        printf("\nDigite o CEP do médico: ");
        scanf("%d", &cep[linha]);
        printf("\nDigite o número da residência do médico: ");
        scanf("%d", &nm[linha]); 
        printf("\nDigite o Estado do médico[EX: SP]: ");
        scanf("%s", &estado[linha]);
        printf("\nDigite a Cidade do médico [EX: Sao-Paulo]: ");
        scanf("%s", &city[linha]);

        //Salva o Cadastro no banco de dados
        FILE* filecliente;
        filecliente = fopen("CadastroMedicMoema.txt", "a");
        fprintf(filecliente, "%s %s %s %d %lld %s %lld %lld %s %lld %s %d %d %s %s\n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], crm[linha], cnes[linha], &espmedic[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
        fclose(filecliente);

        //Reseta o valor da variavÃ©l caso o looping seja efetuado
        contadorantigo = 0;
        resultado = 0;

        //LÃª o Contador no Banco de Dados
        FILE* filecontadorcliente;
        filecontadorcliente = fopen("ContadorMedicMoema.txt", "r");
        fscanf(filecontadorcliente, "%d", &contadorantigo);
        fclose(filecontadorcliente);

        //Salva o contador no banco de dados
        resultado = contadorantigo + 1;
        filecontadorcliente = fopen("ContadorMedicMoema.txt", "w");
        fprintf(filecontadorcliente, "%d", resultado);
        fclose(filecontadorcliente);

        //OpÃ§Ãµes
        printf("\nDigite 1 para continuar cadastrando, 8 para voltar ao menu ou 9 para sair: ");
        scanf("%d", &op);
        linha++;
        if(op==8){
            menumoema();
        }
        if(op==9){
            exit(0);
        }
    }while(op==1);
}
// FIM DO CADASTRO MEDIC

//Deletar medicos
void deletarcadastromedicmoema(){
    long long int deletarcpf;
    int contadorantigo;
    int contadornovo=0;
    int i;
    static int linha;
    system("cls");
    //Recebe o CPF que deseja excluir
    printf("\nDigite o CPF do medico: ");
    scanf("%lld", &deletarcpf);

    //Abre o resgistro de clientes
    FILE* filecliente = fopen("CadastroMedicMoema.txt", "r");

    //abre e pega o contador de clientes
    FILE* filecontadorlciente = fopen("ContadorMedicMoema.txt", "r");
    fscanf(filecontadorlciente, "%d", &contadorantigo);
    fclose(filecontadorlciente);

    //Faz um looping ate encontrar no banco de dados o CPF digitado
    for(i = 0; i < contadorantigo; i++)
    {
        fscanf(filecliente, "%s %s %s %d %lld %s %lld %lld %s %lld %s %d %d %s %s", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &crm[linha], &cnes[linha], &espmedic[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);

        //Se o CPF Ã© encontrado mostra os dados do Cliente
        if(deletarcpf == cpf[linha])
        {
            fclose(filecliente);

            //Mostra os dados do Cliente
            printf("\nDados de %s\n", &nome[linha]);
            printf("\nNome: %s \nSobrenome: %s \nEmail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nCRM: %lld \nCNES: %lld \nEspecialidade médica: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], crm[linha], cnes[linha], &espmedic[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);

            //Pergunta se deseja realmente excluir aquele CPF
            printf("\nDeseja deletar o cadastro de %s? Digite 1 para SIM e 2 para Não: ", &nome[linha]);
            scanf("%d", &op);

            if(op==1)
            {
                //Cria um novo arquivo txt para colocar os dados dos clientes exceto os dados do CPF que foi excluido
                FILE* filenew = fopen("new.txt", "a");

                //Reabre o registro de clientes para nova utilizaÃ§Ã£o
                filecliente = fopen("CadastroMedicMoema.txt", "r");

                for(i = 0; i < contadorantigo; i++)
                {
                    //LÃª os dados do registro de clientes
                    fscanf(filecliente, "%s %s %s %d %lld %s %lld %lld %s %lld %s %d %d %s %s", &nome[i], &sbnome[i], &email[i], &idade[i], &cpf[i], &sexo[i], &crm[i], &cnes[i], &espmedic[i], &tel[i], &rua[i], &cep[i], &nm[i], &estado[i], &city[i]);

                    if(cpf[i] != deletarcpf)
                    {
                        //Guarda os dados dos clientes que restaram no novo banco de dados
                        fprintf(filenew, "%s %s %s %d %lld %s %lld %lld %s %lld %s %d %d %s %s\n", &nome[i], &sbnome[i], &email[i], idade[i], cpf[i], &sexo[i], crm[i], cnes[i], &espmedic[i], tel[i], &rua[i], cep[i], nm[i], &estado[i], &city[i]);
                    }
                }
                fclose(filecliente);
                fclose(filenew);

                //Registra o novo valor do contador de clientes no banco de dados
                contadornovo = contadorantigo - 1;
                FILE* filecontadorlciente = fopen("ContadorMedicMoema.txt", "w");
                fprintf(filecontadorlciente, "%d", contadornovo);
                fclose(filecontadorlciente);

                //ExcluÃ­ o antigo banco de dados
                remove("CadastroMedicMoema.txt");


                //Altera o nome do novo banco de dados para o nome antigo
                rename("new.txt", "CadastroMedicMoema.txt");


                //opÃ§Ãµes
                printf("\nDigite 8 para retornar ao menu ou 9 para sair: ");
                scanf("%d", &op);
                if(op==8)
                {
                    menumoema();
                }
                if(op==9)
                {
                    exit(0);
                }
                if(op!=8,9)
                {
                    menumoema();
                }
            } 
            if(op!=1)
            {
                menumoema();
            }    
        }
        linha++;
    }
    fclose(filecliente);  
    menumoema();  
}
//Fim FunÃ§Ã£o Deletar Cadastro medicos

//FunÃ§Ã£o Pesquisa Medic
void pesquisamedicmoema(){
    system("cls");
    long long int cpfpesquisa;
    int contadorpesquisa;
    static int i;
    static int linha;

    //Abre Banco de Dados Cliente
    FILE* filecliente;
    filecliente = fopen("CadastroMedicMoema.txt", "r");

    //Abre e armazena contador
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorMedicMoema.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorpesquisa);
    fclose(filecontadorcliente);

    //Recebe CPF para Pesquisa
    printf("\nDigite o CPF: ");
    scanf("%lld", &cpfpesquisa);

    //LÃª o banco de dados atÃ© encontrar o CPF pesquisado
    for(i = 0; i < contadorpesquisa; i++)
    {
        fscanf(filecliente, "%s %s %s %d %lld %s %lld %lld %s %lld %s %d %d %s %s", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &crm[linha], &cnes[linha], &espmedic[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);

        //Se o CPF pesquisado constar no Banco de Dados o resgistro Ã© exibido
        if(cpfpesquisa == cpf[linha])
        {
            printf("\nNome: %s \nSobrenome: %s \nEmail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nCRM: %lld \nCNES: %lld \nEspecialidade médica: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], crm[linha], cnes[linha], &espmedic[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
            printf("\nDigite 1 para continuar pesquisando, 8 para voltar ao menu ou 9 para sair: ");
            scanf("%d", &op);
            //OpÃ§Ãµes
            if(op==1)
            {
                pesquisamedicmoema();
            }
            
            if(op==8)
            {
                menumoema();
            }
            if(op==9)
            {
                exit(0);
            }
            if(op!=8,9)
            {
                menumoema();
            }
        }
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    if(op==8)
    {
        menumoema();
    }
    if(op==9)
    {
        exit(0);
    }
    if(op!=8,9)
    {
        menumoema();
    }
    exit(0);
}
//Fim FunÃ§Ã£o Pesquisa Medic


//Lista de Medic
void listamedicmoema(){
    system("cls");
    static int linha;
    int i;
    int contadorantigo;

    //Abre os Cadastros dos Clientes
    FILE* filecliente;
    filecliente = fopen("CadastroMedicMoema.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorMedicMoema.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorantigo);
    fclose(filecontadorcliente);

    //Exibe a lista de Clientes
    printf("\n----Lista de Médicos Cadastrados----\n");
    for(i = 0; i < contadorantigo; i++){
        fscanf(filecliente, "%s %s %s %d %lld %s %lld %lld %s %lld %s %d %d %s %s", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &crm[linha], &cnes[linha], &espmedic[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);
        printf("\nNome: %s \nSobrenome: %s \nE-mail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nCRM: %lld \nCNES: %lld \nEspecialidade médica: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], crm[linha], cnes[linha], &espmedic[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    printf("\nDigite 8 para voltar ao Menu ou 9 para Sair: ");
    scanf("%d", &op);
    if(op==8){
        menumoema();
    }
    if(op==9){
        exit(0);
    }
    if(op!=8,9)
    {
        menumoema();
    }
    exit(0);
}
//Fim da Lista de Medic

// Func Func
void cadastrofuncionariomoema(){
    system("cls");
    static int linha;
    int contadorantigo;
    int resultado;
do{
        printf("---- Cadastrando Funcionário----\n");
        printf("\nDigite somente o primeiro nome: ");
        scanf("%s", &nome[linha]);
        printf("\nDigite somente o último sobrenome: ");
        scanf("%s", &sbnome[linha]);
        printf("\nDigite o e-mail do Funcionário: ");
        scanf("%s", &email[linha]);
        printf("\nDigite a idade do Funcionário: ");
        scanf("%d", &idade[linha]);
        printf("\nDigite o CPF do Funcionário: ");
        scanf("%lld", &cpf[linha]);
        printf("\nDigite o gênero do Funcionário[F ou M]: ");
        scanf("%s", &sexo[linha]); 
        printf("\nÁrea de Atuação do Funcionário: "); 
        scanf("%s", &areadeatu[linha]);
        printf("\nDigite o Telefone/Celular do Funcionário: ");
        scanf("%lld", &tel[linha]);
        printf("\nDigite a Rua do Funcionário: ");
        scanf("%s", &rua[linha]);
        printf("\nDigite o CEP do Funcionário: ");
        scanf("%d", &cep[linha]);
        printf("\nDigite o número da residência do Funcionário: ");
        scanf("%d", &nm[linha]); 
        printf("\nDigite o Estado do Funcionário[EX: SP]: ");
        scanf("%s", &estado[linha]);
        printf("\nDigite a Cidade do Funcionário: ");
        scanf("%s", &city[linha]);

        //Salva o Cadastro no banco de dados
        FILE* filecliente;
        filecliente = fopen("CadastroFuncionarioMoema.txt", "a");
        fprintf(filecliente, "%s %s %s %d %lld %s %s %lld %s %d %d %s %s\n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &areadeatu[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
        fclose(filecliente);

        contadorantigo = 0;
        resultado = 0;

        //LÃª o Contador no Banco de Dados
        FILE* filecontadorcliente;
        filecontadorcliente = fopen("ContadorFuncionarioMoema.txt", "r");
        fscanf(filecontadorcliente, "%d", &contadorantigo);
        fclose(filecontadorcliente);

        //Salva o contador no banco de dados
        resultado = contadorantigo + 1;
        filecontadorcliente = fopen("ContadorFuncionarioMoema.txt", "w");
        fprintf(filecontadorcliente, "%d", resultado);
        fclose(filecontadorcliente);

        //OpÃ§Ãµes
        printf("\nDigite 1 para continuar cadastrando, 8 para voltar ao menu ou 9 para sair: ");
        scanf("%d", &op);
        linha++;
        if(op==8){
            menumoema();
        }
        if(op==9){
            exit(0);
        }
    }while(op==1);
}
//fim

//FunÃ§Ã£o Pesquisa
void pesquisafuncionariomoema(){
    system("cls");
    long long int cpfpesquisa;
    int contadorpesquisa;
    static int i;
    static int linha;

    //Abre Banco de Dados Cliente
    FILE* filecliente;
    filecliente = fopen("CadastroFuncionarioMoema.txt", "r");

    //Abre e armazena contador
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorFuncionarioMoema.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorpesquisa);
    fclose(filecontadorcliente);

    //Recebe CPF para Pesquisa
    printf("\nDigite o CPF: ");
    scanf("%lld", &cpfpesquisa);

    //LÃª o banco de dados atÃ© encontrar o CPF pesquisado
    for(i = 0; i < contadorpesquisa; i++)
    {
        fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %d %d %s %s\n", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &areadeatu[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);

        //Se o CPF pesquisado constar no Banco de Dados o resgistro Ã© exibido
        if(cpfpesquisa == cpf[linha])
        {
            printf("\nNome: %s \nSobrenome: %s \nEmail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nÁrea de atuação: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &areadeatu[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
            printf("\nDigite 1 para continuar pesquisando, 8 para voltar ao menu ou 9 para sair: ");
            scanf("%d", &op);
            //OpÃ§Ãµes
            if(op==1)
            {
                pesquisafuncionariomoema();
            }
            
            if(op==8)
            {
                menumoema();
            }
            if(op==9)
            {
                exit(0);
            }
            if(op!=8,9)
            {
                menumoema();
            }
        }
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    if(op==8)
    {
        menumoema();
    }
    if(op==9)
    {
        exit(0);
    }
    if(op!=8,9)
    {
        menumoema();
    }
    exit(0);
}
//Fim FunÃ§Ã£o Pesquisa

//Lista de Func
void listafuncionariomoema(){
    system("cls");
    static int linha;
    int i;
    int contadorantigo;

    //Abre os Cadastros dos Clientes
    FILE* filecliente;
    filecliente = fopen("CadastroFuncionarioChacara.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorFuncionarioChacara.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorantigo);
    fclose(filecontadorcliente);

    //Exibe a lista de Clientes
    printf("\n----Lista de Funcionarios Cadastrados----\n");
    for(i = 0; i < contadorantigo; i++){
        fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %d %d %s %s\n", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &areadeatu[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);
        printf("\nNome: %s \nSobrenome: %s \nE-mail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nÁrea de atuação: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &areadeatu[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    printf("\nDigite 8 para voltar ao Menu ou 9 para Sair: ");
    scanf("%d", &op);
    if(op==8){
        menumoema();
    }
    if(op==9){
        exit(0);
    }
    if(op!=8,9)
    {
        menumoema();
    }
    exit(0);
}
//Fim da Lista de Clientes

//FunÃ§Ã£o Deletar Cadastro Cliente
void deletarfuncionariomoema(){
    system("cls");
    long long int deletarcpf;
    int contadorantigo;
    int contadornovo=0;
    int i;
    static int linha;

    //Recebe o CPF que deseja excluir
    printf("\nDigite o CPF do Funcionário: ");
    scanf("%lld", &deletarcpf);

    //Abre o resgistro de clientes
    FILE* filecliente = fopen("CadastroFuncionarioMoema.txt", "r");

    //abre e pega o contador de clientes
    FILE* filecontadorlciente = fopen("ContadorFuncionarioMoema.txt", "r");
    fscanf(filecontadorlciente, "%d", &contadorantigo);
    fclose(filecontadorlciente);

    //Faz um looping ate encontrar no banco de dados o CPF digitado
    for(i = 0; i < contadorantigo; i++)
    {
        fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %d %d %s %s\n", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &areadeatu[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);

        //Se o CPF Ã© encontrado mostra os dados do Cliente
        if(deletarcpf == cpf[linha])
        {
            fclose(filecliente);

            //Mostra os dados do Cliente
            printf("\nDados de %s\n", &nome[linha]);
            printf("\nNome: %s \nSobrenome: %s \nE-mail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nÁrea de atuação: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &areadeatu[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);

            //Pergunta se deseja realmente excluir aquele CPF
            printf("\nDeseja deletar o cadastro de %s? Digite 1 para SIM e 2 para NÃO: ", &nome[linha]);
            scanf("%d", &op);

            if(op==1)
            {
                //Cria um novo arquivo txt para colocar os dados dos clientes exceto os dados do CPF que foi excluido
                FILE* filenew = fopen("new.txt", "a");

                //Reabre o registro de clientes para nova utilizaÃ§Ã£o
                filecliente = fopen("CadastroFuncionarioMoema.txt", "r");

                for(i = 0; i < contadorantigo; i++)
                {
                    //LÃª os dados do registro de clientes
                    fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %d %d %s %s", &nome[i], &sbnome[i], &email[i], &idade[i], &cpf[i], &sexo[i], &areadeatu[i], &tel[i], &rua[i], &cep[i], &nm[i], &estado[i], &city[i]);

                    if(cpf[i] != deletarcpf)
                    {
                        //Guarda os dados dos clientes que restaram no novo banco de dados
                        fprintf(filenew, "%s %s %s %d %lld %s %s %lld %s %d %d %s %s\n", &nome[i], &sbnome[i], &email[i], idade[i], cpf[i], &sexo[i], &areadeatu[i], tel[i], &rua[i], cep[i], nm[i], &estado[i], &city[i]);
                    }
                }
                fclose(filecliente);
                fclose(filenew);

                //Registra o novo valor do contador de clientes no banco de dados
                contadornovo = contadorantigo - 1;
                FILE* filecontadorlciente = fopen("ContadorFuncionarioMoema.txt", "w");
                fprintf(filecontadorlciente, "%d", contadornovo);
                fclose(filecontadorlciente);


                //ExcluÃ­ o antigo banco de dados
                remove("CadastroFuncionarioMoema.txt");


                //Altera o nome do novo banco de dados para o nome antigo
                rename("new.txt", "CadastroFuncionarioMoema.txt");


                //opÃ§Ãµes
                printf("\nDigite 8 para retornar ao menu ou 9 para sair: ");
                scanf("%d", &op);
                if(op==8)
                {
                    menumoema();
                }
                if(op==9)
                {
                    exit(0);
                }
                if(op!=8,9)
                {
                    menumoema();
                }
            } 
            if(op!=1)
            {
                menumoema();
            }    
        }
        linha++;
    }
    fclose(filecliente);  
    menumoema();  
}
//Fim FunÃ§Ã£o Deletar Cadastro func

//FunÃ§ao do feedback
void feedbackmoema(){
    system("cls");
    static int linha;
    int contadorantigo;
    int resultado;
    do{
        printf("---- Feedback do paciente----\n");
        printf("\nDigite o Nome do paciente: ");
        scanf("%s", &nome[linha]);
        printf("\nDigite o Sobrenome do paciente: ");
        scanf("%s", &sbnome[linha]);
        printf("\nDigite o e-mail do paciente: ");
        scanf("%s", &email[linha]);
        printf("\nDigite a Nota para o Atendimento [0 a 5]: ");
        scanf("%d", &nota[linha]);
        printf("\n Digite o comentário do paciente [Utilizando (-) no lugar dos espaços]: ");
        scanf("%s", &comentario[linha]);
        printf("\nDigite o CPF do paciente: ");
        scanf("%lld", &cpf[linha]);


        //Salva o Cadastro no banco de dados
        FILE* filecliente;
        filecliente = fopen("CadastroFeedMoema.txt", "a");
        fprintf(filecliente, "%s %s %s %d %s %lld\n", &nome[linha], &sbnome[linha], &email[linha], nota[linha], &comentario[linha], cpf[linha]);
        fclose(filecliente);

        //Reseta o valor da variavÃ©l caso o looping seja efetuado
        contadorantigo = 0;
        resultado = 0;

        //LÃª o Contador no Banco de Dados
        FILE* filecontadorcliente;
        filecontadorcliente = fopen("ContadorFeedMoema.txt", "r");
        fscanf(filecontadorcliente, "%d", &contadorantigo);
        fclose(filecontadorcliente);

        //Salva o contador no banco de dados
        resultado = contadorantigo + 1;
        filecontadorcliente = fopen("ContadorFeedMoema.txt", "w");
        fprintf(filecontadorcliente, "%d", resultado);
        fclose(filecontadorcliente);

        //OpÃ§Ãµes
        printf("\nDigite 1 para continuar dando nota, 8 para voltar ao menu ou 9 para sair: ");
        scanf("%d", &op);
        linha++;
        if(op==8){
            menumoema();
        }
        if(op==9){
            exit(0);
        }
    }while(op==1);

}

// LISTA DE FEEDBACK 
void listafeedmoema(){
    system("cls");
    static int linha;
    int i;
    int contadorantigo;

    //Abre os Cadastros dos Clientes
    FILE* filecliente;
    filecliente = fopen("CadastroFeedMoema.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorFeedMoema.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorantigo);
    fclose(filecontadorcliente);

    //Exibe a lista de Clientes
    printf("\n----Lista de Relatorios----\n");
    for(i = 0; i < contadorantigo; i++){
        fscanf(filecliente, "%s %s %s %d %s %lld\n", &nome[linha], &sbnome[linha], &email[linha], &nota[linha], &comentario[linha], &cpf[linha]);
        printf("\nNome: %s \nSobrenome: %s \nE-mail: %s \nNota: %d \nComentário: %s \nCPF: %lld \n", &nome[linha], &sbnome[linha], &email[linha], nota[linha], &comentario[linha], cpf[linha]);
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    printf("\nDigite 8 para voltar ao Menu ou 9 para Sair: ");
    scanf("%d", &op);
    if(op==8){
        menugeral();
    }
    if(op==9){
        exit(0);
    }
    if(op!=8,9)
    {
        menugeral();
    }
    exit(0);
}

void agendamentomoema(){
    system("cls");
    static int linha;
    int contadorantigo;
    int resultado;
    do{
        printf("---- Dados da Consulta----\n");
        printf("\nDigite o nome do paciente: ");
        scanf("%s", &nome[linha]);
        printf("\nDigite o Sobrenome do paciente: ");
        scanf("%s", &sbnome[linha]);
        printf("\nDigite o e-mail do paciente: ");
        scanf("%s", &email[linha]);
        printf("\nDigite a especialidade do médico [EX: Clinico-Geral]: ");
        scanf("%s", &espmedic[linha]);
        printf("\nDigite o nome e sobrenome do médico [Separados por (-)]: ");
        scanf("%s", &nmsb[linha]);
        printf("\nDigite o CPF do paciente: ");
        scanf("%lld", &cpf[linha]);
        printf("\nDigite a data da consulta [EX: 00/00/0000]: ");
        scanf("%s", &dataagen[linha] );
		printf("\nDigite o horário da consulta: ");
		scanf("%s", &hrcon[linha]);
		printf("\nDigite o valor da consulta: R$");
		scanf("%lld",&valorc);

        //Salva o Cadastro no banco de dados
        FILE* filecliente;
        filecliente = fopen("ConsultaMoema.txt", "a");
        fprintf(filecliente, "%s %s %s %s %s %lld %s %s %lld\n", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], cpf[linha], &dataagen[linha], &hrcon[linha], valorc[linha]);
        fclose(filecliente);

        //Reseta o valor da variavÃ©l caso o looping seja efetuado
        contadorantigo = 0;
        resultado = 0;

        //LÃª o Contador no Banco de Dados
        FILE* filecontadorcliente;
        filecontadorcliente = fopen("ContadorConsultaMoema.txt", "r");
        fscanf(filecontadorcliente, "%d", &contadorantigo);
        fclose(filecontadorcliente);

        //Salva o contador no banco de dados
        resultado = contadorantigo + 1;
        filecontadorcliente = fopen("ContadorConsultaMoema.txt", "w");
        fprintf(filecontadorcliente, "%d", resultado);
        fclose(filecontadorcliente);

        //OpÃ§Ãµes
        printf("\nDigite 1 para continuar dando agendando, 8 para voltar ao menu ou 9 para sair: ");
        scanf("%d", &op);
        linha++;
        if(op==8){
            menumoema();
        }
        if(op==9){
            exit(0);
        }
    }while(op==1);

}

void agenpesquisamoema(){
    system("cls");
    long long int cpfpesquisa;
    int contadorpesquisa;
    static int i;
    static int linha;

    //Abre Banco de Dados Cliente
    FILE* filecliente;
    filecliente = fopen("ConsultaMoema.txt", "r");

    //Abre e armazena contador
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorConsultaMoema.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorpesquisa);
    fclose(filecontadorcliente);

    //Recebe CPF para Pesquisa
    printf("\nDigite o CPF: ");
    scanf("%lld", &cpfpesquisa);

    //LÃª o banco de dados atÃ© encontrar o CPF pesquisado
    for(i = 0; i < contadorpesquisa; i++)
    {
        fscanf(filecliente, "%s %s %s %s %s %lld %s %s %lld", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], &cpf[linha], &dataagen[linha], &hrcon[linha], &valorc[linha]);

        //Se o CPF pesquisado constar no Banco de Dados o resgistro Ã© exibido
        if(cpfpesquisa == cpf[linha])
        {
            printf("\nNome: %s \nSobrenome: %s \nEmail: %s \nEspecialidade Médica: %s \nNome e Sobrenome do médico: %s \nCPF: %lld \nData da Consulta: %s \nHora da Consulta: %s \nValor da Consulta: R$ %lld", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], cpf[linha], &dataagen[linha], &hrcon[linha], valorc[linha]);
            printf("\nDigite 1 para continuar pesquisando, 8 para voltar ao menu ou 9 para sair: ");
            scanf("%d", &op);
            //OpÃ§Ãµes
            if(op==1)
            {
                agenpesquisamoema();
            }
            
            if(op==8)
            {
                menumoema();
            }
            if(op==9)
            {
                exit(0);
            }
            if(op!=8,9)
            {
                menumoema();
            }
        }
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    if(op==8)
    {
        menumoema();
    }
    if(op==9)
    {
        exit(0);
    }
    if(op!=8,9)
    {
        menumoema();
    }
    exit(0);
}

void exibirconsultamoema(){
    system("cls");
    static int linha;
    int i;
    int contadorantigo;

    //Abre os Cadastros dos Clientes
    FILE* filecliente;
    filecliente = fopen("ConsultaMoema.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorConsultaMoema.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorantigo);
    fclose(filecontadorcliente);

    //Exibe a lista de Clientes
    printf("\n----Lista de Consultas marcadas----\n");
    for(i = 0; i < contadorantigo; i++){
        fscanf(filecliente, "%s %s %s %s %s %lld %s %s %lld", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], &cpf[linha], &dataagen[linha], &hrcon[linha], &valorc[linha]);
        printf("\nNome: %s \nSobrenome: %s \nEmail: %s \nEspecialidade Médica: %s \nNome e Sobrenome do médico: %s \nCPF: %lld \nData da Consulta: %s \nHora da Consulta: %s \nValor da Consulta: R$ %lld\n", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], cpf[linha], &dataagen[linha], &hrcon[linha], valorc[linha]);
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    printf("\nDigite 8 para voltar ao Menu ou 9 para Sair: ");
    scanf("%d", &op);
    if(op==8){
        menumoema();
    }
    if(op==9){
        exit(0);
    }
    if(op!=8,9)
    {
        menumoema();
    }
    exit(0);
}

void cancelamentoconsultamoema(){
    system("cls");
    long long int deletarcpf;
    int contadorantigo;
    int contadornovo=0;
    int i;
    static int linha;

    //Recebe o CPF que deseja excluir
    printf("\nDigite o CPF do Paciente: ");
    scanf("%lld", &deletarcpf);

    //Abre o resgistro de clientes
    FILE* filecliente = fopen("ConsultaMoema.txt", "r");

    //abre e pega o contador de clientes
    FILE* filecontadorlciente = fopen("ContadorConsultaMoema.txt", "r");
    fscanf(filecontadorlciente, "%d", &contadorantigo);
    fclose(filecontadorlciente);

    //Faz um looping ate encontrar no banco de dados o CPF digitado
    for(i = 0; i < contadorantigo; i++)
    {
        fscanf(filecliente, "%s %s %s %s %s %lld %s %s %lld", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], &cpf[linha], &dataagen[linha], &hrcon[linha], &valorc[linha]);

        //Se o CPF Ã© encontrado mostra os dados do Cliente
        if(deletarcpf == cpf[linha])
        {
            fclose(filecliente);

            //Mostra os dados do Cliente
            printf("\nDados de %s\n", &nome[linha]);
            printf("\nNome: %s \nSobrenome: %s \nEmail: %s \nEspecialidade Médica: %s \nNome e Sobrenome do médico: %s \nCPF: %lld \nData da Consulta: %s \nHora da Consulta: %s \nValor da Consulta: R$ %lld\n", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], cpf[linha], &dataagen[linha], &hrcon[linha], valorc[linha]);

            //Pergunta se deseja realmente excluir aquele CPF
            printf("\nDeseja deletar o cadastro de %s? Digite 1 para SIM e 2 para NÃO: ", &nome[linha]);
            scanf("%d", &op);

            if(op==1)
            {
                //Cria um novo arquivo txt para colocar os dados dos clientes exceto os dados do CPF que foi excluido
                FILE* filenew = fopen("new.txt", "a");

                //Reabre o registro de clientes para nova utilizaÃ§Ã£o
                filecliente = fopen("ConsultaMoema.txt", "r");

                for(i = 0; i < contadorantigo; i++)
                {
                    //LÃª os dados do registro de clientes
                    fscanf(filecliente, "%s %s %s %s %s %lld %s %s %lld", &nome[i], &sbnome[i], &email[i], &espmedic[i], &nmsb[i], &cpf[i], &dataagen[i], &hrcon[i], &valorc[i]);

                    if(cpf[i] != deletarcpf)
                    {
                        //Guarda os dados dos clientes que restaram no novo banco de dados
                        fprintf(filenew, "%s %s %s %s %s %lld %s %s %lld\n", &nome[i], &sbnome[i], &email[i], &espmedic[i], &nmsb[i], cpf[i], &dataagen[i], &hrcon[i], valorc[i]);
                    }
                }
                fclose(filecliente);
                fclose(filenew);

                //Registra o novo valor do contador de clientes no banco de dados
                contadornovo = contadorantigo - 1;
                FILE* filecontadorlciente = fopen("ContadorConsultaMoema.txt", "w");
                fprintf(filecontadorlciente, "%d", contadornovo);
                fclose(filecontadorlciente);


                //ExcluÃ­ o antigo banco de dados
                remove("ConsultaMoema.txt");


                //Altera o nome do novo banco de dados para o nome antigo
                rename("new.txt", "ConsultaMoema.txt");


                //opÃ§Ãµes
                printf("\nDigite 8 para retornar ao menu ou 9 para sair: ");
                scanf("%d", &op);
                if(op==8)
                {
                    menumoema();
                }
                if(op==9)
                {
                    exit(0);
                }
                if(op!=8,9)
                {
                    menumoema();
                }
            } 
            if(op!=1)
            {
                menumoema();
            }    
        }
        linha++;
    }
    fclose(filecliente);  
    menumoema();  
}


void faturamentomoema(){
    system("cls");
    static int linha;
    int i;
    int contadorantigo;


    //Abre os Cadastros dos Clientes
    FILE* filecliente;
    filecliente = fopen("ConsultaMoema.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorConsultaMoema.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorantigo);
    fclose(filecontadorcliente);

    //Exibe a lista de Clientes
    printf("\n----Lista de Consultas marcadas----\n");
    for(i = 0; i < contadorantigo; i++){
        fscanf(filecliente, "%s %s %s %s %s %lld %s %s %lld", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], &cpf[linha], &dataagen[linha], &hrcon[linha], &valorc[linha]);
        printf("\nData da consulta: %s \nValor da Consulta: R$ %lld\n", &dataagen[linha], valorc[linha]);
        linha++;
        fflush(stdin);
    }
    fclose(filecliente);
	
	
    //OpÃ§Ãµes
    printf("\nDigite [1] para calcular o Faturamento ou [8] para voltar ao Menu ou [9] para Sair: ");
    scanf("%d", &op);
    if (op==1){
    	calculadora();
	}
    if(op==8){
        menugeral();
    }
    if(op==9){
        exit(0);
    }
    if(op!=8,9)
    {
        menugeral();
    }
    exit(0);
}
//################################## Interface para a unidade de Chácara ############################################



//FunÃ§Ã£o Menu
void menuchacara(){
	system("cls");
    printf("\n     ====UNIDADE CHÁCARA====");
    printf("\n=======================================\n");
    printf("*                                     *\n");
    printf("*       DIGITE A OPÇÃO DESEJADA       *\n");
    printf("*                                     *\n");
    printf("=======================================\n");
    printf("\nCadastrar Pacientes(1) \nPesquisar Pacientes(2) \nLista de Pacientes(3) \nDeletar Cadastro de Pacientes(4) \n\nCadastrar Médicos(5) \nPesquisar Médicos(6) \nLista de Médicos(7) \nDeletar Cadastro de Médicos(10) \n\nCadastro de Funcionários(11) \nPesquisar Funcionários(12) \nLista de Funcionários(13) \nDeletar Funcionários(14) \n\nAgendamento de Consulta(15) \nPesquisar Consulta(16) \nLista de Consultas(17) \nDesmarcar Consulta(18) \n\n\nFEEDBACK(0) \n\nMenu Geral(8) ");
    printf(" \nSair(9)\n\nInsira a opção desejada: ");
	scanf("%d", &op);
    if(op==1)
    { 
        cadastroclientechacara();
    }
    if(op==2)
    {
        pesquisaclientechacara();
    }
    if(op==3)
    {
        listaclientechacara();
    }
    if(op==4)
    {
        deletarcadastroclientechacara();
    }
    if (op==5)
    {
       cadastromedicchacara();
    }
    if (op==6)
    {
        pesquisamedicchacara();
    }
    if (op==7)
    {
        listamedicchacara();
    }
    if (op==10)
    {
        deletarcadastromedicchacara();
    }
    if (op==0)
    {
        feedbackchacara();
    }
    if (op==11)
    {
        cadastrofuncionariochacara();
    }
    if (op==12)
    {
        pesquisafuncionariochacara();
    }
    if (op==13)
    {
        listafuncionariochacara();
    }
    if (op==14)
    {
        deletarfuncionariochacara();
    }
    if (op==15)
    {
        agendamentochacara();
    }
    if (op==16)
    {
        agenpesquisachacara();
    }
    if (op==17)
    {
        exibirconsultachacara();
    }
    if (op==18)
    {
        cancelamentoconsultachacara();
    }
    if(op==9)
    {
        exit(0);
    }
    if (op==8)
    {
        menugeral();
        system("cls");
    }
    exit(0);
}
//Fim da FunÃ§Ã£o Menu


//FunÃ§Ã£o Cadastro Cliente
void cadastroclientechacara(){
    system("cls");
    static int linha;
    int contadorantigo;
    int resultado;


    //Recolhe os Dados dos Clientes
    do{
        printf("---- Cadastrando Paciente----\n");
        printf("\nDigite somente o primeiro nome: ");
        scanf("%s", &nome[linha]);
        printf("\nDigite somente o último sobrenome: ");
        scanf("%s", &sbnome[linha]);
        printf("\nDigite o e-mail do paciente: ");
        scanf("%s", &email[linha]);
        printf("\nDigite a idade do paciente: ");
        scanf("%d", &idade[linha]);
        printf("\nDigite o CPF do paciente: ");
        scanf("%lld", &cpf[linha]);
        printf("\nDigite o gênero do paciente [F ou M]: ");
        scanf("%s", &sexo[linha]); 
        printf("\nDigite o nome do Convênio do Paciente [SE NÃO TIVER DIGITE N]: "); 
        scanf("%s", &nomeconvenio[linha]);
        printf("\nNumero do Convênio do Paciente [SE NAO TIVER DIGITE 0]: "); 
        scanf("%lld", &numconvenio[linha]); 
        printf("\nDigite a Data de Validade do Convênio do Paciente [EX: 00/00/0000]: ");
        scanf("%s", &valfinal[linha]);
        printf("\nDigite o Telefone/Celular do paciente: ");
        scanf("%lld", &tel[linha]);
        printf("\nDigite a Rua do Paciente: ");
        scanf("%s", &rua[linha]);
        printf("\nDigite o CEP do paciente: ");
        scanf("%d", &cep[linha]);
        printf("\nDigite o número da residência do paciente: ");
        scanf("%d", &nm[linha]); 
        printf("\nDigite o Estado do Paciente[EX: SP]: ");
        scanf("%s", &estado[linha]);
        printf("\nDigite a Cidade do Paciente: ");
        scanf("%s", &city[linha]);
        //Salva o Cadastro no banco de dados
        FILE* filecliente;
        filecliente = fopen("CadastroClienteChacara.txt", "a");
        fprintf(filecliente, "%s %s %s %d %lld %s %s %lld %s %lld %s %d %d %s %s\n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &nomeconvenio[linha], numconvenio[linha], &valfinal[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
        fclose(filecliente);

        contadorantigo = 0;
        resultado = 0;

        //LÃª o Contador no Banco de Dados
        FILE* filecontadorcliente;
        filecontadorcliente = fopen("ContadorClienteChacara.txt", "r");
        fscanf(filecontadorcliente, "%d", &contadorantigo);
        fclose(filecontadorcliente);

        //Salva o contador no banco de dados
        resultado = contadorantigo + 1;
        filecontadorcliente = fopen("ContadorClienteChacara.txt", "w");
        fprintf(filecontadorcliente, "%d", resultado);
        fclose(filecontadorcliente);

        //OpÃ§Ãµes
        printf("\nDigite 1 para continuar cadastrando, 8 para voltar ao menu ou 9 para sair: ");
        scanf("%d", &op);
        linha++;
        if(op==8){
            menuchacara();
        }
        if(op==9){
            exit(0);
        }
    }while(op==1);
}
//Fim FunÃ§Ã£o Cadastro Cliente


//FunÃ§Ã£o Deletar Cadastro Cliente
void deletarcadastroclientechacara(){
    system("cls");
    long long int deletarcpf;
    int contadorantigo;
    int contadornovo=0;
    int i;
    static int linha;

    //Recebe o CPF que deseja excluir
    printf("\nDigite o CPF do cliente: ");
    scanf("%lld", &deletarcpf);

    //Abre o resgistro de clientes
    FILE* filecliente = fopen("CadastroClienteChacara.txt", "r");

    //abre e pega o contador de clientes
    FILE* filecontadorlciente = fopen("ContadorClienteChacara.txt", "r");
    fscanf(filecontadorlciente, "%d", &contadorantigo);
    fclose(filecontadorlciente);

    //Faz um looping ate encontrar no banco de dados o CPF digitado
    for(i = 0; i < contadorantigo; i++)
    {
        fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %lld %s %d %d %s %s", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &nomeconvenio[linha], &numconvenio[linha], &valfinal[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);

        //Se o CPF Ã© encontrado mostra os dados do Cliente
        if(deletarcpf == cpf[linha])
        {
            fclose(filecliente);

            //Mostra os dados do Cliente
            printf("\nDados de %s\n", &nome[linha]);
            printf("\nNome: %s \nSobrenome: %s \nE-mail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nNome do Convênio: %s \nNúmero do Convênio: %lld \nData de validade do Convênio: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &nomeconvenio[linha], numconvenio[linha], &valfinal[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);

            //Pergunta se deseja realmente excluir aquele CPF
            printf("\nDeseja deletar o cadastro de %s? Digite 1 para SIM e 2 para NÃO: ", &nome[linha]);
            scanf("%d", &op);

            if(op==1)
            {
                //Cria um novo arquivo txt para colocar os dados dos clientes exceto os dados do CPF que foi excluido
                FILE* filenew = fopen("new.txt", "a");

                //Reabre o registro de clientes para nova utilizaÃ§Ã£o
                filecliente = fopen("CadastroClienteChacara.txt", "r");

                for(i = 0; i < contadorantigo; i++)
                {
                    //LÃª os dados do registro de clientes
                    fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %lld %s %d %d %s %s", &nome[i], &sbnome[i], &email[i], &idade[i], &cpf[i], &sexo[i], &nomeconvenio[i], &numconvenio[i], &valfinal[i], &tel[i], &rua[i], &cep[i], &nm[i], &estado[i], &city[i]);

                    if(cpf[i] != deletarcpf)
                    {
                        //Guarda os dados dos clientes que restaram no novo banco de dados
                        fprintf(filenew, "%s %s %s %d %lld %s %s %lld %s %lld %s %d %d %s %s\n", &nome[i], &sbnome[i], &email[i], idade[i], cpf[i], &sexo[i], &nomeconvenio[i], numconvenio[i], &valfinal[i], tel[i], &rua[i], cep[i], nm[i], &estado[i], &city[i]);
                    }
                }
                fclose(filecliente);
                fclose(filenew);

                //Registra o novo valor do contador de clientes no banco de dados
                contadornovo = contadorantigo - 1;
                FILE* filecontadorlciente = fopen("ContadorClienteChacara.txt", "w");
                fprintf(filecontadorlciente, "%d", contadornovo);
                fclose(filecontadorlciente);


                //ExcluÃ­ o antigo banco de dados
                remove("CadastroClienteChacara.txt");


                //Altera o nome do novo banco de dados para o nome antigo
                rename("new.txt", "CadastroClienteChacara.txt");


                //opÃ§Ãµes
                printf("\nDigite 8 para retornar ao menu ou 9 para sair: ");
                scanf("%d", &op);
                if(op==8)
                {
                    menuchacara();
                }
                if(op==9)
                {
                    exit(0);
                }
                if(op!=8,9)
                {
                    menuchacara();
                }
            } 
            if(op!=1)
            {
                menuchacara();
            }    
        }
        linha++;
    }
    fclose(filecliente);  
    menuchacara();  
}
//Fim FunÃ§Ã£o Deletar Cadastro Cliente


//FunÃ§Ã£o Pesquisa
void pesquisaclientechacara(){
    system("cls");
    long long int cpfpesquisa;
    int contadorpesquisa;
    static int i;
    static int linha;

    //Abre Banco de Dados Cliente
    FILE* filecliente;
    filecliente = fopen("CadastroClienteChacara.txt", "r");

    //Abre e armazena contador
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorClienteChacara.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorpesquisa);
    fclose(filecontadorcliente);

    //Recebe CPF para Pesquisa
    printf("\nDigite o CPF: ");
    scanf("%lld", &cpfpesquisa);

    //LÃª o banco de dados atÃ© encontrar o CPF pesquisado
    for(i = 0; i < contadorpesquisa; i++)
    {
        fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %lld %s %d %d %s %s", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &nomeconvenio[linha], &numconvenio[linha], &valfinal[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);

        //Se o CPF pesquisado constar no Banco de Dados o resgistro Ã© exibido
        if(cpfpesquisa == cpf[linha])
        {
            printf("\nNome: %s \nSobrenome: %s \nE-mail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nNome do Convênio: %s \nNúmero do Convênio: %lld \nData de validade do Convênio: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &nomeconvenio[linha], numconvenio[linha], &valfinal[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
            printf("\nDigite 1 para continuar pesquisando, 8 para voltar ao menu ou 9 para sair: ");
            scanf("%d", &op);
            //OpÃ§Ãµes
            if(op==1)
            {
                pesquisaclientechacara();
            }
            
            if(op==8)
            {
                menuchacara();
            }
            if(op==9)
            {
                exit(0);
            }
            if(op!=8,9)
            {
                menuchacara();
            }
        }
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    if(op==8)
    {
        menuchacara();
    }
    if(op==9)
    {
        exit(0);
    }
    if(op!=8,9)
    {
        menuchacara();
    }
    exit(0);
}
//Fim FunÃ§Ã£o Pesquisa


//Lista de Cliente
void listaclientechacara(){
    system("cls");
    static int linha;
    int i;
    int contadorantigo;

    //Abre os Cadastros dos Clientes
    FILE* filecliente;
    filecliente = fopen("CadastroClienteChacara.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorClienteChacara.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorantigo);
    fclose(filecontadorcliente);

    //Exibe a lista de Clientes
    printf("\n----Lista de Clientes Cadastrados----\n");
    for(i = 0; i < contadorantigo; i++){
        fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %lld %s %d %d %s %s\n", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &nomeconvenio[linha], &numconvenio[linha], &valfinal[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);
        printf("\nNome: %s \nSobrenome: %s \nEimail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nNome do Convênio: %s \nNúmero do Convênio: %lld \nData de validade do Convênio: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &nomeconvenio[linha], numconvenio[linha], &valfinal[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    printf("\nDigite 8 para voltar ao Menu ou 9 para Sair: ");
    scanf("%d", &op);
    if(op==8){
        menuchacara();
    }
    if(op==9){
        exit(0);
    }
    if(op!=8,9)
    {
        menuchacara();
    }
    exit(0);
}
//Fim da Lista de Clientes


//FunÃ§Ã£o Cadastro DE MEDICOS
void cadastromedicchacara(){
    system("cls");
    static int linha;
    int contadorantigo;
    int resultado;


    //Recolhe os Dados dos MEDICOS
    do{
        printf("---- Cadastrando Médico---\n");
        printf("\nDigite somente o primeiro nome: ");
        scanf("%s", &nome[linha]);
        printf("\nDigite somente o último sobrenome: ");
        scanf("%s", &sbnome[linha]);
        printf("\nDigite o e-mail do médico: ");
        scanf("%s", &email[linha]);
        printf("\nDigite a idade do médico: ");
        scanf("%d", &idade[linha]);
        printf("\nDigite o CPF do médico: ");
        scanf("%lld", &cpf[linha]);
        printf("\nDigite o gênero do médico[F ou M]: ");
        scanf("%s", &sexo[linha]); 
        printf("\nNumero do CRM do médico: "); 
        scanf("%lld", &crm[linha]); 
        printf("\nDigite o CNES: ");
        scanf("%lld", &cnes[linha]);
        printf("\nDigite a especialidade do médico: ");
        scanf("%s", &espmedic[linha]);
        printf("\nDigite o Telefone/Celular do médico: ");
        scanf("%lld", &tel[linha]);
        printf("\nDigite a Rua do médico: ");
        scanf("%s", &rua[linha]);
        printf("\nDigite o CEP do médico: ");
        scanf("%d", &cep[linha]);
        printf("\nDigite o número da residência do médico: ");
        scanf("%d", &nm[linha]); 
        printf("\nDigite o Estado do médico[EX: SP]: ");
        scanf("%s", &estado[linha]);
        printf("\nDigite a Cidade do médico [EX: Sao-Paulo]: ");
        scanf("%s", &city[linha]);

        //Salva o Cadastro no banco de dados
        FILE* filecliente;
        filecliente = fopen("CadastroMedicChacara.txt", "a");
        fprintf(filecliente, "%s %s %s %d %lld %s %lld %lld %s %lld %s %d %d %s %s\n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], crm[linha], cnes[linha], &espmedic[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
        fclose(filecliente);

        //Reseta o valor da variavÃ©l caso o looping seja efetuado
        contadorantigo = 0;
        resultado = 0;

        //LÃª o Contador no Banco de Dados
        FILE* filecontadorcliente;
        filecontadorcliente = fopen("ContadorMedicChacara.txt", "r");
        fscanf(filecontadorcliente, "%d", &contadorantigo);
        fclose(filecontadorcliente);

        //Salva o contador no banco de dados
        resultado = contadorantigo + 1;
        filecontadorcliente = fopen("ContadorMedicChacara.txt", "w");
        fprintf(filecontadorcliente, "%d", resultado);
        fclose(filecontadorcliente);

        //OpÃ§Ãµes
        printf("\nDigite 1 para continuar cadastrando, 8 para voltar ao menu ou 9 para sair: ");
        scanf("%d", &op);
        linha++;
        if(op==8){
            menuchacara();
        }
        if(op==9){
            exit(0);
        }
    }while(op==1);
}
// FIM DO CADASTRO MEDIC

//Deletar medicos
void deletarcadastromedicchacara(){
    long long int deletarcpf;
    int contadorantigo;
    int contadornovo=0;
    int i;
    static int linha;
    system("cls");
    //Recebe o CPF que deseja excluir
    printf("\nDigite o CPF do medico: ");
    scanf("%lld", &deletarcpf);

    //Abre o resgistro de clientes
    FILE* filecliente = fopen("CadastroMedicChacara.txt", "r");

    //abre e pega o contador de clientes
    FILE* filecontadorlciente = fopen("ContadorMedicChacara.txt", "r");
    fscanf(filecontadorlciente, "%d", &contadorantigo);
    fclose(filecontadorlciente);

    //Faz um looping ate encontrar no banco de dados o CPF digitado
    for(i = 0; i < contadorantigo; i++)
    {
        fscanf(filecliente, "%s %s %s %d %lld %s %lld %lld %s %lld %s %d %d %s %s", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &crm[linha], &cnes[linha], &espmedic[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);

        //Se o CPF Ã© encontrado mostra os dados do Cliente
        if(deletarcpf == cpf[linha])
        {
            fclose(filecliente);

            //Mostra os dados do Cliente
            printf("\nDados de %s\n", &nome[linha]);
            printf("\nNome: %s \nSobrenome: %s \nE-mail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nCRM: %lld \nCNES: %lld \nEspecialidade médica: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], crm[linha], cnes[linha], &espmedic[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);

            //Pergunta se deseja realmente excluir aquele CPF
            printf("\nDeseja deletar o cadastro de %s? Digite 1 para SIM e 2 para NÃO: ", &nome[linha]);
            scanf("%d", &op);

            if(op==1)
            {
                //Cria um novo arquivo txt para colocar os dados dos clientes exceto os dados do CPF que foi excluido
                FILE* filenew = fopen("new.txt", "a");

                //Reabre o registro de clientes para nova utilizaÃ§Ã£o
                filecliente = fopen("CadastroMedicChacara.txt", "r");

                for(i = 0; i < contadorantigo; i++)
                {
                    //LÃª os dados do registro de clientes
                    fscanf(filecliente, "%s %s %s %d %lld %s %lld %lld %s %lld %s %d %d %s %s", &nome[i], &sbnome[i], &email[i], &idade[i], &cpf[i], &sexo[i], &crm[i], &cnes[i], &espmedic[i], &tel[i], &rua[i], &cep[i], &nm[i], &estado[i], &city[i]);

                    if(cpf[i] != deletarcpf)
                    {
                        //Guarda os dados dos clientes que restaram no novo banco de dados
                        fprintf(filenew, "%s %s %s %d %lld %s %lld %lld %s %lld %s %d %d %s %s\n", &nome[i], &sbnome[i], &email[i], idade[i], cpf[i], &sexo[i], crm[i], cnes[i], &espmedic[i], tel[i], &rua[i], cep[i], nm[i], &estado[i], &city[i]);
                    }
                }
                fclose(filecliente);
                fclose(filenew);

                //Registra o novo valor do contador de clientes no banco de dados
                contadornovo = contadorantigo - 1;
                FILE* filecontadorlciente = fopen("ContadorMedicChacara.txt", "w");
                fprintf(filecontadorlciente, "%d", contadornovo);
                fclose(filecontadorlciente);

                //ExcluÃ­ o antigo banco de dados
                remove("CadastroMedicChacara.txt");


                //Altera o nome do novo banco de dados para o nome antigo
                rename("new.txt", "CadastroMedicChacara.txt");


                //opÃ§Ãµes
                printf("\nDigite 8 para retornar ao menu ou 9 para sair: ");
                scanf("%d", &op);
                if(op==8)
                {
                    menuchacara();
                }
                if(op==9)
                {
                    exit(0);
                }
                if(op!=8,9)
                {
                    menuchacara();
                }
            } 
            if(op!=1)
            {
                menuchacara();
            }    
        }
        linha++;
    }
    fclose(filecliente);  
    menuchacara();  
}
//Fim FunÃ§Ã£o Deletar Cadastro medicos

//FunÃ§Ã£o Pesquisa Medic
void pesquisamedicchacara(){
    system("cls");
    long long int cpfpesquisa;
    int contadorpesquisa;
    static int i;
    static int linha;

    //Abre Banco de Dados Cliente
    FILE* filecliente;
    filecliente = fopen("CadastroMedicChacara.txt", "r");

    //Abre e armazena contador
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorMedicChacara.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorpesquisa);
    fclose(filecontadorcliente);

    //Recebe CPF para Pesquisa
    printf("\nDigite o CPF: ");
    scanf("%lld", &cpfpesquisa);

    //LÃª o banco de dados atÃ© encontrar o CPF pesquisado
    for(i = 0; i < contadorpesquisa; i++)
    {
        fscanf(filecliente, "%s %s %s %d %lld %s %lld %lld %s %lld %s %d %d %s %s", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &crm[linha], &cnes[linha], &espmedic[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);

        //Se o CPF pesquisado constar no Banco de Dados o resgistro Ã© exibido
        if(cpfpesquisa == cpf[linha])
        {
            printf("\nNome: %s \nSobrenome: %s \nE-mail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nCRM: %lld \nCNES: %lld \nEspecialidade médica: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], crm[linha], cnes[linha], &espmedic[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
            printf("\nDigite 1 para continuar pesquisando, 8 para voltar ao menu ou 9 para sair: ");
            scanf("%d", &op);
            //OpÃ§Ãµes
            if(op==1)
            {
                pesquisamedicchacara();
            }
            
            if(op==8)
            {
                menuchacara();
            }
            if(op==9)
            {
                exit(0);
            }
            if(op!=8,9)
            {
                menuchacara();
            }
        }
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    if(op==8)
    {
        menuchacara();
    }
    if(op==9)
    {
        exit(0);
    }
    if(op!=8,9)
    {
        menuchacara();
    }
    exit(0);
}
//Fim FunÃ§Ã£o Pesquisa Medic


//Lista de Medic
void listamedicchacara(){
    system("cls");
    static int linha;
    int i;
    int contadorantigo;

    //Abre os Cadastros dos Clientes
    FILE* filecliente;
    filecliente = fopen("CadastroMedicChacara.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorMedicChacara.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorantigo);
    fclose(filecontadorcliente);

    //Exibe a lista de Clientes
    printf("\n----Lista de Medicos Cadastrados----\n");
    for(i = 0; i < contadorantigo; i++){
        fscanf(filecliente, "%s %s %s %d %lld %s %lld %lld %s %lld %s %d %d %s %s", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &crm[linha], &cnes[linha], &espmedic[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);
        printf("\nNome: %s \nSobrenome: %s \nE-mail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nCRM: %lld \nCNES: %lld \nEspecialidade médica: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], crm[linha], cnes[linha], &espmedic[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    printf("\nDigite 8 para voltar ao Menu ou 9 para Sair: ");
    scanf("%d", &op);
    if(op==8){
        menuchacara();
    }
    if(op==9){
        exit(0);
    }
    if(op!=8,9)
    {
        menuchacara();
    }
    exit(0);
}
//Fim da Lista de Medic

// func de func
void cadastrofuncionariochacara(){
    system("cls");
    static int linha;
    int contadorantigo;
    int resultado;
do{
        printf("---- Cadastrando Funcionário----\n");
        printf("\nDigite somente o primeiro nome: ");
        scanf("%s", &nome[linha]);
        printf("\nDigite somente o último sobrenome: ");
        scanf("%s", &sbnome[linha]);
        printf("\nDigite o e-mail do Funcionário: ");
        scanf("%s", &email[linha]);
        printf("\nDigite a idade do Funcionário: ");
        scanf("%d", &idade[linha]);
        printf("\nDigite o CPF do Funcionário: ");
        scanf("%lld", &cpf[linha]);
        printf("\nDigite o gênero do Funcionário[F ou M]: ");
        scanf("%s", &sexo[linha]); 
        printf("\nÁrea de Atuação do Funcionário: "); 
        scanf("%s", &areadeatu[linha]);
        printf("\nDigite o Telefone/Celular do Funcionário: ");
        scanf("%lld", &tel[linha]);
        printf("\nDigite a Rua do Funcionário: ");
        scanf("%s", &rua[linha]);
        printf("\nDigite o CEP do Funcionário: ");
        scanf("%d", &cep[linha]);
        printf("\nDigite o número da residência do Funcionário: ");
        scanf("%d", &nm[linha]); 
        printf("\nDigite o Estado do Funcionário[EX: SP]: ");
        scanf("%s", &estado[linha]);
        printf("\nDigite a Cidade do Funcionário: ");
        scanf("%s", &city[linha]);

        //Salva o Cadastro no banco de dados
        FILE* filecliente;
        filecliente = fopen("CadastroFuncionarioChacara.txt", "a");
        fprintf(filecliente, "%s %s %s %d %lld %s %s %lld %s %d %d %s %s\n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &areadeatu[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
        fclose(filecliente);

        contadorantigo = 0;
        resultado = 0;

        //LÃª o Contador no Banco de Dados
        FILE* filecontadorcliente;
        filecontadorcliente = fopen("ContadorFuncionarioChacara.txt", "r");
        fscanf(filecontadorcliente, "%d", &contadorantigo);
        fclose(filecontadorcliente);

        //Salva o contador no banco de dados
        resultado = contadorantigo + 1;
        filecontadorcliente = fopen("ContadorFuncionarioChacara.txt", "w");
        fprintf(filecontadorcliente, "%d", resultado);
        fclose(filecontadorcliente);

        //OpÃ§Ãµes
        printf("\nDigite 1 para continuar cadastrando, 8 para voltar ao menu ou 9 para sair: ");
        scanf("%d", &op);
        linha++;
        if(op==8){
            menuchacara();
        }
        if(op==9){
            exit(0);
        }
    }while(op==1);
}
//Fim FunÃ§Ã£o Cadastro de func

//FunÃ§Ã£o Pesquisa
void pesquisafuncionariochacara(){
    system("cls");
    long long int cpfpesquisa;
    int contadorpesquisa;
    static int i;
    static int linha;

    //Abre Banco de Dados Cliente
    FILE* filecliente;
    filecliente = fopen("CadastroFuncionarioChacara.txt", "r");

    //Abre e armazena contador
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorFuncionarioChacara.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorpesquisa);
    fclose(filecontadorcliente);

    //Recebe CPF para Pesquisa
    printf("\nDigite o CPF: ");
    scanf("%lld", &cpfpesquisa);

    //LÃª o banco de dados atÃ© encontrar o CPF pesquisado
    for(i = 0; i < contadorpesquisa; i++)
    {
        fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %d %d %s %s\n", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &areadeatu[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);

        //Se o CPF pesquisado constar no Banco de Dados o resgistro Ã© exibido
        if(cpfpesquisa == cpf[linha])
        {
            printf("\nNome: %s \nSobrenome: %s \nE-mail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nÁrea de atuação: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &areadeatu[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
            printf("\nDigite 1 para continuar pesquisando, 8 para voltar ao menu ou 9 para sair: ");
            scanf("%d", &op);
            //OpÃ§Ãµes
            if(op==1)
            {
                pesquisafuncionariochacara();
            }
            
            if(op==8)
            {
                menuchacara();
            }
            if(op==9)
            {
                exit(0);
            }
            if(op!=8,9)
            {
                menuchacara();
            }
        }
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    if(op==8)
    {
        menuchacara();
    }
    if(op==9)
    {
        exit(0);
    }
    if(op!=8,9)
    {
        menuchacara();
    }
    exit(0);
}
//Fim FunÃ§Ã£o Pesquisa

//Lista de Func
void listafuncionariochacara(){
    system("cls");
    static int linha;
    int i;
    int contadorantigo;

    //Abre os Cadastros dos Clientes
    FILE* filecliente;
    filecliente = fopen("CadastroFuncionarioChacara.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorFuncionarioChacara.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorantigo);
    fclose(filecontadorcliente);

    //Exibe a lista de Clientes
    printf("\n----Lista de Funcionarios Cadastrados----\n");
    for(i = 0; i < contadorantigo; i++){
        fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %d %d %s %s\n", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &areadeatu[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);
        printf("\nNome: %s \nSobrenome: %s \nE-mail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nÁrea de atuação: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &areadeatu[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    printf("\nDigite 8 para voltar ao Menu ou 9 para Sair: ");
    scanf("%d", &op);
    if(op==8){
        menuchacara();
    }
    if(op==9){
        exit(0);
    }
    if(op!=8,9)
    {
        menuchacara();
    }
    exit(0);
}
//Fim da Lista de Clientes

//FunÃ§Ã£o Deletar Cadastro Cliente
void deletarfuncionariochacara(){
    system("cls");
    long long int deletarcpf;
    int contadorantigo;
    int contadornovo=0;
    int i;
    static int linha;

    //Recebe o CPF que deseja excluir
    printf("\nDigite o CPF do Funcionário: ");
    scanf("%lld", &deletarcpf);

    //Abre o resgistro de clientes
    FILE* filecliente = fopen("CadastroFuncionarioChacara.txt", "r");

    //abre e pega o contador de clientes
    FILE* filecontadorlciente = fopen("ContadorFuncionarioChacara.txt", "r");
    fscanf(filecontadorlciente, "%d", &contadorantigo);
    fclose(filecontadorlciente);

    //Faz um looping ate encontrar no banco de dados o CPF digitado
    for(i = 0; i < contadorantigo; i++)
    {
        fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %d %d %s %s\n", &nome[linha], &sbnome[linha], &email[linha], &idade[linha], &cpf[linha], &sexo[linha], &areadeatu[linha], &tel[linha], &rua[linha], &cep[linha], &nm[linha], &estado[linha], &city[linha]);

        //Se o CPF Ã© encontrado mostra os dados do Cliente
        if(deletarcpf == cpf[linha])
        {
            fclose(filecliente);

            //Mostra os dados do Cliente
            printf("\nDados de %s\n", &nome[linha]);
            printf("\nNome: %s \nSobrenome: %s \nE-mail: %s \nIdade: %d \nCPF: %lld \nGênero: %s \nÁrea de atuação: %s \nNúmero de Telefone/Celular: %lld \nRua: %s \nCep: %d \nNúmero da Residência: %d \nEstado: %s \nCidade: %s \n", &nome[linha], &sbnome[linha], &email[linha], idade[linha], cpf[linha], &sexo[linha], &areadeatu[linha], tel[linha], &rua[linha], cep[linha], nm[linha], &estado[linha], &city[linha]);

            //Pergunta se deseja realmente excluir aquele CPF
            printf("\nDeseja deletar o cadastro de %s? Digite 1 para SIM e 2 para NÃO: ", &nome[linha]);
            scanf("%d", &op);

            if(op==1)
            {
                //Cria um novo arquivo txt para colocar os dados dos clientes exceto os dados do CPF que foi excluido
                FILE* filenew = fopen("new.txt", "a");

                //Reabre o registro de clientes para nova utilizaÃ§Ã£o
                filecliente = fopen("CadastroFuncionarioChacara.txt", "r");

                for(i = 0; i < contadorantigo; i++)
                {
                    //LÃª os dados do registro de clientes
                    fscanf(filecliente, "%s %s %s %d %lld %s %s %lld %s %d %d %s %s", &nome[i], &sbnome[i], &email[i], &idade[i], &cpf[i], &sexo[i], &areadeatu[i], &tel[i], &rua[i], &cep[i], &nm[i], &estado[i], &city[i]);

                    if(cpf[i] != deletarcpf)
                    {
                        //Guarda os dados dos clientes que restaram no novo banco de dados
                        fprintf(filenew, "%s %s %s %d %lld %s %s %lld %s %d %d %s %s\n", &nome[i], &sbnome[i], &email[i], idade[i], cpf[i], &sexo[i], &areadeatu[i], tel[i], &rua[i], cep[i], nm[i], &estado[i], &city[i]);
                    }
                }
                fclose(filecliente);
                fclose(filenew);

                //Registra o novo valor do contador de clientes no banco de dados
                contadornovo = contadorantigo - 1;
                FILE* filecontadorlciente = fopen("ContadorFuncionarioChacara.txt", "w");
                fprintf(filecontadorlciente, "%d", contadornovo);
                fclose(filecontadorlciente);


                //ExcluÃ­ o antigo banco de dados
                remove("CadastroFuncionarioChacara.txt");


                //Altera o nome do novo banco de dados para o nome antigo
                rename("new.txt", "CadastroFuncionarioChacara.txt");


                //opÃ§Ãµes
                printf("\nDigite 8 para retornar ao menu ou 9 para sair: ");
                scanf("%d", &op);
                if(op==8)
                {
                    menuchacara();
                }
                if(op==9)
                {
                    exit(0);
                }
                if(op!=8,9)
                {
                    menuchacara();
                }
            } 
            if(op!=1)
            {
                menuchacara();
            }    
        }
        linha++;
    }
    fclose(filecliente);  
    menuchacara();  
}
//Fim FunÃ§Ã£o Deletar Cadastro func

//FunÃ§ao do feedback
void feedbackchacara(){
    system("cls");
    static int linha;
    int contadorantigo;
    int resultado;
    do{
        printf("---- Feedback do paciente----\n");
        printf("\nDigite o nome do paciente: ");
        scanf("%s", &nome[linha]);
        printf("\nDigite o Sobrenome do paciente: ");
        scanf("%s", &sbnome[linha]);
        printf("\nDigite o e-mail do paciente: ");
        scanf("%s", &email[linha]);
        printf("\nDigite a Nota para o Atendimento [0 a 5]: ");
        scanf("%d", &nota[linha]);
        printf("\n Digite o comentário do paciente [Utilizando (-) no lugar dos espacos]: ");
        scanf("%s", &comentario[linha]);
        printf("\nDigite o CPF do paciente: ");
        scanf("%lld", &cpf[linha]);


        //Salva o Cadastro no banco de dados
        FILE* filecliente;
        filecliente = fopen("CadastroFeedChacara.txt", "a");
        fprintf(filecliente, "%s %s %s %d %s %lld\n", &nome[linha], &sbnome[linha], &email[linha], nota[linha], &comentario[linha], cpf[linha]);
        fclose(filecliente);

        //Reseta o valor da variavÃ©l caso o looping seja efetuado
        contadorantigo = 0;
        resultado = 0;

        //LÃª o Contador no Banco de Dados
        FILE* filecontadorcliente;
        filecontadorcliente = fopen("ContadorFeedChacara.txt", "r");
        fscanf(filecontadorcliente, "%d", &contadorantigo);
        fclose(filecontadorcliente);

        //Salva o contador no banco de dados
        resultado = contadorantigo + 1;
        filecontadorcliente = fopen("ContadorFeedChacara.txt", "w");
        fprintf(filecontadorcliente, "%d", resultado);
        fclose(filecontadorcliente);

        //OpÃ§Ãµes
        printf("\nDigite 1 para continuar dando nota, 8 para voltar ao menu ou 9 para sair: ");
        scanf("%d", &op);
        linha++;
        if(op==8){
            menuchacara();
        }
        if(op==9){
            exit(0);
        }
    }while(op==1);

}
// FIM

// LISTA DE FEEDBACK 
void listafeedchacara(){
    system("cls");
    static int linha;
    int i;
    int contadorantigo;

    //Abre os Cadastros dos Clientes
    FILE* filecliente;
    filecliente = fopen("CadastroFeedChacara.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorFeedChacara.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorantigo);
    fclose(filecontadorcliente);

    //Exibe a lista de Clientes
    printf("\n----Lista de Relatorios----\n");
    for(i = 0; i < contadorantigo; i++){
        fscanf(filecliente, "%s %s %s %d %s %lld\n", &nome[linha], &sbnome[linha], &email[linha], &nota[linha], &comentario[linha], &cpf[linha]);
        printf("\nNome: %s \nSobrenome: %s \nE-mail: %s \nNota: %d \nComentário: %s \nCPF: %lld \n", &nome[linha], &sbnome[linha], &email[linha], nota[linha], &comentario[linha], cpf[linha]);
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    printf("\nDigite 8 para voltar ao Menu ou 9 para Sair: ");
    scanf("%d", &op);
    if(op==8){
        menugeral();
    }
    if(op==9){
        exit(0);
    }
    if(op!=8,9)
    {
        menugeral();
    }
    exit(0);
}


void agendamentochacara(){
    system("cls");
    static int linha;
    int contadorantigo;
    int resultado;
    do{
        printf("---- Dados da Consulta----\n");
        printf("\nDigite o nome do paciente: ");
        scanf("%s", &nome[linha]);
        printf("\nDigite o Sobrenome do paciente: ");
        scanf("%s", &sbnome[linha]);
        printf("\nDigite o e-mail do paciente: ");
        scanf("%s", &email[linha]);
        printf("\nDigite a especialidade do médico [EX: Clinico-Geral]: ");
        scanf("%s", &espmedic[linha]);
        printf("\nDigite o nome e sobrenome do médico [Separados por (-)]: ");
        scanf("%s", &nmsb[linha]);
        printf("\nDigite o CPF do paciente: ");
        scanf("%lld", &cpf[linha]);
        printf("\nDigite a data da consulta [EX: 00/00/0000]: ");
        scanf("%s", &dataagen[linha] );
		printf("\nDigite o horário da consulta: ");
		scanf("%s", &hrcon[linha]);
		printf("\nDigite o valor da consulta: R$");
		scanf("%lld",&valorc);

        //Salva o Cadastro no banco de dados
        FILE* filecliente;
        filecliente = fopen("ConsultaChacara.txt", "a");
        fprintf(filecliente, "%s %s %s %s %s %lld %s %s %lld\n", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], cpf[linha], &dataagen[linha], &hrcon[linha], valorc[linha]);
        fclose(filecliente);

        //Reseta o valor da variavÃ©l caso o looping seja efetuado
        contadorantigo = 0;
        resultado = 0;

        //LÃª o Contador no Banco de Dados
        FILE* filecontadorcliente;
        filecontadorcliente = fopen("ContadorConsultaChacara.txt", "r");
        fscanf(filecontadorcliente, "%d", &contadorantigo);
        fclose(filecontadorcliente);

        //Salva o contador no banco de dados
        resultado = contadorantigo + 1;
        filecontadorcliente = fopen("ContadorConsultaChacara.txt", "w");
        fprintf(filecontadorcliente, "%d", resultado);
        fclose(filecontadorcliente);

        //OpÃ§Ãµes
        printf("\nDigite 1 para continuar dando agendando, 8 para voltar ao menu ou 9 para sair: ");
        scanf("%d", &op);
        linha++;
        if(op==8){
            menuchacara();
        }
        if(op==9){
            exit(0);
        }
    }while(op==1);

}

void agenpesquisachacara(){
    system("cls");
    long long int cpfpesquisa;
    int contadorpesquisa;
    static int i;
    static int linha;

    //Abre Banco de Dados Cliente
    FILE* filecliente;
    filecliente = fopen("ConsultaChacara.txt", "r");

    //Abre e armazena contador
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorConsultaChacara.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorpesquisa);
    fclose(filecontadorcliente);

    //Recebe CPF para Pesquisa
    printf("\nDigite o CPF: ");
    scanf("%lld", &cpfpesquisa);

    //LÃª o banco de dados atÃ© encontrar o CPF pesquisado
    for(i = 0; i < contadorpesquisa; i++)
    {
        fscanf(filecliente, "%s %s %s %s %s %lld %s %s %lld", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], &cpf[linha], &dataagen[linha], &hrcon[linha], &valorc[linha]);

        //Se o CPF pesquisado constar no Banco de Dados o resgistro Ã© exibido
        if(cpfpesquisa == cpf[linha])
        {
            printf("\nNome: %s \nSobrenome: %s \nEmail: %s \nEspecialidade Médica: %s \nNome e Sobrenome do médico: %s \nCPF: %lld \nData da Consulta: %s \nHora da Consulta: %s \nValor da Consulta: R$ %lld", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], cpf[linha], &dataagen[linha], &hrcon[linha], valorc[linha]);
            printf("\nDigite 1 para continuar pesquisando, 8 para voltar ao menu ou 9 para sair: ");
            scanf("%d", &op);
            //OpÃ§Ãµes
            if(op==1)
            {
                agenpesquisachacara();
            }
            
            if(op==8)
            {
                menuchacara();
            }
            if(op==9)
            {
                exit(0);
            }
            if(op!=8,9)
            {
                menuchacara();
            }
        }
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    if(op==8)
    {
        menuchacara();
    }
    if(op==9)
    {
        exit(0);
    }
    if(op!=8,9)
    {
        menuchacara();
    }
    exit(0);
}

void exibirconsultachacara(){
    system("cls");
    static int linha;
    int i;
    int contadorantigo;

    //Abre os Cadastros dos Clientes
    FILE* filecliente;
    filecliente = fopen("ConsultaChacara.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorConsultaChacara.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorantigo);
    fclose(filecontadorcliente);

    //Exibe a lista de Clientes
    printf("\n----Lista de Consultas marcadas----\n");
    for(i = 0; i < contadorantigo; i++){
        fscanf(filecliente, "%s %s %s %s %s %lld %s %s %lld", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], &cpf[linha], &dataagen[linha], &hrcon[linha], &valorc[linha]);
        printf("\nNome: %s \nSobrenome: %s \nEmail: %s \nEspecialidade Médica: %s \nNome e Sobrenome do médico: %s \nCPF: %lld \nData da Consulta: %s \nHora da Consulta: %s \nValor da Consulta: R$ %lld\n", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], cpf[linha], &dataagen[linha], &hrcon[linha], valorc[linha]);
        linha++;
    }
    fclose(filecliente);

    //OpÃ§Ãµes
    printf("\nDigite 8 para voltar ao Menu ou 9 para Sair: ");
    scanf("%d", &op);
    if(op==8){
        menuchacara();
    }
    if(op==9){
        exit(0);
    }
    if(op!=8,9)
    {
        menuchacara();
    }
    exit(0);
}

void cancelamentoconsultachacara(){
    system("cls");
    long long int deletarcpf;
    int contadorantigo;
    int contadornovo=0;
    int i;
    static int linha;

    //Recebe o CPF que deseja excluir
    printf("\nDigite o CPF do Paciente: ");
    scanf("%lld", &deletarcpf);

    //Abre o resgistro de clientes
    FILE* filecliente = fopen("ConsultaChacara.txt", "r");

    //abre e pega o contador de clientes
    FILE* filecontadorlciente = fopen("ContadorConsultaChacara.txt", "r");
    fscanf(filecontadorlciente, "%d", &contadorantigo);
    fclose(filecontadorlciente);

    //Faz um looping ate encontrar no banco de dados o CPF digitado
    for(i = 0; i < contadorantigo; i++)
    {
        fscanf(filecliente, "%s %s %s %s %s %lld %s %s %lld", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], &cpf[linha], &dataagen[linha], &hrcon[linha], &valorc[linha]);

        //Se o CPF Ã© encontrado mostra os dados do Cliente
        if(deletarcpf == cpf[linha])
        {
            fclose(filecliente);

            //Mostra os dados do Cliente
            printf("\nDados de %s\n", &nome[linha]);
            printf("\nNome: %s \nSobrenome: %s \nEmail: %s \nEspecialidade Médica: %s \nNome e Sobrenome do médico: %s \nCPF: %lld \nData da Consulta: %s \nHora da Consulta: %s \nValor da Consulta: R$ %lld\n", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], cpf[linha], &dataagen[linha], &hrcon[linha], valorc[linha]);

            //Pergunta se deseja realmente excluir aquele CPF
            printf("\nDeseja deletar o cadastro de %s? Digite 1 para SIM e 2 para NÃO: ", &nome[linha]);
            scanf("%d", &op);

            if(op==1)
            {
                //Cria um novo arquivo txt para colocar os dados dos clientes exceto os dados do CPF que foi excluido
                FILE* filenew = fopen("new.txt", "a");

                //Reabre o registro de clientes para nova utilizaÃ§Ã£o
                filecliente = fopen("ConsultaChacara.txt", "r");

                for(i = 0; i < contadorantigo; i++)
                {
                    //LÃª os dados do registro de clientes
                    fscanf(filecliente, "%s %s %s %s %s %lld %s %s %lld", &nome[i], &sbnome[i], &email[i], &espmedic[i], &nmsb[i], &cpf[i], &dataagen[i], &hrcon[i], &valorc[i]);

                    if(cpf[i] != deletarcpf)
                    {
                        //Guarda os dados dos clientes que restaram no novo banco de dados
                        fprintf(filenew, "%s %s %s %s %s %lld %s %s %lld\n", &nome[i], &sbnome[i], &email[i], &espmedic[i], &nmsb[i], cpf[i], &dataagen[i], &hrcon[i], valorc[i]);
                    }
                }
                fclose(filecliente);
                fclose(filenew);

                //Registra o novo valor do contador de clientes no banco de dados
                contadornovo = contadorantigo - 1;
                FILE* filecontadorlciente = fopen("ContadorConsultaChacara.txt", "w");
                fprintf(filecontadorlciente, "%d", contadornovo);
                fclose(filecontadorlciente);


                //ExcluÃ­ o antigo banco de dados
                remove("ConsultaChacara.txt");


                //Altera o nome do novo banco de dados para o nome antigo
                rename("new.txt", "ConsultaChacara.txt");


                //opÃ§Ãµes
                printf("\nDigite 8 para retornar ao menu ou 9 para sair: ");
                scanf("%d", &op);
                if(op==8)
                {
                    menuchacara();
                }
                if(op==9)
                {
                    exit(0);
                }
                if(op!=8,9)
                {
                    menuchacara();
                }
            } 
            if(op!=1)
            {
                menuchacara();
            }    
        }
        linha++;
    }
    fclose(filecliente);  
    menuchacara();  
}

void faturamentochacara(){
    system("cls");
    static int linha;
    int i;
    int contadorantigo;


    //Abre os Cadastros dos Clientes
    FILE* filecliente;
    filecliente = fopen("ConsultaChacara.txt", "r");

    //LÃª o Contador no Banco de Dados
    FILE* filecontadorcliente;
    filecontadorcliente = fopen("ContadorConsultaChacara.txt", "r");
    fscanf(filecontadorcliente, "%d", &contadorantigo);
    fclose(filecontadorcliente);

    //Exibe a lista de Clientes
    printf("\n----Lista de Consultas marcadas----\n");
    for(i = 0; i < contadorantigo; i++){
        fscanf(filecliente, "%s %s %s %s %s %lld %s %s %lld", &nome[linha], &sbnome[linha], &email[linha], &espmedic[linha], &nmsb[linha], &cpf[linha], &dataagen[linha], &hrcon[linha], &valorc[linha]);
        printf("\nData da consulta: %s \nValor da Consulta: R$ %lld\n", &dataagen[linha], valorc[linha]);
        linha++;
        fflush(stdin);
    }
    fclose(filecliente);
	
	
    //OpÃ§Ãµes
    printf("\nDigite [1] para calcular o Faturamento ou [8] para voltar ao Menu ou [9] para Sair: ");
    scanf("%d", &op);
    if (op==1){
    	calculadora();
	}
    if(op==8){
        menugeral();
    }
    if(op==9){
        exit(0);
    }
    if(op!=8,9)
    {
        menugeral();
    }
    exit(0);
}
