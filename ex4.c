/*VARIABLES:
    a:reel
    b:reel
    somme:reel
    moyenne:reel
  DEBUT
    AFFICHER("Entrez la valeur d'un nombre réel:)
    LIRE(a)
    AFFICHER("Entrez la valeur d'un nombre réel:)
    LIRE(b)
    somme<-a+b
    AFFICHER("Somme=",somme)
    moyenne<-somme/2
    AFFICHER("Moyenne=",moyenne)
  FIN*/
#include<stdio.h>
void recup(float *a,float *b);
float s(float a,float b);
float m(float a,float b);
void affichage(float c,float d);
void recup(float *a,float *b)
{
  printf("Entrez la valeur d'un nombre réel:");
  scanf("%f",a);
  printf("Entrez la valeur d'un nombre réel:");
  scanf("%f",b);
}
float s(float a,float b)
{
  float somme;
  somme=a+b;
  return(somme);
}
float m(float a,float b)
{
  float moyenne;
  moyenne=(a+b)/2;
  return(moyenne);
}
void affichage(float c,float d)
{
  printf("Somme=%f\n",c);
  printf("Moyenne=%f\n",d);
  }
int main()
{
  float a,b,c,d;
  recup(&a,&b);
  c=s(a,b);
  d=m(a,b);
  affichage(c,d);
  return(0);
}
