#include <stdio.h>

int print_title_screen()
{
	printf("###############################\n");
	printf("##                           ##\n");
	printf("##         Dino Run          ##\n");
	printf("##          V.0.1            ##\n");
	printf("##                           ##\n");
	printf("##  1. Start Game            ##\n");
	printf("##  2. How to Play           ##\n");
	printf("##  3. Exit                  ##\n");
	printf("##                           ##\n");
	printf("###############################\n");

	return 0;
}

int print_how_to_play_screen()
{
	printf("###############################\n");
	printf("##                           ##\n");
	printf("##      To Avoid Enemy       ##\n");
	printf("##                           ##\n");
	printf("##  Press Space Bar To Jump  ##\n");
	printf("##                           ##\n");
	printf("###############################\n");

	return 0;
}

int main()
{
	int game_state = 1;
	
	char map[465]; /* 가로 30 + 1(개행문자) 세로 15 */

	int i = 0;
	while(i<465)
	{
		map[i]='0';
		i=i+1; //i++
	}

	i = 0;
	while(i<465)
	{
		printf("%c", map[i]);
		i = i+1;
		if (i % 30 == 0)
		{
			printf("\n");
		}
	}
	return 0;
}
