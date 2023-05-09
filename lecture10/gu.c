#include <stdio.h>

int print_title_screen()
{
	printf("\nDino Run\n");
	printf("V.0.1\n");
	printf("\n");
	printf("1. Start Game\n");
	printf("2. How to Play\n");
	printf("3. Exit\n");

	return 0;
}

int how_to_play()
{
	printf("###############################\n");
	printf("##                           ##\n");
	printf("##      To Avoid Enemy       ##\n");
	printf("##                           ##\n");
	printf("##  Press Space Bar To Jump  ##\n");
	printf("##  1.go title               ##\n");
	printf("##  2.stay here              ##\n");
	printf("###############################\n");

	return 0;
}

int main()
{
	int game_state = 1;
	
	char map[33]; /* 가로 30 + 1(개행문자) 세로 15 */

	int i = 0;
	while(i<32)
	{
		map[i]='0';
		i=i+1; //i++
	}

	i = 0;
	while(i<32)
	{
		printf("%c", map[i]);
		i = i+1;
		if (i % 17== 0)
		{
			print_title_screen();
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
		}
	}
	return 0;
}
