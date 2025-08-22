#include <stdio.h>

int main(){

    //Definição de variáveis para o gerenciamento de inventário
    char ProdutoA[30] = "Produto A";
    char produtoB[30] = "Produto B";
    char Opcao;

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 100;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA, valorTotalB;

    int resultadoA, resultadoB;

    //Título do programa
    printf("================================\n");
    printf("Gerenciamento de Inventário\n");
    printf("================================\n");
    printf("\n");
    printf("Selecione o que deseja fazer:\n");
    printf("1. Exibir inventário\n");
    printf("2. Verificar estoque mínimo\n");
    printf("3. Comparar valores totais dos estoques em R$\n");
    printf("4. Sair\n");
    printf("\n");
    scanf(" %c", &Opcao);
    printf("\n");

    //COMMIT DE LIMPAR A TELA AQUI (FUNÇÃO system("clear") / system("cls") NO FINAL DO PROGRAMA)
    
    switch (Opcao) {
        case '1':
            limparTela();
            printf("Exibindo inventário...\n");
            printf("\n");
            //Exibição do inventário
            printf("O produto %s tem %u unidades em estoque e seu valor unitário é de R$ %.2f.\n", ProdutoA, estoqueA, valorA);
            printf("O produto %s tem %u unidades em estoque e seu valor unitário é de R$ %.2f.\n", produtoB, estoqueB, valorB);
            
            break;

        case '2':
            limparTela();
            printf("Verificando estoque mínimo...\n");
            printf("\n");
            //Comparação de estoque com o valor mínimo
            if (estoqueA < estoqueMinimoA) {
                printf("O estoque do %s está abaixo do limite mínimo.\n", ProdutoA);
            }
            else {
                printf("O estoque do %s está dentro do limite mínimo.\n", ProdutoA);
            }
            if (estoqueB < estoqueMinimoB) {
                printf("O estoque do %s está abaixo do limite mínimo.\n", produtoB);
            }
            else {
                printf("O estoque do %s está dentro do limite mínimo.\n", produtoB);
            }

            break;

        case '3':
            limparTela();
            printf("Verificando valores totais dos estoques...\n");
            printf("\n");
            //Comparação de valores totais
            valorTotalA = estoqueA * valorA;
            valorTotalB = estoqueB * valorB;
            printf("\n");
            printf("O valor total do estoque de %s é R$ %.2f.\n", ProdutoA, valorTotalA);
            printf("O valor total do estoque de %s é R$ %.2f.\n ", produtoB, valorTotalB);
            printf("\n");
            printf("Comparando os valores totais dos estoques:\n");
            printf("\n");
            if (valorTotalA > valorTotalB) {
                printf("O valor total do estoque de %s é maior que o de %s.\n", ProdutoA, produtoB);
                printf("A diferença é de R$ %.2f.\n", valorTotalA - valorTotalB);
            }
            else if (valorTotalA < valorTotalB) {
                printf("O valor total do estoque de %s é menor que o de %s.\n", ProdutoA, produtoB);
                printf("A diferença é de R$ %.2f.\n", valorTotalB - valorTotalA);
            }
            else {
                printf("Os valores totais dos estoques de %s e %s são iguais.\n", ProdutoA, produtoB);
            }

            break;

        case '4':
            limparTela();
            printf("Saindo do programa...\n");
            return 0;
        default:
            printf("Opção inválida. Tente novamente.\n");
            return 1;
    }

    printf("\n");
    printf("Fim do gerenciamento de inventário.\n");

    return 0;
}

void limparTela() {
    // Função para limpar a tela
        system("clear || cls");
}