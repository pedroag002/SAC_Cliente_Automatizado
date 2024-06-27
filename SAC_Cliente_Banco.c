#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

typedef struct{
    char data[11];
    float valor;
    char tipo[10];
} Transacaocc;

typedef struct{
    char data[11];
    float valor;
    char tipo[10];
} Transacaocp;

    void dados_pessoais() {
    int opcao;
    char email_atual[100];
    char novo_email[100];
    char end_atual[100];
    char end_novo[100];
    char agencia_atual[100];
    char agencia_nova[100];
    printf("\n---------- MENU DADOS PESSOAIS ----------\n\n");
    printf("COMO PODEMOS TE AJUDAR?\n\n");
    printf("[1] - ALTERAR E-MAIL\n");
    printf("[2] - ALTERAR ENDEREÇO\n");
    printf("[3] - ALTERAR AGÊNCIA\n");

    printf("\nESCOLHA UMA OPÇÃO:\n");
    scanf("%d", &opcao);
    while (getchar() != '\n');

    switch(opcao) {
        case 1:
            printf("SEU E-MAIL ATUAL:\n");
            fgets(email_atual, 100, stdin);
            email_atual[strcspn(email_atual, "\n")] = 0;

            printf("\nNOVO E-MAIL:\n");
            fgets(novo_email, 100, stdin);
            novo_email[strcspn(novo_email, "\n")] = 0;

            printf("\nAGUARDE UM INSTANTE...\nE-MAIL ALTERADO COM SUCESSO!\n");
            fflush(stdin);
            getchar();
            break;
        case 2:
            printf("ENDEREÇO ATUAL:\n");
            fgets(end_atual, 100, stdin);
            end_atual[strcspn(end_atual, "\n")] = 0; 

            printf("\nENDEREÇO NOVO:\n");
            fgets(end_novo, 100, stdin);
            end_novo[strcspn(end_novo, "\n")] = 0; 

            printf("\nAGUARDE UM INSTANTE...\nENDEREÇO ALTERADO COM SUCESSO!\n");
            fflush(stdin);
            getchar();
            break;
        case 3:
            printf("AGÊNCIA ATUAL:\n");
            fgets(agencia_atual, 100, stdin);
            agencia_atual[strcspn(agencia_atual, "\n")] = 0; 

            printf("\nAGÊNCIA NOVA:\n");
            fgets(agencia_nova, 100, stdin);
            agencia_nova[strcspn(agencia_nova, "\n")] = 0;

            printf("\nAGUARDE UM INSTANTE...\nAGÊNCIA ALTERADA COM SUCESSO!\n");
            fflush(stdin);
            getchar();
            break;
        default:
            printf("OPÇÃO INVÁLIDA\n");
    }
}


void saldo(){
    int opcao;
    int saldo_atual = 1000;
    printf("\n---------- MENU SALDO ----------\n\n");
    printf("[1] - QUAL É MEU SALDO?\n");
    printf("[2] - COMO VERIFICAR MEU SALDO?\n");
    printf("[3] - COMO SACAR MEU SALDO?\n");
    printf("[4] - COMO ADICIONAR SALDO?\n");
    printf("[5] - SAIR\n");

    printf("\nESCOLHA UMA OPÇÃO:\n");
    scanf("%d", &opcao);

    while(getchar() != '\n');

    switch(opcao){
        case 1:
          printf("\nSEU SALDO É R$%d,00\n", saldo_atual);
          fflush(stdin);
          getchar();
          break;
        case 2:
          printf("\nVOCÊ PODE VERIFICAR SEU SALDO ATRAVÉS DO INTERNET BANKING OU DO APLICATIVO MÓVEL.\n");
          fflush(stdin);
          getchar();
          break;
        case 3:
          printf("\nVOCÊ PODE SACAR PARTE DO SEU SALDO UTILIZANDO UM CAIXA ELETRÔNICO OU EM UMA AGÊNCIA BANCÁRIA.\n");
          fflush(stdin);
          getchar();
          break;
        case 4:
          printf("\nVOCÊ PODE RECARREGAR SEU SALDO ATRAVÉS DE TRANSFERÊNCIAS BANCÁRIAS, DEPÓSITOS OU PIX.\n");
          fflush(stdin);
          getchar();
          break; 
        case 5:
          printf("\nVOLTANDO AO MENU PRINCIPAL...\n");
          fflush(stdin);
          getchar();
          break;
        default:
          printf("\nOPÇÃO NÃO ENCONTRADA!\n");
          fflush(stdin);
          getchar();
          break;      
    }
}

void pix(){
    int opcoes;
    int saldo = 1000;

    printf("\n----------- MENU PIX -----------\n\n");
    printf("[1] - O QUE É PIX?\n");
    printf("[2] - COMO CADASTRAR UMA CHAVE PIX?\n");
    printf("[3] - VOU SER COBRADO AO USAR O PIX?\n");
    printf("[4] - QUAIS SÃO OS LIMITES DE TRANSFERÊNCIA VIA PIX?\n");
    printf("[5] - O QUE FAZER CASO O PIX SEJA ENVIADO PARA A CONTA ERRADA?\n");
    printf("[6] - POSSO PAGAR CONTAS E BOLETOS VIA PIX?\n");
    printf("[7] - É SEGURO FAZER PAGAMENTOS VIA PIX?\n");
    printf("[8] - QUANTO TEMPO LEVA PARA SER CONCLUÍDO UM PAGAMENTO VIA PIX?\n");
    printf("[9] - POSSO AGENDAR PAGAMENTOS VIA PIX?\n");
    printf("[10] - POSSO RECEBER MEU SALÁRIO VIA PIX?\n");
    printf("[11] - SAIR\n");

    printf("\nESCOLHA UMA OPÇÃO:\n");
    scanf("%d", &opcoes);

    while(getchar() != '\n');
    switch(opcoes){
        case 1:
          printf("\nPIX é um sistema de pagamento instantâneo criado pelo Banco Central do Brasil. Ele permite transferências e pagamentos em tempo real, 24 horas por dia, todos os dias do ano.\n");
          fflush(stdin);
          getchar();
          break;
        case 2:
          printf("\nVocê pode cadastrar uma chave PIX pelo aplicativo do seu banco. As chaves podem ser seu CPF/CNPJ, e-mail, número de telefone ou uma chave aleatória gerada pelo próprio sistema.\n");
          fflush(stdin);
          getchar();
          break;
        case 3:
          printf("\nPara pessoas físicas, o uso do PIX é geralmente gratuito. Para empresas, pode haver tarifas, dependendo do banco ou instituição financeira.\n");
          fflush(stdin);
          getchar();
          break;
        case 4:
          printf("\nPara pessoas físicas, o uso do PIX é geralmente gratuito. Para empresas, pode haver tarifas, dependendo do banco ou instituição financeira.\n");
          fflush(stdin);
          getchar();
          break;
        case 5:
          printf("\nSe você enviar um PIX para a conta errada, entre em contato imediatamente com o seu banco para tentar reverter a transação. A reversão depende do consentimento do destinatário.\n");
          fflush(stdin);
          getchar();
          break;
        case 6:
          printf("\nSim, você pode usar o PIX para pagar contas e boletos. Basta escanear o QR code ou inserir o código de pagamento pelo aplicativo do seu banco.\n");
          fflush(stdin);
          getchar();
          break;
        case 7:
          printf("\nSim, o PIX é seguro. Ele utiliza autenticação de dois fatores e criptografia para proteger suas transações. No entanto, é importante ficar atento a fraudes e golpes.\n");
          fflush(stdin);
          getchar();
          break;
        case 8:
          printf("\nAs transferências pelo PIX são concluídas em até 10 segundos, mas normalmente ocorrem quase instantaneamente.\n");
          fflush(stdin);
          getchar();
          break;
        case 9:
          printf("\nSim, muitos bancos permitem que você agende pagamentos pelo PIX. Verifique no aplicativo do seu banco para ver como fazer isso.\n");
          fflush(stdin);
          getchar();
          break;    
        case 10:
          printf("\nSim, você pode receber seu salário via PIX. Basta fornecer a chave PIX cadastrada (como seu CPF, e-mail, telefone ou chave aleatória) ao seu empregador.\n");
          fflush(stdin);
          getchar();
          break;
        case 11:
          printf("\nSAINDO DO MENU PIX...\n");
          fflush(stdin);
          getchar();
          break;
        default:
          printf("\nOPÇÃO INVÁLIDA!\n");
          fflush(stdin);
          getchar();
          break;                  
    }
}

void historico_transacoes(Transacaocc transacoes[], int tamanho){
    printf("\nHISTÓRICO DE TRANSAÇÕES:\n");
    for(int i = 0; i < tamanho; i++){
        printf("%s R$%.2f  %s", transacoes[i].data, transacoes[i].valor, transacoes[i].tipo);
    }
}

void conta_corrente(){
    int opcao;
    int saldo = 1000;
    int transferencia;
    int saque;
    int emprestimo;
    int contas;
    int debito_automatico;
    int limite_cartao = 2000;
    int block_cartao;

    Transacaocc transacoes[] = {
        {"01/01/2024 ", 100.00, "SAQUE\n"},
        {"02/02/2024 ", 200.00, "DEPÓSITO\n"},
        {"03/03/2024 ", 300.00, "COMPRA\n"},
        {"04/04/2024 ", 500.00, "DEPÓSITO\n"},
        {"05/05/2024 ", 50.00,  "COMPRA\n"},
    };

    int tamanho_transacoes = sizeof(transacoes) / sizeof(transacoes[0]);

    printf("\n----------- MENU CONTA CORRENTE -----------\n\n");
    printf("[1] - CONSULTAR SALDO\n");
    printf("[2] - REALIZAR TRANSFERÊNCIA\n");
    printf("[3] - REALIZAR SAQUE\n");
    printf("[4] - HISTÓRICO DE TRANSAÇÕES\n");
    printf("[5] - SOLICITAR EMPRÉSTIMO\n");
    printf("[6] - PAGAR CONTAS\n");
    printf("[7] - CONFIGURAR DÉBITO AUTOMÁTICO\n");
    printf("[8] - VERIFICAR LIMITE DO CARTÃO DE CRÉDITO\n");
    printf("[9] - BLOQUEAR CARTÃO\n");
    printf("[10] - DESBLOQUEAR CARTÃO\n");
    printf("[11] - SAIR\n");
    printf("\nESCOLHA UMA OPÇÃO ACIMA:\n");
    scanf("%d", &opcao);

    while(getchar() != '\n');
    switch(opcao){
        case 1:
          printf("\nSEU SALDO ATUAL NA CONTA CORRENTE É: R$%d,00\n", saldo);
          break;
        case 2:
          printf("\nDIGITE O VALOR DA TRANSFERÊNCIA: ");
          scanf("%d", &transferencia);
          if(saldo <= 100){
            printf("\nTRANSAFERÊNCIA REALIZADA COM SUCESSO!\n");
          }
          else{
            printf("SEU SALDO É INSUFICIENTE\n");
          }
          break;
        case 3:
          printf("\nDIGITE O VALOR DO SAQUE: ");
          scanf("%d", &saque);
          if(saque <= 1000){
            printf("SAQUE REALIZADO COM SUCESSO\n");
          }
          else{
            printf("SEU SALDO É INSUFICIENTE!\n");
          }
          break;
        case 4:
          historico_transacoes(transacoes, tamanho_transacoes);
          break;
        case 5:
            printf("ANALISANDO SEU PEDIDO DE EMPRÉSTIMO...\n");
            scanf("%d", &emprestimo);
            if(emprestimo <= 1000){
                printf("EMPRÉSTIMO NEGADO!\n");
            }
            else{
                printf("EMPRÉSTIMO SOLICITADO COM SUCESSO!\n");
            }
            break;
        case 6:
           printf("PAGANDO CONTAS...");
           scanf("%d", &contas);
           if(contas <= 1000){
            printf("CONTAS PAGAS COM SUCESSO\n");
           }
           else{
            printf("NÃO FOI POSSÍVEL PAGAR ESSA CONTA, SEU SALDO É INSUFICIENTE");
           }
           break;
        case 7:
           printf("PRIMEIRO PASSO: ABRA O APP E ACESSE SUA CONTA;\n");
           printf("SEGUNDO PASSO: SELECIONE SEU CARTÃO;\n");
           printf("TERCEIRO PASSO: CLIQUE EM \"PAGAR FATURA\";\n");
           printf("QUARTO PASSO: CLIQUE EM INCLUIR FATURA EM DÉBITO AUTOMÁTICO;\n");   
           printf("QUINTO PASSO: CONFIRA AS INFORMAÇÕES E CLIQUE EM \"CONFIRMAR\".\n");
           break;
        case 8:
           printf("SEU LIMITE DE CRÉDITO É: R$%d,00", limite_cartao);
           break;
        case 9:
          printf("OK, VAMOS LÁ\nDIGITE OS 4 ÚLTIMOS DÍGITOS DO CARTÃO\n");
          scanf("%d", &block_cartao);
          printf("CARTÃO BLOQUEADO COM SUCESSO!\n");
          break;
        case 10:
          printf("OK, VAMOS LÁ\nDIGITE OS 4 ÚLTIMOS DÍGITOS DO CARTÃO\n");
          scanf("%d", &block_cartao);
          printf("CARTÃO DESBLOQUEADO COM SUCESSO!\n");
          break;
        case 11:
          printf("SAINDO DO MENU CONTA CORRENTE\n");
          break;
        default:
          printf("OPÇÃO INVÁLIDA\n");  
                       
    }

}

void historico_transacoescp(Transacaocp transacoescp[], int tamanho){
    printf("\nHISTÓRICO DE TRANSAÇÕES:\n");
    for(int i = 0; i < tamanho; i++){
        printf("%s\tR$%.2f\t%s", transacoescp[i].data, transacoescp[i].valor, transacoescp[i].tipo);
    }
}

void conta_poupanca(){
    int opcao;
    int saldo = 1000;
    int transferencia;
    int saque;
    int emprestimo;
    int contas;
    int debito_automatico;
    int limite_cartao = 2000;
    int block_cartao;

    Transacaocp transacoes[] = {
        {"01/01/2024 ", 100.00, "SAQUE\n"},
        {"02/02/2024 ", 200.00, "DEPÓSITO\n"},
        {"03/03/2024 ", 300.00, "COMPRA\n"},
        {"04/04/2024 ", 500.00, "DEPÓSITO\n"},
        {"05/05/2024 ", 50.00,  "COMPRA\n"},
    };

    int tamanho_transacoescp = sizeof(transacoes) / sizeof(transacoes[0]);

    printf("\n----------- MENU CONTA POUPANÇA -----------\n");
    printf("[1] - CONSULTAR SALDO\n");
    printf("[2] - REALIZAR TRANSFERÊNCIA\n");
    printf("[3] - REALIZAR SAQUE\n");
    printf("[4] - HISTÓRICO DE TRANSAÇÕES\n");
    printf("[5] - SOLICITAR EMPRÉSTIMO\n");
    printf("[6] - PAGAR CONTAS\n");
    printf("[7] - CONFIGURAR DÉBITO AUTOMÁTICO\n");
    printf("[8] - VERIFICAR LIMITE DO CARTÃO DE CRÉDITO\n");
    printf("[9] - BLOQUEAR CARTÃO\n");
    printf("[10] - DESBLOQUEAR CARTÃO\n");
    printf("[11] - SAIR\n");
    printf("\nESCOLHA UMA OPÇÃO ACIMA:\n");
    scanf("%d", &opcao);

    while(getchar() != '\n');
    switch(opcao){
        case 1:
          printf("\nSEU SALDO ATUAL NA CONTA CORRENTE É: R$%d,00\n", saldo);
          break;
        case 2:
          printf("\nDIGITE O VALOR DA TRANSFERÊNCIA: ");
          scanf("%d", &transferencia);
          if(saldo <= 100){
            printf("\nTRANSAFERÊNCIA REALIZADA COM SUCESSO!\n");
          }
          else{
            printf("SEU SALDO É INSUFICIENTE\n");
          }
          break;
        case 3:
          printf("\nDIGITE O VALOR DO SAQUE: ");
          scanf("%d", &saque);
          if(saque <= 1000){
            printf("SAQUE REALIZADO COM SUCESSO\n");
          }
          else{
            printf("SEU SALDO É INSUFICIENTE!\n");
          }
          break;
        case 4:
          historico_transacoes(transacoes, tamanho_transacoescp);
          break;
        case 5:
            printf("ANALISANDO SEU PEDIDO DE EMPRÉSTIMO...\n");
            scanf("%d", &emprestimo);
            if(emprestimo <= 1000){
                printf("EMPRÉSTIMO NEGADO!\n");
            }
            else{
                printf("EMPRÉSTIMO SOLICITADO COM SUCESSO!\n");
            }
            break;
        case 6:
           printf("PAGANDO CONTAS...");
           scanf("%d", &contas);
           if(contas <= 1000){
            printf("CONTAS PAGAS COM SUCESSO\n");
           }
           else{
            printf("NÃO FOI POSSÍVEL PAGAR ESSA CONTA, SEU SALDO É INSUFICIENTE");
           }
           break;
        case 7:
           printf("PRIMEIRO PASSO: ABRA O APP E ACESSE SUA CONTA;\n");
           printf("SEGUNDO PASSO: SELECIONE SEU CARTÃO;\n");
           printf("TERCEIRO PASSO: CLIQUE EM \"PAGAR FATURA\";\n");
           printf("QUARTO PASSO: CLIQUE EM INCLUIR FATURA EM DÉBITO AUTOMÁTICO;\n");   
           printf("QUINTO PASSO: CONFIRA AS INFORMAÇÕES E CLIQUE EM \"CONFIRMAR\".\n");
           break;
        case 8:
           printf("SEU LIMITE DE CRÉDITO É: R$%d,00", limite_cartao);
           break;
        case 9:
          printf("OK, VAMOS LÁ\nDIGITE OS 4 ÚLTIMOS DÍGITOS DO CARTÃO\n");
          scanf("%d", &block_cartao);
          printf("CARTÃO BLOQUEADO COM SUCESSO!\n");
          break;
        case 10:
          printf("OK, VAMOS LÁ\nDIGITE OS 4 ÚLTIMOS DÍGITOS DO CARTÃO\n");
          scanf("%d", &block_cartao);
          printf("CARTÃO DESBLOQUEADO COM SUCESSO!\n");
          break;
        case 11:
          printf("SAINDO DO MENU CONTA CORRENTE...\n");
          break;
        default:
          printf("OPÇÃO INVÁLIDA\n");  
                       
    }

}

void senha(){
    int opcao;
    int saldo = 1000;
    int senha_atual;
    int senha_nova;
    char email[50];
    int codigo_email;

    printf("\n----------- MENU SENHA DO CLIENTE -----------\n\n");
    printf("[1] - ALTERAR SENHA\n");
    printf("[2] - RECUPERAR SENHA\n");
    printf("[3] - BLOQUEAR O ACESSO\n");
    printf("[4] - DESBLOQUEAR O ACESSO\n");
    printf("[5] - SAIR\n");
    scanf("%d", &opcao);

    while(getchar() != '\n');
    switch(opcao){
        case 1:
          printf("INSIRA SUA SENHA ATUAL:\n");
          scanf("%d", &senha_atual);
          printf("INSIRA SUA NOVA SENHA:\n");
          scanf("%d", &senha_nova);
          printf("SENHA ALTERADA COM SUCESSO!\n");
          break;
        case 2:
          printf("INSIRA SEU E-MAIL:\n");
          scanf("%s", email);
          printf("INSIRA O CÓDIGO ENVIADO PELO E-MAIL:\n");
          scanf("%d", &codigo_email);
          printf("SENHA RECUPERADA COM SUCESSO!\n");
          break;
        case 3:
          printf("INSIRA SUA SENHA:\n");
          scanf("%d", &senha_atual);
          printf("ACESSO BLOQUEADO COM SUCESSO!\n");
          break;
        case 4:;
          printf("INSIRA SUA SENHA:\n");
          scanf("%d", &senha_atual);
          printf("INSIRA SEU E-MAIL:\n");
          scanf("%s", email);
          printf("INSIRA O CÓDIGO ENVIADO PELO E-MAIL:\n");
          scanf("%d", &codigo_email);
          printf("ACESSO DESBLOQUEADO COM SUCESSO!\n");
          break;
        case 5:
          printf("SAINDO DO MENU CONTA POUPANÇA...\n");
          break;
        default: 
          printf("OPÇÃO INVÁLIDA!\n");
          break;      
        }
    }

int main(){
    setlocale(LC_ALL,"Portuguese");
    char nome_cliente[100];
    char cpf_cliente[12];
    int num_conta;
    int menu_opcoes;

    printf("\n------------ PORTAL DE DÚVIDAS ------------\n\n");
    printf("SEJA BEM-VINDO(A), VAMOS TIRAR SUAS DÚVIDAS!\n");
    printf("\nNOME COMPLETO:\n");
    scanf("%s", nome_cliente);
    fflush(stdin);
    printf("\nCPF:\n");
    scanf("%s", cpf_cliente);
    fflush(stdin);
    printf("\nNÚMERO DA CONTA:\n");
    scanf("%d", &num_conta);
    fflush(stdin);
    printf("\n----------------------------------------------\n\n");

    do{
        printf("SEJA BEM-VINDO(A) %s, COMO PODEMOS TE AJUDAR?\n\n", nome_cliente);
        printf("[1] - DADOS PESSOAIS\n");
        printf("[2] - SALDO\n");
        printf("[3] - PIX\n");
        printf("[4] - CONTA CORRENTE\n");
        printf("[5] - CONTA POUPANÇA\n");
        printf("[6] - SENHA\n");
        printf("[7] - SAIR\n");
        printf("\nESCOLHA UMA DAS OPÇÕES ACIMA:\n");
        scanf("%d", &menu_opcoes);

        switch(menu_opcoes){
            case 1:
              dados_pessoais();
              break;
            case 2:
              saldo();
              break;
            case 3:
              pix();
              break;
            case 4:
              conta_corrente();
              break;
            case 5:
              conta_poupanca();
              break;
            case 6:
              senha();
              break;
            case 7:
              printf("SAINDO...ATÉ LOGO!");
              exit(0); 
            default:
              printf("OPÇÃO NÃO ENCONTRADA!\n");
              break;          
        }
        printf("\n");

    }while(menu_opcoes != 7);

    return 0;
}
