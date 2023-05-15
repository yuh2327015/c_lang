#include <stdio.h>

int title()
{
	char screen1[247];
    int i = 0;
    while(i < 247)
    {
        screen1[i] = ' ';
        i++;
    }
    i = 1;
    while(i <= 30)
    {
        screen1[i] = '-';
        i++;
    }
    i = 165;
    while(i <= 194)
    {
        screen1[i] = '-';
        i++;
    }
    screen1[31] = '\n';
    screen1[32] = '|';
    screen1[43] = 'A';
    screen1[44] = 'v';
    screen1[45] = 'o';
    screen1[46] = 'i';
    screen1[47] = 'd';
    screen1[49] = 'S';
    screen1[50] = 't';
    screen1[51] = 'o';
    screen1[52] = 'n';
    screen1[53] = 'e';
    screen1[63] = '|';
    screen1[64] = '\n';
    screen1[65] = '|';
    screen1[75] = '1';
    screen1[76] = '.';
    screen1[78] = 'P';
    screen1[79] = 'l';
    screen1[80] = 'a';
    screen1[81] = 'y';
    screen1[83] = 'G';
    screen1[84] = 'a';
    screen1[85] = 'm';
    screen1[86] = 'e';
    screen1[96] = '|';
    screen1[97] = '\n';
    screen1[98] = '|';
    screen1[108] = '2';
    screen1[109] = '.';
    screen1[111] = 'H';
    screen1[112] = 'o';
    screen1[113] = 'w';
    screen1[115] = 'P';
    screen1[116] = 'l';
    screen1[117] = 'a';
    screen1[118] = 'y';
    screen1[129] = '|';
    screen1[130] = '\n';
    screen1[131] = '|';
    screen1[141] = '3';
    screen1[142] = '.';
    screen1[144] = 'E';
    screen1[146] = 'x';
    screen1[148] = 'i';
    screen1[150] = 't';
    screen1[162] = '|';
    screen1[163] = '\n';

    printf("%s\ninput pls>", screen1);
    
	return 0;
}
int how()
{
	char screen2[330];
    int i = 0;
    while(i < 330)
    {
        screen2[i] = ' ';
        i++;
    }
    i = 1;
    while(i <= 30)
    {
        screen2[i] = '-';
        i++;
    }
    //Press left and right arrow keys to avoid
    screen2[31] = '\n';
    screen2[32] = '|';
    screen2[37] = 'P';
    screen2[38] = 'r';
    screen2[39] = 'e';
    screen2[40] = 's';
    screen2[41] = 's';
    screen2[43] = 'L';
    screen2[44] = 'e';
    screen2[45] = 'f';
    screen2[46] = 't';
    screen2[48] = 'a';
    screen2[49] = 'n';
    screen2[50] = 'd';
    screen2[52] = 'R';
    screen2[53] = 'i';
    screen2[54] = 'g';
    screen2[55] = 'h';
    screen2[56] = 't';
    screen2[63] = '|';
    screen2[64] = '\n';
    screen2[65] = '|';
    screen2[70] = 'A';
    screen2[71] = 'r';
    screen2[72] = 'r';
    screen2[73] = 'o';
    screen2[74] = 'w';
    screen2[76] = 'K';
    screen2[77] = 'e';
    screen2[78] = 'y';
    screen2[79] = 's';
    screen2[81] = 'T';
    screen2[82] = 'o';
    screen2[84] = 'A';
    screen2[85] = 'v';
    screen2[86] = 'o';
    screen2[87] = 'i';
    screen2[88] = 'd';
    screen2[96] = '|';
    screen2[97] = '\n';
    screen2[98] = '|';
    screen2[129] = '|';
    screen2[130] = '\n';
    screen2[131] = '|';
    //Return to menu
    screen2[136] = 'R';
    screen2[137] = 'e';
    screen2[138] = 't';
    screen2[139] = 'u';
    screen2[140] = 'r';
    screen2[141] = 'n';
    screen2[143] = 't';
    screen2[144] = 'o';
    screen2[146] = 'm';
    screen2[147] = 'e';
    screen2[148] = 'n';
    screen2[149] = 'u';
    screen2[150] = '?';
    screen2[162] = '|';
    screen2[163] = '\n';
    screen2[164] = '|';
    screen2[169] = '1';
    screen2[170] = '.';
    screen2[172] = 'Y';
    screen2[173] = 'e';
    screen2[174] = 's';
    screen2[195] = '|';
    screen2[196] = '\n';
    screen2[197] = '|';
    screen2[202] = '2';
    screen2[203] = '.';
    screen2[205] = 'N';
    screen2[206] = 'o';
    screen2[228] = '|';
    screen2[229] = '\n';
    i = 230;
    while(i <= 260)
    {
        screen2[i] = '-';
        i++;
    }
    printf("%s\ninput pls>", screen2);
    
	return 0;	
}

int ext()
{
    char screen3[330];
    int i = 0;
    while(i < 330)
    {
        screen3[i] = ' ';
        i++;
    }
    i = 1;
    while(i <= 30)
    {
        screen3[i] = '-';
        i++;
    }
    //exit 1 yes 2 no
    screen3[31] = '\n';
    screen3[32] = '|';
    screen3[46] = 'E';
    screen3[47] = 'X';
    screen3[48] = 'I';
    screen3[49] = 'T';
    screen3[63] = '|';
    screen3[64] = '\n';
    screen3[65] = '|';
    screen3[96] = '|';
    screen3[97] = '\n';
    screen3[98] = '|';

    printf("%s\ninput pls>", screen3);
    return 0;
}



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
            if(input==1)
            {
                game_state = 0;
            }
            else
            {
                title();
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
