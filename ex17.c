/*VARIABLES:
    n:entiers
    i:entiers
    somme:reel
    f:entiers
  DEBUT
    AFFICHER("Entrez la valeur d'un nombre entiers n:")
    LIRE(n)
    f<-1
    somme<-0
    POUR(i<-1,i<=n,i<-i+1)
      f<-f*i
      somme<-somme+(1/f)
    FINPOUR
    AFFICHER("Somme=",somme)
  FIN*/
#include<stdio.h>
void recup(int *n);
float s(int n);
void affichage(float d);
void recup(int *n)
{
  printf("Entrez la valeur d'un nombre entiers n:");
  scanf("%d",n);
}
float s(int n)
{
  float f,somme,i;
  f=1;
  somme=0;
  for(i=1;i<=n;i+=1)
  {
    f*=i;
    somme+=(1/f);
  }
  return(somme);
}
void affichage(float d)
{
  printf("Somme=%f",d);
}
int main()
{
  int n;
  float d;
  recup(&n);
  d=s(n);
  affichage(d);
  return(0);
}

