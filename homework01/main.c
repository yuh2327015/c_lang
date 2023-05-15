#include <stdlib.h>
#include "screen.h"

int main()
{
    title();
	int game_state = 1;
	int input = 0;
	while(game_state)
	{
		scanf("%d",&input);
		if(input==3)
		{
			ext();
            scanf("%d",&input);
            if(input==4)
            {
                game_state = 0;
            }
            if(input==5)
            {
                main();
            }
		}
		if(input==2)
		{
			how();
		}
		if(input==1)
		{
        title();
		}
	}
    return 0;
}
