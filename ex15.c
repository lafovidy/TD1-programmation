/*VARIABLES:
    n:entiers
    i:entiers
    somme:entiers
  DEBUT
    AFFICHER("Entrez la valeur d'un nombre entier n:")
    LIRE(n)
    somme<-0
    POUR(i<-0,i<=n,i<-i+1)
      somme<-somme+10^i
    FINPOUR
    AFFICHER("Somme=",somme)
  FIN*/
#include<stdio.h>
#include<math.h>
void recup(int *n);
int s(int n);
void affichage(int d);
void recup(int *n)
{
  printf("Entrez la valeur d'un nombre entier n:");
  scanf("%d",n);
}
int s(int n)
{
  int somme,i;
  somme=0;
  for(i=0;i<=n;i+=1)
  {
    somme+=pow(10,i);
  }
  return(somme);
}
void affichage(int d)
{
  printf("somme=%d\n",d);
}
int main()
{
  int d,n;
  recup(&n);
  d=s(n);
  affichage(d);
  return(0);
}

