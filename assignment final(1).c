#include<stdio.h>
#pragma warning(disable : 4996)


void orderfood();
void foodmenu();
void drinkmenu();
void displaymenu();
void displayreport();

float totalfood = 0, totaldrink = 0, priceNasiAyam = 0, priceNasiBeryani = 0, priceNasiArab = 0, pricefreshorange = 0, pricemangolassi = 0, pricestrawberry = 0;
int quantityfreshorange[20] = { 0 }, quantitymangolassi[20] = { 0 }, quantitystrawberry[20] = { 0 };
int quantityNasiAyam[20] = { 0 }, quantityNasiBeryani[20] = { 0 }, quantityNasiArab[20] = { 0 };
FILE *fout;


main() {
	totalfood = 0.0;
	totaldrink = 0.0;
	priceNasiAyam = 0.0;
	priceNasiBeryani = 0.0;
	priceNasiArab = 0.0;
	pricefreshorange = 0.0;
	pricemangolassi = 0.0;
	pricestrawberry = 0.0;
	quantityfreshorange[0] = 0;
	quantitymangolassi[0] = 0;
	quantitystrawberry[0] = 0;
	quantityNasiAyam[0] = 0;
	quantityNasiBeryani[0] = 0;
	quantityNasiArab[0] = 0;
	orderfood();
	//displayreport();

}

void orderfood(){
	int mainmenu[50] = { 0 };
	
	do {
		printf("#main menu#\n");
		printf("1. Foodmenu\n");
		printf("2. Drinkmenu\n");
		printf("3. Check out\n");
		printf("Select your option : ");
		scanf("%d", &mainmenu[0]);
		
		switch(mainmenu[0])
		{
		
		case 1:{
	
			system("cls");
			foodmenu();
		    system("cls");
	    }
		case 2:{
		
			system("cls");
			drinkmenu();
			system("cls");
		}
		case 3:{
			
			if(quantityfreshorange[0] != 0 || quantitymangolassi[0] != 0 || quantitystrawberry[0] != 0 || quantityNasiAyam[0] != 0 || quantityNasiBeryani[0] != 0 || quantityNasiArab[0] != 0){
				system("cls");
				displaymenu();
			}
			else{
				printf("\nPlease select a food or drink before checkout\n\n");
				mainmenu[0] = -1;
			}
		}
	    default:{
			printf("\nPlease enter option between 1 and 3\n\n");
		}
	    }
	}while(mainmenu[0] < 1 || mainmenu[0] > 3);
	
}	
	
void foodmenu() {
	int food[50] = {0};
	float price_food[50] = {0};
	//int quantityNasiAyam[20] = { 0 }, quantityNasiBeryani[20] = { 0 }, quantityNasiArab[20] = { 0 };
	const float NasiAyam = 8.00, NasiBeryani = 10.00, NasiArab = 12.50;
	

	printf("#Food menu#\n");
	printf("1. NasiAyam - RM8.00 / unit\n");
	printf("2. NasiBeryani - RM10.00 / unit\n");
	printf("3. Nasi Arab - RM12.50 / unit\n");
	printf("Select your option : ");
	scanf("%d", &food[0]);
	
	do{
		if (food[0] == 1) {
			printf("\nYou have selected Nasi Ayam\n\n");
			printf("Enter quantity: ");
			scanf("%d", &quantityNasiAyam[0]);
			//count++;
		}
		else if (food[0] == 2) {
			printf("nYou have selected Nasi Beryani\n\n");
			printf("Enter quantity: ");
			scanf("%d", &quantityNasiBeryani[0]);
			//count++;
		}
		else if (food[0] == 3) {
			printf("\nYou have selected Nasi Arab\n\n");
			printf("Enter quantity: ");
			scanf("%d", &quantityNasiArab[0]);
			//count++;
		}
		else{
			printf("\nPlease enter option between 1 and 3\n\n");
		}	
	}while(food[0] < 1 || food[0] > 3);
	
	printf("\n");
	orderfood();
}


void drinkmenu() {
	int drink[50] = {0};
	float price_drink[50];
	//int quantityfreshorange[20] = { 0 }, quantitymangolassi[20] = { 0 }, quantitystrawberry[20] = { 0 };
	const float Freshorange = 3.00, MangoLassi = 3.50, Strawberry = 4.00;
	//count = 0;

	printf("#drink menu#\n");
	printf("1. Fresh orange - RM3.00 / unit\n");
	printf("2. Mango Lassi - RM3.50 / unit\n");
	printf("3. Strawberry - RM4.00 / unit\n");
	printf("Select your option : ");
	scanf("%d", &drink[0]);
	
	do{
		if (drink[0] == 1) {
			printf("\nYou have selected Fresh Orange\n\n");
			printf("Enter quantity: ");
			scanf("%d", &quantityfreshorange[0]);
			//count++;
		}
		else if (drink[0] == 2) {
			printf("\nYou have selected Mango Lassi\n\n");
			printf("Enter quantity: ");
			scanf("%d", &quantitymangolassi[0]);		
			//count++;
		}
		else if (drink[0] == 3) {
			printf("\nYou have selected Strawberry\n\n");
			printf("Enter quantity: ");
			scanf("%d", &quantitystrawberry[0]);
			
			//count++;
		}
		else{
			printf("\nPlease enter option between 1 and 3\n\n");
		}
	}while(drink[0] < 1 || drink[0] > 3);
	printf("\n");
	orderfood();
}


void displaymenu() {
	
	const float NasiAyam = 8.00, NasiBeryani = 10.00, NasiArab = 12.50;
	const float Freshorange = 3.00, MangoLassi = 3.50, Strawberry = 4.00;
	float priceNasiAyam = (quantityNasiAyam[0] * NasiAyam);
	float priceNasiBeryani = (quantityNasiBeryani[0] * NasiBeryani);
	float priceNasiArab = (quantityNasiArab[0]* NasiArab);
	float pricefreshorange = (quantityfreshorange[0]* Freshorange);
	float pricemangolassi = (quantitymangolassi[0]*  MangoLassi);
	float pricestrawberry = (quantitystrawberry[0]* Strawberry);
	
	totalfood = priceNasiAyam + priceNasiBeryani + priceNasiArab;
	totaldrink = pricefreshorange + pricemangolassi + pricestrawberry;
	
	float subtotal=0, balance, cash;
	char last;


	printf("ORDER LIST\n");
//	printf("Item			Price / Unit		Quantity	Amount\n");
//	printf("============ = ============	======== = ====== =\n");
	printf("Item\t\t\tPrice / Unit\tQuantity\tAmount\n");
	printf("==============================================================\n");
	if (quantityNasiAyam[0] > 0) {
//		printf("NasiAyam		 %.2f			   %d		%.2f\n", NasiAyam, quantityNasiAyam[0], priceNasiAyam);
		printf("NasiAyam\t\t%.2f\t\t%d\t\t%.2f\n", NasiAyam, quantityNasiAyam[0], priceNasiAyam);	
	}
	if (quantityNasiBeryani[0] > 0) {
//		printf("NasiBeryani		 %.2f			   %d		 %.2f\n", NasiBeryani, quantityNasiBeryani[0], priceNasiBeryani);
		printf("NasiBeryani\t\t%.2f\t\t%d\t\t%.2f\n", NasiBeryani, quantityNasiBeryani[0], priceNasiBeryani);
	}
	if (quantityNasiArab[0] > 0) {
//		printf("NasiArab		 %.2f			   %d		 %.2f\n", NasiArab, quantityNasiArab[0], priceNasiArab);
		printf("NasiArab\t\t%.2f\t\t%d\t\t%.2f\n", NasiArab, quantityNasiArab[0], priceNasiArab);
	}
	if (quantityfreshorange[0] > 0) {
//		printf("Fresh Orange	 %.2f			   %d		 %.2f\n", Freshorange, quantityfreshorange[0], pricefreshorange);
		printf("Fresh Orange\t\t%.2f\t\t%d\t\t%.2f\n", Freshorange, quantityfreshorange[0], pricefreshorange);
	}
	if (quantitymangolassi[0] > 0) {
//		printf("Mango Lassi		 %.2f			   %d		 %.2f\n", MangoLassi, quantitymangolassi[0], pricemangolassi);
		printf("Mango Lassi\t\t%.2f\t\t%d\t\t%.2f\n", MangoLassi, quantitymangolassi[0], pricemangolassi);
	}
	if (quantitystrawberry[0] > 0) {
//		printf("Strawberry		 %.2f			   %d		 %.2f\n", Strawberry, quantitystrawberry[0], pricestrawberry);
		printf("Strawberry\t\t%.2f\t\t%d\t\t%.2f\n", Strawberry, quantitystrawberry[0], pricestrawberry);
	}
	
	subtotal = totalfood + totaldrink;
//	printf("Total								%.2f", subtotal);
	printf("Total\t%.2f", subtotal);
	
	int count = 0;
	while(cash<subtotal)
	{
		if(count > 0){
		   printf("\nYour cash entered is insufficient to pay the total price\n");
	       }
		
		printf("\nEnter cash amount : ");
		scanf("%f", &cash);
		count++;
	}
	
	/*printf("\nEnter cash amount : ");
	scanf("%f", &cash);*/
	
	balance = cash - subtotal;
	printf("\nYour balance : %.2f", balance);
	printf("\nTHANK YOU!!");
	printf("\n--------------------------------------------------------- -");
//	printf("\nBack to the main menu, click y\nExit, click n\nPlease enter your option: ");
//	scanf(" %c", &last);
//	printf("\n");
	
	count = 0;
	do{
		if (count > 0){
			printf("Please enter y or n\n");
		}
		printf("\nBack to the main menu, click y\nExit, click n\nPlease enter your option: ");
		scanf(" %c", &last);
		printf("\n");
		
		if (last == 'y' || last == 'Y') {
		system("cls");
		main();
		}
		else if (last == 'n' || last == 'N') {
			displayreport();
//			printf("Thanks for using this program!!!\n");
			return;
		}
		count ++;
	}while(last != 'y' || last != 'Y' || last != 'n' || last != 'N');
}

void displayreport(){
	int a = 0, b = 0, c=0, d=0, e=0, f=0;
	
	fout = fopen("report.txt", "w");
	fprintf(fout, "REPORT\n");
//	fprintf(fout, "ITEM                 QUANTITY          AMOUNT\n");
	fprintf(fout, "Item\t\t\tQuantity\tAmount\n");
	
//	fprintf(fout, "================================================\n");
	fprintf(fout, "==============================================\n");
	fout = fopen("report.txt", "a");
	//if (quantityNasiAyam[0] > a) {
//		fprintf(fout, "NasiAyam			   %d		%.2f\n", quantityNasiAyam[0], priceNasiAyam);
		fprintf(fout, "NasiAyam\t\t%d\t\t%.2f\n", quantityNasiAyam[0], priceNasiAyam);
	//}
	//if (quantityNasiBeryani[0] > b) {
//		fprintf(fout, "NasiBeryani		   %d		 %.2f\n", quantityNasiBeryani[0], priceNasiBeryani);
		fprintf(fout, "NasiBeryani\t\t%d\t\t%.2f\n", quantityNasiBeryani[0], priceNasiBeryani);
//	}
	//if (quantityNasiArab[0] > c) {
//		fprintf(fout, "NasiArab			   %d		 %.2f\n", quantityNasiArab[0], priceNasiArab);
		fprintf(fout, "NasiArab\t\t%d\t\t%.2f\n", quantityNasiArab[0], priceNasiArab);
	//}
	//if (quantityfreshorange[0] > d) {
//		fprintf(fout, "Fresh Orange	  	   %d		 %.2f\n", quantityfreshorange[0], pricefreshorange);
		fprintf(fout, "Fresh Orange\t\t%d\t\t%.2f\n", quantityfreshorange[0], pricefreshorange);
	//}
//	if (quantitymangolassi[0] > e) {
//		fprintf(fout, "Mango Lassi		   %d		 %.2f\n", quantitymangolassi[0], pricemangolassi);
		fprintf(fout, "Mango Lassi\t\t%d\t\t%.2f\n", quantitymangolassi[0], pricemangolassi);
	//
	//if (quantitystrawberry[0] > f) {
//		fprintf(fout, "Strawberry		   %d		 %.2f\n", quantitystrawberry[0], pricestrawberry);
		fprintf(fout, "Strawberry\t\t%d\t\t%.2f\n", quantitystrawberry[0], pricestrawberry);
//	}
}
