#include <stdio.h>

void main() {
	
	//pre-increment
	
	int x = 10;
	int ans = 0;
	printf("x is : %d\n", x);      //10
	ans = ++x;
	printf("x is : %d\n", x);      //11
	printf("ans is : %d\n", ans);   //11
				 
	////////
	
	x = 10;
        ans = 0;
        printf("x is : %d\n", x);       //10
        ans = ++x + ++x;
        printf("x is : %d\n", x);       //12
        printf("ans is : %d\n", ans);   //24


	//post-increment
	int y = 10;
        ans = 0;
        printf("y is : %d\n", y);       //10
        ans = y++;
        printf("y is : %d\n", y);       //11
        printf("ans is : %d\n", ans);   //10
	
	//////
	y = 10;
        ans = 0;
        printf("y is : %d\n", y);       //10
        ans = y++ + y++;                //(x=10 , post_x=11) + (x=11 , post_x=12)
        printf("y is : %d\n", y);       //12
        printf("ans is : %d\n", ans);   //21

	
}
