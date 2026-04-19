/*VARIABLES:
    n:entiers
    i:entiers
    somme:entiers
  DEBUT
    AFFICHER("Entrez la valeur d'un entier n:")
    LIRE(n)
    somme<-0
    POUR(i<-1,i<=n,i<-i+1)
      somme<-somme+i
    FINPOUR
    AFFICHER(somme)
  FIN*/
#include<stdio.h>
void recup(int *n);
int s(int n);
void affichage(int d);
void recup(int *n)
{
  printf("Entrez la valeur d'un entiers n:");
  scanf("%d",n);
}
int s(int n)
{
  int somme=0,i;
  for(i=1;i<=n;i+=1)
  {
    somme+=i;
  }
  return(somme);
}
void affichage(int d)
{
  printf("Somme=%d\n",d);
}
int main()
{
  int n,d;
  recup(&n);
  d=s(n);
  affichage(d);
  return(0);
}
  
