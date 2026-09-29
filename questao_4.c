/* Questão 4: Um aplicativo quer acompanhar a meta diária
de passos de um usuário. Faça um programa que
leia a quantidade de passos dados por um usuário
a cada hora. O programa deve parar quando o
total atingir ou ultrapassar 10.000 passos e então
informar quantas horas foram necessárias. */

#include <stdio.h> 

int main(void) {
    
   int passos_totais = 0; 
   int horas = 0;
   int passos_numa_hora = 0;
   
   while (passos_totais < 10000) {
       horas++;
       
       printf("Digite os passos dados nesta hora: %d \n", horas);
       scanf("%d", &passos_numa_hora);
       
       passos_totais = passos_totais + passos_numa_hora;
   }
   
   printf("A meta de 10 mil passos foi atingida \n");
   printf("As horas necessárias para a conquista da meta foi de: %d \n", horas);
   printf("Total de passos foram de: %d \n", passos_totais);
   
   return 0;
}