#include <stdio.h>

int print_title_screen1()
{
	printf("##################################\n");
	printf("##				##\n");
	printf("##	     Dino Run		##\n");
	printf("##	     - V0.1 -		##\n");
	printf("##				##\n");
	printf("##  1. Game Start		##\n");
	printf("##  2. How To Play		##\n");
	printf("##  3. Exit 			##\n");
	printf("##		      		##\n");
	printf("##################################\n");
	return 0;
}
int how_to_play()
{
	printf("##################################\n");
	printf("##				##\n");
	printf("##	     Dino Run		##\n");
	printf("##       -Return to menu?-	##\n");
	printf("##				##\n");
	printf("##  	     1. Yes		##\n");
	printf("##  	     2. No		##\n");
	printf("## 				##\n");
	printf("##		      		##\n");
	printf("##################################\n");
	printf("input(1. yes or 2. no)");	
}
int main()
{
	print_title_screen1();
	int game_state = 1;
	int input = 0;
	while(game_state)
	{
		scanf("%d",&input);
		if(input==3)
		{
			game_state=0;
		}
		if(input==2)
		{
			how_to_play();
		}
		if(input==1)
		{
        printf("##################################\n");
	printf("##				##\n");
	printf("##	     Dino Run		##\n");
	printf("##	     - V0.1 -		##\n");
	printf("##				##\n");
	printf("##  1. Game Start		##\n");
	printf("##  2. How To Play		##\n");
	printf("##  3. Exit 			##\n");
	printf("##		      		##\n");
	printf("##################################\n");
 	printf("input(1~3)");
		}
	}
	return 0;
}
