#include<stdio.h>
#include<string.h>


struct contact{
char nom[50];
char numero[50];
char emial[50];

};


struct contact contacts[100];


int conte;   //you will use in fonction  ajout;
int n;            // you will use in fonction ajout;/
char a[50];       // you will use in fonction modifier AND suppre est recherch;


void ajout(){
    printf("----------------------------------\n");
    conte=0;
    printf("entre le nombre de contact :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("entre le nom the contact %d : ",i+1);
    scanf(" %[^\n]s",&contacts[i].nom);
    printf("entre le Numéro de téléphone the contact %d:",conte+1);
    scanf(" %[^\n]s",&contacts[i].numero);
    printf("entre le Adresse e-mail the contact %d :",conte+1);
    scanf(" %[^\n]s",&contacts[i].emial);

    conte++;
    }

    printf("--------------------------------------\n");


}


void modifier(){
    int b=0;
     printf("---------------------------------------\n");
     printf("entre le nome de contact:");
     scanf(" %[^\n]s",&a);
   for(int i=0;i<conte;i++){
    if(strcmp(contacts[i].nom,a)==0){
      printf("modfie le nombre de contacte %d :",i+1);
      scanf(" %[^\n]s",contacts[i].numero);
    printf("modfie le nombre de contacte %d :",i+1);
      scanf(" %[^\n]s",contacts[i].emial);
        b=1;
    }

   };

if(b==0){

printf("pas de contact\n");
};


printf("------------------------------\n");

}



 void Supprimer(){
     int c=0;
   printf("-----------------------------------------\n");
   printf("entre le nom de contacte : ");
   scanf(" %[^\n]s",&a);
   for(int i=0;i<conte;i++){
    if(strcmp(contacts[i].nom,a)==0){
        for(int j=i;j<conte;j++){
            contacts[j]=contacts[j+1];
            c=1;
        }
       conte--;
    }


    }
    if(c==0){
        printf("pas de contact");
    }
   }


 void Afficher(){
        printf("-----------------------------------\n");
        for(int i=0;i<conte;i++){
            printf("nom de contact: %s \n",contacts[i].nom);
            printf("nemero de contact: %s \n",contacts[i].numero);
            printf("email de contact: %s  \n",contacts[i].emial);

        }


 }

 void Rechercher(){
     int d=0;

          printf("entre le nom de conatact");
          scanf(" %[^\n]s",&a);
          for(int i=0;i<conte;i++){
            if(strcmp(contacts[i].nom,a)==0){
                printf("donc le nom de contact: %s\t est le nume: %s\t est la emial: %s\n",contacts[i].nom,contacts[i].numero,contacts[i].emial);
                d=1;

            }
          }

      if(d==0){
        printf("contact dont exict\n");
      }



 }



























int main(){
    int choix;
do{
    printf("entre 1 pour ajouter un contact\n");
    printf("entre 2 pour Modifier un Contact\n");
    printf("entre 3 pour Supprimer un Contact\n");
    printf("entre 4 Afficher Tous les Contacts\n");
    printf("entre 5  Rechercher un Contact\n");
    printf("entre 6 pour sorti\n");
    printf("entre votre choix:");
    scanf("%d",&choix);
    switch(choix){

    case 1:
        ajout();
        break;
    case 2:
      modifier();
      break;

    case 3:
      Supprimer();
      break;

    case 4:
        Afficher();
        break;

    case 5:
        Rechercher();
        break;
    default :
        printf("entre un notre choix \n");
        break;

    }




}while(choix!=6);


return 0;
}
