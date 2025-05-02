#include <stdio.h>

// Início do Código
int main(){

    //Nome e CPF
    char nome[70], cpf[11];

    //Pede para o usuário preencher os dados
    printf("Por favor digite seu nome completo: ", nome);
    scanf(" %s[^\n]", nome);

    printf("Por favor digite seu CPF (somente numeros): ", cpf);
    scanf("%s", cpf);

    //Boas-vindas
    printf("Ola, %s! Seja bem-vindo a Clinica Exames.\n", nome);

    // Declaração de variáveis
    int escolha=0, escolhahr=0;

    // Verifica se a escolha é de 1 a 5 e apresenta as opções
    while (escolha <1 || escolha >5) {
        printf("Escolha uma especialidade medica:\n");
        printf("1. Cardiologista\n");
        printf("2. Dermatologista\n");
        printf("3. Clinico Geral\n");
        printf("4. Neurologista\n");
        printf("5. Oftalmologista\n");
        scanf ("%d", &escolha);

        // Se a escolha não for válida, exibe mensagem de erro
        if (escolha <1 || escolha >5)
            printf ("Opcao invalida! Escolha uma opcao entre 1 e 5. \n");
    }

    // Mostrando a especialidade escolhida
    switch (escolha) {
        case 1:
            printf("Voce escolheu Cardiologista \n");
            break;
            
        case 2:
            printf("Voce escolheu Dermatologista \n");
            break;

        case 3:
            printf("Voce escolheu Clinico Geral \n");
            break;

        case 4:
            printf("Voce escolheu Neurologista \n");;
            break;

        case 5:
            printf("Voce escolheu Oftalmologista \n");
            break;

        default:
            printf("Opcao invalida! \n");
            break;

    }


// Etapa 3: Escolha da data
int escolhadata = 0;

while (escolhadata <1 || escolhadata >5) {
    printf("Escolha uma data para a consulta:\n");
    printf("1. 03/05/2025\n");
    printf("2. 04/05/2025\n");
    printf("3. 05/05/2025\n");
    printf("4. 06/05/2025\n");
    printf("5. 07/05/2025\n");
    scanf ("%d", &escolhadata);

    if (escolhadata <1 || escolhadata >5)
        printf ("Opcao invalida! Escolha uma opcao entre 1 e 5.\n");
}

// Mostrar a data escolhida
switch (escolhadata) {
    case 1:
        printf("Voce escolheu 03/05/2025\n");
        break;
    case 2:
        printf("Voce escolheu 04/05/2025\n");
        break;
    case 3:
        printf("Voce escolheu 05/05/2025\n");
        break;
    case 4:
        printf("Voce escolheu 06/05/2025\n");
        break;
    case 5:
        printf("Voce escolheu 07/05/2025\n");
        break;
}

    while (escolhahr <1 || escolhahr >5) {
        printf("Escolha um horario:\n");
        printf("1. 17:00hrs \n");
        printf("2. 18:00hrs \n");
        printf("3. 19:00hrs \n");
        printf("4. 20:00hrs \n");
        printf("5. 21:00hrs \n");
        scanf ("%d", &escolhahr);

        // Se a escolha não for válida, exibe mensagem de erro
        if (escolha <1 || escolha >5)
            printf ("Opcao invalida! Escolha uma opcao entre 1 e 5. \n");
    }

    // Mostrando o horario escolhido
    switch (escolhahr) {
        case 1:
            printf("Voce escolheu 17:00hrs \n");
            break;
            
        case 2:
            printf("Voce escolheu 18:00hrs \n");
            break;

        case 3:
            printf("Voce escolheu 19:00hrs \n");
            break;

        case 4:
            printf("Voce escolheu 20:00hrs \n");;
            break;

        case 5:
            printf("Voce escolheu 21:00hrs \n");
            break;

        default:
            printf("Opcao invalida! \n");
            break;
    }

    // Exibe mensagem de confirmação
    printf("Obrigado! Sua consulta foi agendada:\n");
    printf("- Nome: %s\n", nome);
    printf("- CPF: %s\n", cpf);
    switch (escolha) {
        case 1:
            printf("- Especialidade: Cardiologista\n");
            break;
        case 2:
            printf("- Especialidade: Dermatologista\n");
            break;
        case 3:
            printf("- Especialidade: Clinico Geral\n");
            break;
        case 4:
            printf("- Especialidade: Neurologista\n");
            break;
        case 5:
            printf("- Especialidade: Oftalmologista\n");
            break;
    }
    switch (escolhadata) {
        case 1:
            printf("- Data: 03/05/2025\n");
            break;
        case 2:
            printf("- Data: 04/05/2025\n");
            break;
        case 3:
            printf("- Data: 05/05/2025\n");
            break;
        case 4:
            printf("- Data: 06/05/2025\n");
            break;
        case 5:
            printf("- Data: 07/05/2025\n");
            break;
    }
    switch (escolhahr) {
        case 1:
            printf("- Horario: 17:00hrs\n");
            break;
        case 2:
            printf("- Horario: 18:00hrs\n");
            break;
        case 3:
            printf("- Horario: 19:00hrs\n");
            break;
        case 4:
            printf("- Horario: 20:00hrs\n");
            break;
        case 5:
            printf("- Horario: 21:00hrs\n");
            break;
    }
    printf("Agradecemos pela preferencia!\n");
    return 0;

}