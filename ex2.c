/*VARIABLES:
    a:reel
    b:reel
  DEBUT
    AFFICHER("Entrez un nombre réel: ")
    LIRE(a)
    AFFICHER("Entrez un nombre réel: ")
    LIRE(b)
    SI((a>0ETb>0)OU(a<0ETb<0))ALORS
      AFFICHER("Produit positif")
    SINON
      AFFICHER("Produit négatif)
    FINSI
  FIN*/
#include<stdio.h>
float recup(float *a,float *b);
float test(float a,float b);
float recup(float *a,float *b)
{
  printf("Entrez un nombre réel: ");
  scanf("%f",a);
  printf("Entrez un nombre réel: ");
  scanf("%f",b);
}
float test(float a,float b)
{
  if((a>0&&b>0)||(a<0&&b<0))
  {
    printf("Produit positif\n");
  }
  else 
  {
    printf("Produit négatif\n");
  }
}
int main()
{
  float a,b;
  recup(&a,&b);
  test(a,b);
  return(0);
}
