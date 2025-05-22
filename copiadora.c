
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float escolha_servico() {
    char servico[4];
    float valor_servico = 0.0;

    while (1) {
        printf("Entre com o tipo de serviço desejado\n");
        printf("DIG - Digitalização\n");
        printf("ICO - Impressão Colorida\n");
        printf("IPB - Impressão Preto e Branco\n");
        printf("FOT - Fotocópia\n");
        printf(">>> ");
        scanf("%s", servico);

        for (int i = 0; servico[i]; i++) {
            servico[i] = toupper(servico[i]);
        }

        if (strcmp(servico, "DIG") == 0) {
            valor_servico = 1.10;
            break;
        } else if (strcmp(servico, "ICO") == 0) {
            valor_servico = 1.00;
            break;
        } else if (strcmp(servico, "IPB") == 0) {
            valor_servico = 0.40;
            break;
        } else if (strcmp(servico, "FOT") == 0) {
            valor_servico = 0.20;
            break;
        } else {
            printf("Escolha inválida, entre com o tipo do serviço novamente\n\n");
        }
    }

    return valor_servico;
}

float num_pagina() {
    int numero_paginas;

    while (1) {
        printf("Entre com o número de páginas: ");
        if (scanf("%d", &numero_paginas) != 1) {
            printf("Você digitou uma palavra, por favor envie um número.\n\n");
            while(getchar() != '\n'); // limpa o buffer
            continue;
        }

        if (numero_paginas >= 20000) {
            printf("Não aceitamos tantas páginas de uma vez.\n");
            printf("Por favor, entre com o número de páginas novamente.\n\n");
            continue;
        } else if (numero_paginas >= 2000) {
            return numero_paginas * 0.75;
        } else if (numero_paginas >= 200) {
            return numero_paginas * 0.80;
        } else if (numero_paginas >= 20) {
            return numero_paginas * 0.85;
        }

        return numero_paginas;
    }
}

float servico_extra() {
    int escolha;
    float valor_extra = 0.0;

    while (1) {
        printf("Deseja adicionar mais algum serviço?\n");
        printf("1 - Encadernação Simples\n");
        printf("2 - Encadernação Capa Dura\n");
        printf("0 - Não desejo mais nada\n");
        printf(">>> ");
        if (scanf("%d", &escolha) != 1) {
            printf("Entrada inválida.\n\n");
            while(getchar() != '\n');
            continue;
        }

        if (escolha == 0) {
            valor_extra = 0.00;
            break;
        } else if (escolha == 1) {
            valor_extra = 15.00;
            break;
        } else if (escolha == 2) {
            valor_extra = 40.00;
            break;
        } else {
            printf("Escolha inválida, entre com o tipo do serviço extra novamente\n\n");
        }
    }

    return valor_extra;
}

int main() {
    printf("Bem-vindo a Copiadora da Maria Eduarda Bernini\n\n");

    float valor_servico = escolha_servico();
    float quantidade_paginas = num_pagina();
    float valor_extra = servico_extra();

    float preco_total = (valor_servico * quantidade_paginas) + valor_extra;

    printf("Total: R$ %.2f (serviço: %.2f * páginas: %.2f + extra: %.2f)\n",
           preco_total, valor_servico, quantidade_paginas, valor_extra);

    return 0;
}
