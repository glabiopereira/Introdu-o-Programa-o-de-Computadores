#include <stdio.h>

/*
Por organização, e para evitar poluição visual, 
variáveis no cabeçalho do código, antes da função 'main':
*/

char enter, estado1, estado2, numero1[20], numero2[20], nome1[20], nome2[20];
int populacao1, populacao2, turisticos1, turisticos2;
float area1, area2, pib1, pib2;

int main(){

    //Introdução amigável para apresentação da ideia do jogo, familiarização com os controles e instruções de uso:

    printf("\n\nOlá, caro usuário. Seja bem-vindo ao Jogo Super Trunfo Países!\n(Pressione Enter)");
    scanf("%c", &enter); //Espera até que o usuário prossiga, recebendo e aceitando a informação enter.
    printf("\nPara jogar é simples! Vamos começar pelo cadastramento das cartas. Para isso, basta digitar as informações solicitadas.\nBoa sorte, e divirta-se!"); 
    scanf("%c", &enter); //Mecanismo repedido.

    printf("\nCadastramento de Cartas:\n\n"); 
    printf("Carta 1:\nDe 'A' a 'H', digite uma letra para indicar o Estado da cidade escolhida:");
    scanf("%c", &estado1);

    printf("\nDe '01' a '04', digite um número para compor, com a letra '%c', o código de cadastro da carta em questão:", estado1);
    scanf(" %s", numero1); //O espaço informa ao scanf para ignorar qualquer caractere de espaço em branco anterior

    printf("\nDigite, sem espaçamento, o nome da cidade:");
    scanf("%s", nome1);

    printf("\nDigite o número atualizado de habitantes:");
    scanf("%i", &populacao1);

    printf("\nDigite a área da cidade em kilômetros quadrados (km²):");
    scanf("%f", &area1);

    printf("\nDigite, sobre o último ano, qual foi o seu PIB (em formato numérico abreviado):");
    scanf("%f", &pib1);

    printf("\nPor fim, digite o número estimado de Pontos Turísticos:");
    scanf("%i", &turisticos1);

    printf("\n\nMuito bem, agora passaremos para as próximas cartas.\nVocê já entendeu como funciona.");
    scanf("%c", &enter); //Lê o caractere cru do buffer, que foi o \n que sobrou do Enter anterior. Repetição funcional:
    scanf("%c", &enter); //Para que o usuário só passe adiante apertando enter, por organização e pausa dinâmica.

    //Código para Segunda Carta:

    printf("\n\nCadastramento de Cartas:\n"); 
    printf("\nCarta 2:\nEstado (Letra):");
    scanf(" %c", &estado2); //O espaço informa ao scanf para ignorar qualquer caractere de espaço em branco anterior

    printf("\nCódigo Cadastral (Número):");
    scanf(" %s", numero2); //O espaço informa ao scanf para ignorar qualquer caractere de espaço em branco anterior

    printf("\nNome da cidade:");
    scanf("%s", nome2);

    printf("\nNúmero de habitantes:");
    scanf("%i", &populacao2);

    printf("\nÁrea (em km²):");
    scanf("%f", &area2);

    printf("\nPIB:");
    scanf("%f", &pib2);

    printf("\nNúmero de Pontos Turísticos:");
    scanf("%i", &turisticos2);

    //Código para exposição organizada dos dados coletados:

    printf("\n\nExcelente! Para começar essas informações já são suficientes.\nPressione 'Enter' para ver o resultado do seu trabalho:");
    scanf("%c", &enter); //Lê o caractere cru do buffer, que foi o \n que sobrou do Enter anterior. Repetição funcional:
    scanf("%c", &enter); //Para que o usuário só passe adiante apertando enter, por organização e pausa dinâmica.

    printf("\n\nCartas Cadastradas:\n"); //Exposição compactada optada, para economia de espaço e código:
    printf("\n\nCarta 1:\nEstado: %c\nCódigo Cadastral: %c%s\nNome da Cidade: %s\nPopulação: %i habitantes\nÁrea: %.2f km²\nPIB: R$ %.2f mi/bi\nNúmero de Pontos Turísticos: %i", estado1, estado1, numero1, nome1, populacao1, area1, pib1, turisticos1);
    printf("\n\nCarta 2:\nEstado: %c\nCódigo Cadastral: %c%s\nNome da Cidade: %s\nPopulação: %i habitantes\nÁrea: %.2f km²\nPIB: R$ %.2f mi/bi\nNúmero de Pontos Turísticos: %i", estado2, estado2, numero2, nome2, populacao2, area2, pib2, turisticos2);
    /*
    Além de manter a organização, não enche desnecessariamente a seção com muitas repetições 
    da mesma função "printf". Separação em duas funções, para carta 1 e carta 2, somente por organização. 
    */

    return 0; // indica ao sitema operacional que o programa terminou com sucesso

}
