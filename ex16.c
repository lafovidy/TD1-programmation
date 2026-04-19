/*VARIABLES:
    n:entiers
    i:entiers
    f:entiers
    somme:entiers
  DEBUT
    AFFICHER("Entrez la valeur d'un nombre entiers n:")
    LIRE(n)
    f<-1
    somme<-0
    POUR(i<-1,i<=n,i<-i+1)
      f<-f*i
      somme<-somme+f
    FINPOUR
    AFFICHER("Somme=",somme)
  FIN*/
#include<stdio.h>
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
  int f,i,somme;
  f=1;
  somme=0;
  for(i=1;i<=n;i+=1)
  {
    f*=i;
    somme+=f;
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

   
   
