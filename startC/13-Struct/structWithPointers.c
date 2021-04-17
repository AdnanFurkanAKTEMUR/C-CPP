#include <stdio.h>
#include <stdlib.h>

struct worker{
	char name[20];
	char surname[20];
	int exp;
};
struct worker enterWorker(struct worker *worker1,int workerNumbers){
	int i;
	for(i=0;i<workerNumbers;i++){
		printf("enter worker %d name   : ",i+1);scanf("%s",&(worker1+i)->name);
		printf("enter worker %d surname: ",i+1);scanf("%s",&(worker1+i)->surname);
		printf("enter worker %d exp    : ",i+1);scanf("%d",&(worker1+i)->exp);
		printf("\n Worker %d entered!\n",i+1);
		printf("\n**********************************\n\n");
		//scanf("%s %s %d",&(worker1+i)->name,&(worker1+i)->surname,&(worker1+i)->exp);
	//	printf("%s %s %d\n",(worker1+i)->name,(worker1+i)->surname,(worker1+i)->exp);
	}
	//scanf("%s %s %d",&worker1->name,&worker1->surname,&worker1->exp);
	
	

	return *worker1;
}
void  showWorker(struct worker *worker2,int workerNumbers){
    printf("Your worker list:\n\n");
	int i;
	for(i=0;i<workerNumbers;i++){
		printf("Worker %d\n",i+1);
		printf("Name:%s Surname:%s Exp:%d \n",(worker2+i)->name,(worker2+i)->surname,(worker2+i)->exp);
		printf("\n*************************\n\n");
	}
	
	

/*	int i;
	for(i=0;i<workerNumbers;i++){
		printf("%s %s %d\n",(worker1+i)->name,(worker1+i)->surname,(worker1+i)->exp);
	}*/
}
int main(){
	
	printf("How many worker?:");int workerNumber;scanf("%d",&workerNumber);
	
	
	struct worker workerArray[workerNumber];
	struct worker *workerPtr=&workerArray[0];// çoooooook önemli

	
	

	int i;
	*workerPtr=enterWorker(workerArray,workerNumber);
//	printf("%s %s %d",workerPtr->name,workerPtr->surname,workerPtr->exp);
	showWorker(workerPtr,workerNumber);
	/*
	for(i=0;i<workerNumber;i++){
		scanf("%s %s %d",&(workerPtr+i)->name,&(workerPtr+i)->surname,&(workerPtr+i)->exp);
	}*/
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
