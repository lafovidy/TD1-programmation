/*VARIABLES:
    a:reel
    b:reel
    c:reel
    max:reel
  DEBUT
    AFFICHER("Entrez la valeur d'un nombre a:")
    LIRE(a)
    AFFICHER("Entrez la valeur d'un nombre b:")
    LIRE(b)
    AFFICHER("Entrez la valeur d'un nombre c:")
    LIRE(c)
    max<-a
    SI(b>max)ALORS
      max<-b
    FINSI
    SI(c>max)ALORS
      max<-c
    FINSI
    AFFICHER("La valeur maximum est max=",max)
  FIN*/
#include<stdio.h>
void recup(float *a,float *b,float *c);
float m(float a,float b,float c);
void affichage(float d);
void recup(float *a,float *b,float *c)
{
  printf("Entrez la valeur d'un nombre a:");
  scanf("%f",a);
  printf("Entrez la valeur d'un nombre b:");
  scanf("%f",b);
  printf("Entrez la valeur d'un nombre c:");
  scanf("%f",c);
}
float m(float a,float b,float c)
{
  float max;
  max=a;
  if(b>max)
  {
    max=b;
  }
  if(c>max)
  {
    max=c;
  }
  return(max);
}
void affichage(float d)
{
  printf("La valeur maximum est max=%f\n",d);
}
int main()
{
  float a,b,c,d;
  recup(&a,&b,&c);
  d=m(a,b,c);
  affichage(d);
  return(0);
}
