/* Questão 1: Um condomínio quer monitorar o consumo de
água de cada morador. Escreva um programa que
leia o consumo mensal de água (em m³) de 5
moradores. Para cada morador, informe se o
consumo está dentro da média (até 20 m³) ou
acima. Ao final, mostre o consumo médio geral. */

#include <stdio.h> 

int main(void) {
    
    float morador_1 = 0;
    float morador_2 = 0;
    float morador_3 = 0;
    float morador_4 = 0;
    float morador_5 = 0;
    
    printf("Digite o consumo do 1° morador: ");
    scanf("%f", &morador_1);
    
    if (morador_1 <= 20) {
        printf("O consumo do morador 1: %f está na média\n", morador_1);
    } else { 
        printf("O consumo do morador 1: %f está acima da média\n", morador_1);
    }
    
    
    printf("Digite o consumo do 2° morador: ");
    scanf("%f", &morador_2);
    
    if (morador_2 <= 20) {
        printf("O consumo do morador 2: %f está na média\n", morador_2);
    } else { 
        printf("O consumo do morador 2: %f está acima da média\n", morador_2);
    }
    
    
    printf("Digite o consumo do 3° morador: ");
    scanf("%f", &morador_3);
    
    if (morador_3 <= 20) {
        printf("O consumo do morador 3: %f está na média\n", morador_3);
    } else { 
        printf("O consumo do morador 3: %f está acima da média\n", morador_3);
    }
    
    
    printf("Digite o consumo do 4° morador: ");
    scanf("%f", &morador_4);
    
    if (morador_4 <= 20) {
        printf("O consumo do morador 4: %f está na média\n", morador_4);
    } else { 
        printf("O consumo do morador 4: %f está acima da média\n", morador_4);
    }
    
    
    printf("Digite o consumo do 5° morador: ");
    scanf("%f", &morador_5);
    
    if (morador_5 <= 20) {
        printf("O consumo do morador 5: %f está na média\n", morador_5);
    } else { 
        printf("O consumo do morador 5: %f está acima da média\n", morador_5);
    }
    
    float consumo_medio_geral = (morador_1 + morador_2 + morador_3 + morador_4 + morador_5) / 5;
    
    printf("O consumo médio geral de todos os moradores é: %f \n", consumo_medio_geral);
    
    return 0;
    
}
