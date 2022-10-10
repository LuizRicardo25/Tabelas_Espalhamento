/******************************************************************************

Operações com Tabelas de Espalhamento ou Hash
Espalhamento com base no cálculo de endereço.
Algoritmo criado utilizando três subconjuntos representados por vetores de tamanhos pré definidos.
Modelo de algoritmo estruturado, proporcionando maior eficiencia das buscas, porém ainda com alto 
consumo de memória devido a estrutura de vetores pré definida.

Autor: Luiz Ricardo Mantovani da Silva
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define  MAX 100

int cont, op;
int lista[MAX];
int sub1[MAX],sub2[MAX],sub3[MAX];


int main()

{
    
//menu - função sem retorno onde foi criada a estrutura do menu
   void menu(){
   printf("Escolha a opção: \n (1) Inserir \n (2) Remover \n (3) Buscar \n (4) Exibir \n (5) Sair \n");
   scanf("%d", &op);
   };
   
   //chamando a função menu();
   menu();
   
   // laço criado para controle de escolhas das opções do menu.
   while (op!=5){
       //
      if (op==1){
        for (int i=0; i<100; i++){
           int var = rand () %100;
           lista[i]=var;
           //subconjunto 1 (sub1[])- para valores < menores que 30.
           if (var<30){
               sub1[i]=var;
               printf ("posição %d - valor = %d \n",i,sub1[i]);
           }
           //subconjunto 2 (sub2[]) - para valores <=30 e valores <50 --(<=30 x < 50). 
           if (var>=30 && var<50){
               sub2[i]=var;
               printf ("posição %d - valor = %d \n",i,sub2[i]);
           }
           //subconjunto 3 (sub3[]) - para valores >=50. 
           if (var>=50){
               sub3[i]=var;
               printf ("posição %d - valor = %d \n",i,sub3[i]);
           }
        }
        menu();
      } 
      
      //trecho de programa criado para remover valores nas tabelas
      if (op==2){
          int var;
          printf("Digite o valor que você deseja remover \n");
          scanf("%d", &var);
          
          for (int i=0; i<100; i++){
           //subconjunto 1 (sub1[])- para valores < menores que 30.
           if (var<30){
               if (sub1[i]==var) {
                   sub1[i]=0;
               }
           }
           //subconjunto 2 (sub2[]) - para valores <=30 e valores <50 --(<=30 x < 50). 
           if (var>=30 && var<50){
               if (sub2[i]==var) {
                   sub2[i]=0;
               }
           }
           //subconjunto 3 (sub3[]) - para valores >=50. 
           if (var>=50){
               if (sub3[i]==var) {
                   sub3[i]=0;
               }
           }
        }
      }
      
      
      //trecho criado para efetuar buscas nas tabelas
      if (op==3){
          int var;
          printf("Digite o valor que deseja buscar: \n");
          scanf ("%d", &var);
          
          for (int i=0; i<100; i++){
           //subconjunto 1 (sub1[])- para valores < menores que 30.
           if (var<30){
               if (sub1[i]==var) {
                   printf("Valor Encontrado \n");
                   menu();
                   i=100;
               }
           }
           //subconjunto 2 (sub2[]) - para valores <=30 e valores <50 --(<=30 x < 50). 
           if (var>=30 && var<50){
               if (sub2[i]==var) {
                   printf("Valor Encontrado \n");
                   menu();
                   i=100;
               }
           }
           //subconjunto 3 (sub3[]) - para valores >=50. 
           if (var>=50){
               if (sub3[i]==var) {
                   printf("Valor Encontrado \n");
                   menu();
                   i=100;
               }
           }
           
        }
      }
      
      //Exibição dos valores da tabela de espalhamento
      if (op==4){
          //printf("teste");
          for (int i=0; i<100; i++){
           //subconjunto 1 (sub1[])- para valores < menores que 30.
           
           if (sub1[i]<30 && sub1[i]>0){
                   printf("Valor: %d \n",sub1[i]);
           }
           //subconjunto 2 (sub2[]) - para valores <=30 e valores <50 --(<=30 x < 50). 
           if (sub2[i]>=30 && sub2[i]<50){
               printf("Valor: %d \n",sub2[i]);
           }
           //subconjunto 3 (sub3[]) - para valores >=50. 
           if (sub3[i]>=50){
              printf("Valor: %d \n",sub3[i]);
           }
        }
         //menu(); 
      }
      menu();
   }
   
    return 0;
}








