/*VARIABLES
    a:entiers
    b:entiers
    r:entiers
  DEBUT
    AFFICHER("Entrez la valeur d'un nombre entiers a:")
    LIRE(a)
    AFFICHER("Entrez la valeur d'un nombre entiers b:")
    LIRE(b)
    r<-amodb
    TANTQUE(r!=0)
      a<-b
      b<-r
      r<-amodb
    FINTANTQUE
    AFFICHER("PGCD=",b)
  FIN*/
#include<stdio.h>
void recup(int *a,int *b);
int pgcd(int a,int b);
void affichage(int a,int b,int d);
void recup(int *a,int *b)
{
  printf("Entrez la valeur d'un nombre entiers a:");
  scanf("%d",a);
  printf("Entrez la valeur d'un nombre entiers b:");
  scanf("%d",b);
}
int pgcd(int a,int b)
{
  int r;
  r=a%b;
  while(r!=0)
  {
    a=b;
    b=r;
    r=a%b;
  }
  return(b);
}
void affichage(int a,int b,int d)
{
  printf("PGCD(%d,%d)=%d\n",a,b,d);
}
int main()
{
  int d,a,b;
  recup(&a,&b);
  d=pgcd(a,b);
  affichage(a,b,d);
  return(0);
}

  
