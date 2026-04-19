/*VARIABLES:
    n:entiers
    i:entiers
    compteur:entiers
    d:entiers
  DEBUT
    AFFICHER("Entrez la valeur d'un entier n:")
    LIRE(n)
    d<-sqrt(n)
    POUR(i<-1,i<=d,i<-i+1)
      SI(nmodi==0)ALORS
        compteur<-compteur+1
      FINSI
    FINPOUR
    SI(compteur>2)ALORS
      AFFICHER("Nombre non premiers")
    SINON
      AFFICHER("Nombre premiers")
    FINSI
  FIN*/
#include<stdio.h>
#include<math.h>
void recup(int *n);
void test(int n);
void recup(int *n)
{
  printf("Entrez la valeur d'un nombre entier n:");
  scanf("%d",n);
}
void test(int n)
{
  int d=sqrt(n),i,compteur;
  for(i=1;i<=d;i+=1)
  {
    if(n%i==0)
    {
      compteur+=1;
    }
  }
  if(compteur>2)
  {
    printf("Nombre non premiers\n");
  }
  else
  {
    printf("Nombre premiers\n");
  }
}
int main()
{
  int n;
  recup(&n);
  test(n);
  return(0);
}
  
    
