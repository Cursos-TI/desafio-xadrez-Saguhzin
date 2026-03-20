#include <stdio.h>
#include <stdlib.h>


int main(){

//==========================================================
//     Declarando variaveis :
//==========================================================

    int t = 0;  //numero de casas torre
    int b = 0;  //numero de casas bispo
    int r = 0;  //numero de casas rainha

//==========================================================
//      TORRE
//==========================================================

   for(t ; t < 5 ; t++) //5 casas (ele começa em 0 ent precisamos parar antes do 5)
   {
     printf("Direita\n");
   }

//==========================================================
//      BISPO
// =========================================================

   while (b < 5)//5 casas :
   {
      
      printf("Cima, Direita\n");
      b++; //incremento
   }
  
//==========================================================
//RAINHA
//==========================================================

   do {

      printf("Esquerda\n");
      r++;

   } while (r < 8); //8 casas :

 return 0; 
}