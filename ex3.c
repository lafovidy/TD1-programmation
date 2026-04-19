/*VARIABLES:
    a:reel
    b:reel
    c:reel
    t:reel
  DEBUT
    AFFICHER("Entrez la valeur de a:")
    LIRE(a)
    AFFICHER("Entrez la valeur de b:")
    LIRE(b)
    AFFICHER("Entrez la valeur de c: ")
    LIRE(c)
    t<-a
    a<-b
    b<-c
    c<-t
    AFFICHER("a actuel:",a)
    AFFICHER("b actuel:",b)
    AFFICHER("c actuel:",c)
  FIN*/
#include<stdio.h>
void recup(float *a,float *b,float *c);
void transpo(float *a,float *b,float *c);
void affichage(float a,float b,float c);
void recup(float *a,float *b,float *c)
{
  printf("Entrez la valeur de a:");
  scanf("%f",a);
  printf("Entrez la valeur de b:");
  scanf("%f",b);
  printf("Entrez la valeur de c:");
  scanf("%f",c);
}
void transpo(float *a,float *b,float *c)
{
  float t;
  t=*a;
  *a=*b;
  *b=*c;
  *c=t;
}
void affichage(float a,float b,float c)
{
  printf("a actuel:%f\n",a);
  printf("b actuel:%f\n",b);
  printf("c actuel:%f\n",c);
}
int main()
{
  float a,b,c;
  recup(&a,&b,&c);
  transpo(&a,&b,&c);
  affichage(a,b,c);
  return(0);
}


    
