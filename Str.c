#include<stdio.h>
int main(){
	char s[21];
	char result[5];
	int k=0;
	printf("Enter the char sequence:");
	fgets(s,sizeof(s),stdin);
        for(int i=8;i<12;i++){
		result[k++]=s[i];
		
	}
	result[k]='\0';
	printf("The middle four characters are :%s",result);
}

