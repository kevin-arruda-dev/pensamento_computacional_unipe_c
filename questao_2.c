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