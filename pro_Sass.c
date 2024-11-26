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
int main(){
int choix;
	printf("\n \t \t\t\t\t\t\t\t !!Application de taches !! \n");
	do {
	
	menu();
	printf("=>Entrer votre choix : ");
	scanf("%d",&choix);
	
	switch(choix){
		case 1: ajouter();break;
		case 2: printf("Au Revoir !");break;
		default: printf("Choix invalid !");
	}
		
	}while (choix!=2 );



return 0;
}
