#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct kitapKayit{
	
	char name[20];
	char author[20];
	int year;
	float price;
	
};


int main(){
	
	printf("Book resgister program.\n\n");
	int i=0,books;
	printf("how many book do you register?:");scanf("%d",&books);
	struct kitapKayit romanKitaplari[books];
	printf("Please enter book's information.\n\n");

	for(i=0;i<books;i++){
		printf("Name of book %d:",i+1);scanf("%s",&romanKitaplari[i].name);
		printf("Author of book %d:",i+1);scanf("%s",&romanKitaplari[i].author);
		printf("Year of book %d:",i+1);scanf("%d",&romanKitaplari[i].year);
		printf("Price of book %d:",i+1);scanf("%f",&romanKitaplari[i].price);
		printf("\nBook %d succesfull resgistered.\n*************************\n\n",i+1);
	}
	
	printf("You can see your registered books... e/h ?");char choose;scanf(" %c",&choose);
	printf("\n");
	if(choose=='e' || choose=='E'){
		int i;
		for(i=0;i<books;i++){
		printf("Name of book %d: %s\n",i+1,romanKitaplari[i].name);
		printf("Author of book %d: %s\n",i+1,romanKitaplari[i].author);
		printf("Year of book %d: %d\n",i+1,romanKitaplari[i].year);
		printf("Price of book %d: %.3f\n",i+1,romanKitaplari[i].price);
		printf("\nBook %d succesfull get.\n*************************\n\n",i+1);
	}
	}
	
	getch();
	
	
	return 0;
}
