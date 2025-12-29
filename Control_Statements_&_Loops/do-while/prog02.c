#include <stdio.h>

int main() {
	
	int password = 123;
	int pwd;

	do{
		printf("Enter Password : ");
		scanf("%d", &pwd);

		if (password != pwd){
			printf("Enter Currect Password.\n");
		}
	}
	while(password != pwd);
}
