#include<stdio.h>
int main(){
	
	char c;
	while(1){

	printf("Enter char:");
	c=getchar();
	printf("Entered value is %c",c);
	if(c=='\n'){
            break;
	}
	while(getchar()!='\n');
	printf("program end");
	}	
}

	
