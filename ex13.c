/*VARIABLES:
    n:entiers
    i:entiers
    multi:entiers
  DEBUT
    AFFICHER("Entrez la valeur d'un entiers n:")
    LIRE(n)
    multi<-1
    POUR(i<-1,i<=n,i<-i+1)
      multi<-multi*i
    FINPOUR
    AFFICHER("La multiplication de 1 à"n"est"multi")
  FIN*/
#include<stdio.h>
void recup(int *n);
int m(int n);
void affichage(int n,int d);
void recup(int *n)
{
  printf("Entrez la valeur d'un nombre entier n:");
  scanf("%d",n);
}
int m(int n)
{
  int i,multi;
  multi=1;
  for(i=1;i<=n;i+=1)
  {
    multi*=i;
  }
  return(multi);
}
void affichage(int n,int d)
{
  printf("La multiplication de 1 à %d est %d\n",n,d);
}
int main()
{
  int n,d;
  recup(&n);
  d=m(n);
  affichage(n,d);
  return(0);
}
  
