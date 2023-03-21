#include<stdio.h>
#include<conio.h>
int menu();
void bus();
void cycle();
void riksha();
void delete();
void showdetail();
int nor=0,nob,noc,amount=0,count=0; 
int main()
{
	// clrscr();
	while(1)
	{
	 switch(menu())
	 {
	 	case 1:
	 		bus();
	 		break;
	 	case 2:
	 	    cycle();
	 	    break;
	 	case 3:
	 		riksha();
	 		break;
	 	case 4:
	 	    showdetail();
	 		break;
	 	case 5:
	 		delete();
	 		break;
	 	case 6:
	 		exit(0);

	 	default:
	 printf("\n invalid choice:");			
	 }
	 getch();
}}
int menu(){
	int ch;
	printf("\n1. enter the bus:");
	printf("\n2. enter the cycle");
	printf("\n3. enter the riksha");
	printf("\n4. show status");
	printf("\n5. delete data");
	printf("\n6. exit");
		printf("\n enter your choice:\n");
		scanf("%d",&ch);
		return(ch);
		
}
void delete(){
	nob=0;
	noc=0;
	nor=0;
	amount=0;
	count =0;
}
void showdetail(){
	printf("\n number of bus=%d",nob);
	printf("\n number of cycle=%d",noc);
	printf("\n number of riksha=%d",nor);
	printf("\n total number of vehicle =%d",nob+noc+nor);
	printf("\n total gain amount =%d",amount);
}
void riksha()
{
	printf("entery successful");
nor++;
amount=amount+50;
count++;	
}
void cycle()
{	printf("entery successful");
	noc++;
	amount=amount+20;
	count++;
}
void bus()
{
		printf("entery successful");
	nob++;
	amount=amount+100;
	count++;
}
