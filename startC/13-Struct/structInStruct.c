#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct workerInformation{
	char rank[20];
	char apartment[20];
	float maas;
	int exp;
};

struct worker{
	char name[20];
	char surname[20];
	int age;
	struct workerInformation information;
	
};

int main(){
	
	struct worker worker1;
	
	strcpy(worker1.name,"Adnan");
	strcpy(worker1.surname,"Aktemur");
	worker1.age=25;
	strcpy(worker1.information.rank,"Junior Developer");
	strcpy(worker1.information.apartment,"Developer");
	worker1.information.maas=0;
	worker1.information.exp=0;
	
	printf("%s %s %d %s %s %.2f %d\n",worker1.name,worker1.surname,worker1.age,worker1.information.rank,worker1.information.apartment,worker1.information.maas,worker1.information.exp);
	
	
	
	
	
	
	
	getch();
	return 0;
}
