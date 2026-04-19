/*VARIABLES:
    note1:reel
    note2:reel
    coef2:reel
    coef1:reel
    moyenne:reel
  DEBUT
    AFFICHER("Entrez la valeur de votre première note:")
    LIRE(note1)
    AFFICHER("Entrez son coefficient:")
    LIRE(coef1)
    AFFICHER("Entrez la valeur de votre deuxième note:")
    LIRE(note2)
    AFFICHER("Entrez son coefficient:")
    LIRE(coef2)
    moyenne<-((note1*coef1+note2*coef2)/(coef1+coef2))
    AFFICHER("Moyenne=",moyenne)
  FIN*/
#include<stdio.h>
void recup(float  *note1,float *note2,float *coef1,float *coef2);
float m(float note1,float note2,float coef1,float coef2);
void affichage(float c);
void recup(float *note1,float *note2,float *coef1,float *coef2)
{
  printf("Entrez la valeur de la première note:");
  scanf("%f",note1);
  printf("Entrez la valeur de son coefficient:");
  scanf("%f",coef1);
  printf("Entrez la valeur de la deuxième note:");
  scanf("%f",note2);
  printf("Entrez la valeur de son coefficient:");
  scanf("%f",coef2);
}
float m(float note1,float note2,float coef1,float coef2)
{
  float moyenne;
  moyenne=((note1*coef1)+(note2*coef2))/(coef1+coef2);
  return(moyenne);
}
void affichage(float c)
{
  printf("Moyenne=%f\n",c);
}
int main()
{
  float note1,note2,coef1,coef2,c;
  recup(&note1,&note2,&coef1,&coef2);
  c=m(note1,note2,coef1,coef2);
  affichage(c);
  return(0);
}
  
