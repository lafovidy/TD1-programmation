/*VARIABLES:
    n:entiers
    i:entiers
    fact:entiers
  DEBUT
    AFFICHER("Entrez la valeur d'un entiers n:")
    LIRE(n)
    fact<-1
    POUR(i<-1,i<=n,i<-i+1)
      fact<-fact*i
    FINPOUR
    AFFICHER("!"n"=",fact)
  FIN*/
#include<stdio.h>
void recup(int *n);
int f(int n);
void affichage(int n,int a);
void recup(int *n)
{
  printf("Entrez la valeur d'un entier n:");
  scanf("%d",n);
}
int f(int n)
{
  int fact,i;
  fact=1;
  for(i=1;i<=n;i+=1)
  {
    fact=fact*i;
  }
  return(fact);
}
void affichage(int n,int a)
{
  if(n<0)
  {
    printf("Impossible de calculer");
  }
  else
  {
    printf("!%d=%d\n",n,a);
  }
}
int  main()
{
  int a,n;
  recup(&n);
  a=f(n);
  affichage(n,a);
  return(0);
}
  
