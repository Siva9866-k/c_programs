#include<stdio.h>
#include<string.h>
void menu(){
	printf("Enter 1 for Meals\n 2 for tiffins\n 3 for dinner \n");
	int a;
	scanf("%d",&a);
	switch(a){
		case 1:
			printf("VEG meal\n Biryani\n");
			break;
		case 2:
		        printf("Dosa\n Idly\n" );
		        break;
		case 3:
			printf("rice\n pulihora\n");
			break;
	}}

int main(){
	char pass[9];
	char user[9];
	char user1[9]="siva";
	char u1pass[9]="siva57";
	fgets(user,sizeof(user),stdin);
	user[strcspn(user, "\n")] = 0;
        fgets(pass,sizeof(pass),stdin);
	pass[strcspn(pass, "\n")] = 0;
	if(strcmp(user1,user)==0 && strcmp(u1pass,pass)==0){
		printf("Login successful\n");
		menu();
	}
	else{
		printf("invalid details");}
}




