/*VARIABLES:
    n:entiers
    i:entiers
    somme:entiers
  DEBUT
    AFFICHER("Entrez la valeur d'un nombre entiers n:")
    LIRE(n)
    somme<-0
    POUR(i<-1,i<=n,i<-i+1)
      somme<-somme+(1/i)
    FINPOUR
    AFFICHER("Somme=",somme)
  FIN*/
#include<stdio.h>
void recup(int *n);
float s(int n);
void affichage(float d);
void recup(int *n)
{
  printf("Entrez la valeur d'un nombre entier n:");
  scanf("%d",n);
}
float s(int n)
{
  float somme,i;
  somme=0;
  for(i=1;i<=n;i+=1)
  {
    somme+=(1/i);
  }
  return(somme);
}
void affichage(float d)
{
  printf("Somme=%f\n",d);
}
int main()
{
  float d;
  int n;
  recup(&n);
  d=s(n);
  affichage(d);
  return(0);
}

