#include<stdio.h>
/*
 Se imprimen 3 valores de un arreglo a través
 de aritmética de direcciones.
*/
int main () {
  int *ap;
  int nums[3][3] = {{99,88,77},
                    {66,55,44},
                    {33,22,11}};
  ap = &nums[0][0];
  // Se puede recorrer un arreglo usando solo un ciclo for
  for (int i = 0; i < 9 ; i++){
    if ((i%3)==0)
      printf("\n");
    printf("%p %d\t",(ap+i),*(ap+i)); /*imprime el valor de la direccion del elemento mostrado usando 
    el ap e imprimir el valor de la dirección del elemento mostrado usando el ap e i */
    
  }
  printf("\n");

  for (int i = 0; i < 3 ; i++){
    for(int j = 0; j< 3; j++){
      printf("%p %d\t",(ap+i*3+i),*(ap+i*3+j));
      //imprime el valor de la dirección del elemento mostrado usando el ap, i y j
    }
    printf("\n");
  }
  return 0;
}
