#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct livre {
char titr[50];
char auteur[50];
float prix;
int Quant;
};
int main(){
int i,n,chiox,pos,test,teste1;
test=0;
teste1=0;
struct livre l[100];
char a[50];
do{
  printf("------------------------------------\n");
  printf("Appuezc sur 1 :ajout le information de livre\n");
  printf("Appuezc sur 2 :afficher tout les livre\n");
  printf("Appuezc sur 3:Rechercher un livre par son titre.\n");
  printf("Appuezc sur 4 :Mettre à Jour la Quantité d'un Livre\n");
  printf("Appuezc sur 5:Supprimer un Livre du Stock\n");
  printf("Appuezc sur 7:sorti\n");
  printf("----------------------------\n");
  printf("chiox=");
  scanf("%d",&chiox);
  printf("----------------------------\n");
   switch(chiox){
  case 1:printf("combien de livre ajoute:");
  scanf("%d",&n);
       for(i=0;i<n;i++){
        printf("titre:");
        scanf(" %[^\n]s",&l[i].titr);
        printf("auteur:");
        scanf(" %[^\n]s",&l[i].auteur);
        printf("pris=");
        scanf("%f",&l[i].prix);
        printf("Quantité en stock:");
        scanf("%d",&l[i].Quant);
       }
       printf("--------------------------\n");
       break;
  case 2:
    printf("afficher tout les livre:\n");
    printf("-------------------------\n");
    for(i=0;i<n;i++){
            printf("titre:%s\t auteur: %s\t pris:%f\t Quantité en stock:%d\n",l[i].titr,l[i].auteur,l[i].prix,l[i].Quant);
    }
    printf("_______________________________\n");
    break;
  case 3:
    printf("donne le tittre de livre :");
    scanf(" %[^\n]s",&a);
    for(i=0;i<n;i++){
        if(strcmp(l[i].titr,a)==0){
            printf("le titre %s \t : auteur: %s\t pris:%f \t la Quantité:%d\n",l[i].titr,l[i].auteur,l[i].prix,l[i].Quant);
            test=1;
        }}
        if(test==0){
            printf("impossible ");
        };
        break;

  case 4:
    printf("donne le titre de livre dans le stock:");
    scanf(" %[^\n]s",&a);
    for(i=0;i<n;i++){
    if(strcmp(l[i].titr,a)==0){
        printf("Mettre à Jour la Quantité de stock:");
        scanf("%d",&l[i].Quant);
      teste1=1;
    }
    }
    if(teste1==0){
        printf("pas dans le stock");
    };

    break;
   case 5:
       printf("le titre de livre:");
       scanf(" %[^n]s",&a);
       if(strcmp(l[i].titr,a)==0){
        pos=i;
        for(i=pos;i<n;i++){
           l[i]=l[i+1];
           n--;
        }
       }

       else{
        printf("The book doesn’t exist");
       };break;
}

}while(chiox!=7);
return 0;
}
