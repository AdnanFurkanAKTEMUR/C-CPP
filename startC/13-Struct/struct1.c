#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
	char name[20];
	char surName[20];
	char school[20];
	char bolum[20];
	int number;
	int clas;
}student1,student2;

int main(){
	
	strcpy(student1.name,"Adnan Furkan");
	strcpy(student1.surName,"Aktemur");
	strcpy(student1.school,"Sakarya University");
	strcpy(student1.bolum,"Software Engineer");
	student1.number=141210013;
	student1.clas=5;
	
	printf("%s",student1.bolum);
	
	
	getch();
	
	return 0;
}
