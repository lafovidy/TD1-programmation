/*VARIABLES:
    n:entiers
    i:entiers
  DEBUT
    AFFICHER("Entrez la valeur d'un nombre n:")
    LIRE(n)
    AFFICHER("Les nombres pairs compris entre 1 et "n"sont:")
    POUR(i<-1,i<=n,i<-i+1)
      SI(imod2==0)ALORS
        AFFICHER(i)
      FINSI
    FINPOUR
  FIN*/
#include<stdio.h>
void recup(int *n);
void affichage(int n);
void recup(int *n)
{
  printf("Entrez la valeur d'un nombre n:");
  scanf("%d",n);
  printf("Les nombres pairs compris entre 1 et %d sont:",*n);
}
void affichage(int n)
{
  int i;
  for(i=1;i<n;i+=1)
  {
    if(i%2==0)
    {
      printf("%d",i);
    }
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

