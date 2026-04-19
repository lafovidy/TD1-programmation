/*VARIABLES:
    a:reel
    b:reel
    c:reel
    d:reel
    x1:reel
    x2:reel
  DEBUT
    AFFICHER("Entrez la valeur de a:")
    LIRE(a)
    AFFICHER("Entrez la valeur de b:")
    LIRE(b)
    AFFICHER("Entrez la valeur de c:")
    LIRE(c)
    d<-b*b-4*a*c
    SI(a=0)ALORS
      x1==x2<-(-c/b)
      AFFICHER("x=",x1)
    SINON
      SI(d>0)ALORS
        x1<-(-b+sqrt(d))/(2*a)
        x2<-(-b-sqrt(d))/(2*a)
        AFFICHER("x1=",x1)
        AFFICHER("x2=",x2)
      SINON
        SI(d=0)ALORS
          x1=x2<-(-b/(2*a))
          AFFICHER("x=",x1)
        SINON
          d<-(-d)
          AFFICHER("x1=",(-b/(2*a))+(sqrt(d)/(2*a))"i")
          AFFICHER("x2=",(-b/(2*a))-(sqrt(d)/(2*a))"i")
        FINSI
      FINSI
    FINSI
  FIN*/
#include<stdio.h>
#include<math.h>
void recup(float *a,float *b,float *c);
void calcul(float a,float b,float c);
void recup(float *a,float *b,float *c)
{
  printf("Entrez la valeur de a:");
  scanf("%f",a);
  printf("Entrez la valeur de b:");
  scanf("%f",b);
  printf("Entrez la valeur de c:");
  scanf("%f",c);
}
void calcul(float a,float b,float c)
{
  float x1,x2,d,g,h;
  d=b*b-4*a*c;
  if(a==0)
  {
    x1=(-c/b);
    printf("x=%f",x1);
  }
  else if(d>0)
  {
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("x1=%f",x1);
    printf("x2=%f",x2);
  }
  else if(d==0)
  {
    x1=(-b/(2*a));
    printf("x=%f",x1);
  }
  else
  {
    d=-d;
    g=-b/(2*a);
    h=sqrt(d)/(2*a);
    printf("x1=%f+%fi",g,h);
    printf("x2=%f-%fi",g,h);
  }
}
int main()
{
  float a,b,c;
  recup(&a,&b,&c);
  calcul(a,b,c);
  return(0);
}
    
