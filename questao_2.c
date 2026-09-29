/* Questão 2: Um jovem quer juntar dinheiro e acompanhar o
saldo do seu cofrinho. Faça um programa que
simule um cofrinho digital. O usuário pode
adicionar moedas de R$0,50, R$1,00 ou R$2,00
quantas vezes quiser. Quando decidir parar, o
programa deve mostrar o total acumulado. */

#include <stdio.h> 

int main(void) {
    
    float cofrinho_usuario = 0;
    float contador = 0;
    
    printf("digite um valor para o cofre, caso queira parar, digite 0: ");
    
    while(1) {
        
        scanf("%f", &contador);
        
        if (contador == 0) {
            break;
        }
        
        cofrinho_usuario = cofrinho_usuario + contador;
    }
    
    printf("o valor total do cofre é: %f", cofrinho_usuario);
    
    return 0;
    
}
