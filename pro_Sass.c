#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	typedef struct{
		int jour;
		int mois;
		int annee;
	}date_d_echeance;
	typedef struct{
		char titre[20];
		char description[20];
		char preorite[20];
		date_d_echeance date;	
	}tache;
	tache ts[10];
	int taille=0;
void ajouter(){
		printf("1=>Enter le titre : ");
		scanf("%s",&ts[taille].titre);
		printf("2=>Enter la descriprion : ");
		scanf("%s",&ts[taille].description);
			int choix;
		do{
			printf("3=>Entrer preorite (1-high 2-low) : ");
			scanf("%d",&choix);
			switch(choix){
				case 1 :strcpy(ts[taille].preorite,"high");
				break;
				case 2 :strcpy(ts[taille].preorite,"low");
				break;
				default:printf("erreur!!\n");
			}
		}while(choix!=1 && choix!=2);
		
		do {
		printf("4=>Enter le jour (doit etre > a 31): ");
		scanf("%d",&ts[taille].date.jour);
		if(ts[taille].date.jour<1 || ts[taille].date.jour>31){
			printf("jour < a 31\n");
		}
	} while(ts[taille].date.jour<1 || ts[taille].date.jour>31);
	do {
		printf("5=>Enter le mois(doit etre > a 12): ");
		scanf("%d",&ts[taille].date.mois);
		if(ts[taille].date.mois<1 || ts[taille].date.mois>12){
			printf("mois < a 12\n");
		}
	} while(ts[taille].date.mois<1 || ts[taille].date.mois>12);
		do {
		printf("6=>Enter l annee (doit etre > a 2024): ");
		scanf("%d",&ts[taille].date.annee);
		if(ts[taille].date.annee<2024){
			printf("annee < a 2024\n");
		}
	} while(ts[taille].date.annee<2024);
	
	
		taille++;
		printf("Ajouter avec succes");
	}
void afficher(){
		if(taille==0){
		printf("vous devez selectioner 'ajouter' pour accelerer aux autres options\n");
		}else{
		int i;
		for(i=0;i<taille;i++){
			printf("--------Tache : %d --------\n\n",i+1);
			printf("le titre est :%s\n",ts[i].titre);
			printf("la description est :%s\n",ts[i].description);
			printf("la preorite est :%s\n",ts[i].preorite);
			printf("le jour est :%d\n",ts[i].date.jour);
			printf("le mois est :%d\n",ts[i].date.mois);
			printf("l'annee est :%d\n",ts[i].date.annee);
		}
	}
}
	void modifier(){
			if(taille==0){
			printf("vous devez selectioner 'ajouter' pour accelerer aux autres options\n");
		}else{
		int indice;
		printf("Enter indice :");
		scanf("%d",&indice);
		if(indice<0 || indice>taille){
			printf("indice invalide !");
		}else{
				printf("Entrer le nouveau titre (actuel: %s) : ",ts[indice].titre);
		scanf("%s",ts[indice].titre);
		printf("Entrer la nouvelle desrcription (actuel: %s) : ",ts[indice].description);
		scanf("%s",ts[indice].description);
		int choix;
		do{
			printf("entrer preorite (1- high  2-low) : ");
			scanf("%d",&choix);
			switch(choix){
				case 1 :strcpy(ts[indice].preorite,"high");break;
				case 2 :strcpy(ts[indice].preorite,"low");break;
				default:printf("erreur!!");
			}
		}while(choix!=1 && choix!=2);
		printf("Entrer le nouveau jour (actuel: %d) : ",ts[indice].date.jour);
		scanf("%d",&ts[indice].date.jour);
		printf("Entrer le nouveau mois (actuel: %d) : ",ts[indice].date.mois);
		scanf("%d",&ts[indice].date.mois);
		printf("Entrer le nouvelle (actuel: %d) : ",ts[indice].date.annee);
		scanf("%d",&ts[indice].date.annee);
			printf("modification avec succes");
		}
	}
		}
void menu(){
	printf(" \n\n\n => Menu <= \n");
	printf(" \n1- Ajouter une Tache  \n");
	printf(" \n2- Afficher la Liste des Taches \n");
	printf(" \n3- Modifier une Tachee \n");
	printf(" \n4- Supprimer une Tache \n");
	printf(" \n5- Filtrer les Taches  \n");
	printf(" \n6- Quitter. \n");
}
int main(){
int choix;
	printf("\n \t \t\t\t\t\t\t\t !!Application de taches !! \n");
	do {
	
	menu();
	printf("=>Entrer votre choix : ");
	scanf("%d",&choix);
	
	switch(choix){
		case 1: ajouter();break;
		case 2: afficher();break;
		case 3: modifier();break;
		case 4: printf("Au Revoir !");break;
		default: printf("Choix invalid !");
	}
		
	}while (choix!=4 );



return 0;
}
