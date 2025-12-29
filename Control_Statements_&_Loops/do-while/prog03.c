#include <stdio.h>

int main() {

	int option;

	do {
	
		printf("1. Deposite\n2. Withdrawal\n3. Check balance\n4. Exit\n");
		
		printf("Enter option between 1 to 4 : ");
		scanf("%d", &option);
		switch (option){
		
			case (1):
			printf("Deposit Success.\n");
			break;

			case (2):
			printf("Withdrawal Success\n");
			break;

			case (3):
			printf("balance checked\n");
			break;

			case (4):
			printf("Exited\n");
			break;

			default:
			printf("Enter 1 to 4 only\n");
			
		}
	}
	while (option != 4);
}
