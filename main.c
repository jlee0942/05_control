#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=59;
	int input;
	int num=0;

	

	do
	{
		printf("your answer?:");
		scanf("%d", &input);
		if(input<answer)
		{
			printf("low\n");
		}
		else if(input>answer)
		{
			printf("high\n");
		}
		num++;
	}while(input!=59);
	
 printf("Congratulations!\nyour trial:%i\n", num);
		

 return 0;
}
