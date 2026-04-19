/*VARIABLES:
    n:reel
  DEBUT
    AFFICHER("Entrez un nombre: ")
    LIRE(n)
    SI(n>0)
      AFFICHER("Nombre positif")
    SINON
      SI(n=0)
        AFFICHER("Nulle")
      SINON
        AFFICHER("Nombre négatif")
      FINSI
    FINSI
  FIN*/
#include<stdio.h>
float test(float n);
float recup(float *n);
float recup(float *n)
{
  printf("Entrez un nombre: ");
  scanf("%f",n);
}
float test(float n)
{
  if(n>0)
  {
    printf("Nombre positif\n");
  }
  else if(n==0)
  {
    printf("Nulle\n");
  }
  else
  {
    printf("Nombre négatif\n");
  }
  return(0);
}
int main()
{
  float n;
  recup(&n);
  test(n);
  return(0);
}
  
