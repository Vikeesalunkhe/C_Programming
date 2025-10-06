#include <stdio.h>

int main(){
	char name[10];
	printf("Enter your Name: \n");
	scanf("%s",name);
	printf("your name is: %s", name);
	if (name == "Vikee"){
		printf("You are the owner of this code");
	}
	else{
		printf("You are not the owner of this code");
	}
	return 0;

}
