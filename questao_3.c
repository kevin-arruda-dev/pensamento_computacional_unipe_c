/* Questão 3: Uma loja quer saber a nota média do
atendimento dos clientes.

Enunciado: Um sistema deve ler a nota de atendimento (de 0 a
10) de 10 clientes e calcular a média geral. Se a
média for menor que 7, deve exibir uma
mensagem de alerta. */

#include <stdio.h> 

int main(void) {
    
    int nota_cliente_1 = 0;
    int nota_cliente_2 = 0;
    int nota_cliente_3 = 0;
    int nota_cliente_4 = 0;
    int nota_cliente_5 = 0;
    int nota_cliente_6 = 0;
    int nota_cliente_7 = 0;
    int nota_cliente_8 = 0;
    int nota_cliente_9 = 0;
    int nota_cliente_10 = 0;
    
    printf("Digite a nota de atendimento do cliente 1: ");
    scanf("%d", &nota_cliente_1);
   
    printf("Digite a nota de atendimento do cliente 2: \n");
    scanf("%d", &nota_cliente_2);
   
    printf("Digite a nota de atendimento do cliente 3: \n");
    scanf("%d", &nota_cliente_3);
   
    printf("Digite a nota de atendimento do cliente 4: \n");
    scanf("%d", &nota_cliente_4);
   
    printf("Digite a nota de atendimento do cliente 5: \n");
    scanf("%d", &nota_cliente_5);
   
    printf("Digite a nota de atendimento do cliente 6: \n");
    scanf("%d", &nota_cliente_6);
   
    printf("Digite a nota de atendimento do cliente 7: \n");
    scanf("%d", &nota_cliente_7);
   
    printf("Digite a nota de atendimento do cliente 8: \n");
    scanf("%d", &nota_cliente_8);
   
    printf("Digite a nota de atendimento do cliente 9: \n");
    scanf("%d", &nota_cliente_9);
   
    printf("Digite a nota de atendimento do cliente 10: \n");
    scanf("%d", &nota_cliente_10);
    
    int media_geral = (nota_cliente_1 + nota_cliente_2 + nota_cliente_3 + nota_cliente_4 + nota_cliente_5 + nota_cliente_6 + nota_cliente_7 + nota_cliente_8 + nota_cliente_9 + nota_cliente_10) / 10;
   
    printf("A média geral é de: %d \n", media_geral);
   
    if (media_geral < 7) {
       printf("Se a média calculada foi de %d, logo é menor que 7! \n", media_geral);
   }
   
    return 0;
}