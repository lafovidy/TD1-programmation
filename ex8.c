/*VARIABLES:
    n:entiers
    i:entiers
  DEBUT
    AFFICHER("Entrez un nombre n:")
    LIRE(n)
    AFFICHER("Les nombre entiers de 1 à" n "sont:")
    POUR(i<-1,i<=n,i<-i+1)
      AFFICHER(i)
    FINPOUR
  FIN*/
#include<stdio.h>
void recup(int *n);
void affichage(int n);
void recup(int *n)
{
  printf("Entrez la valeur d'un nombre n:");
  scanf("%d",n);
  printf("Les nombres entiers de 1 à %d sont:",*n);
}
void affichage(int n)
{
  int i;
  for(i=1;i<n;i+=1)
  {
    printf("%d",i);
  }
  printf("\n");
}
int main()
{
  int n;
  recup(&n);
  affichage(n);
  return(0);
}
