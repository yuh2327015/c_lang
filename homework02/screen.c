#include <stdio.h>
#include <stdlib.h>

void clearBuffer(char* screenBuf, int width, int height)
{
    int i = 0;
    int j = 0;
    while (j < height)
    {
        while (i < width + 1)
        {
            if (i == width)
                screenBuf[i + (j * (width + 1))] = '\n';
            else
            {
                if (i == 0 || i == 1 || i == (width - 1) || i == (width - 2) || j == 0 || j == (height - 1))
                    screenBuf[i + (j * (width + 1))] = '#';
                else
                    screenBuf[i + (j * (width + 1))] = ' ';
            }
            i = i + 1;
        }
        i = 0;
        j = j + 1;
    }
    screenBuf[height * (width + 1) - 1] = '\0';
}

void writeStringToBuffer(const char* string, int x, int y, char* screenBuf, int width)
{
    int i = 0;
    while (string[i] != '\0')
    {
        screenBuf[x + y * (width + 1) + i] = string[i];
        i++;
    }
}

void setTitleToScreenBuffer(char* screenBuf, int width, int height)
{
    clearBuffer(screenBuf, width, height);
    writeStringToBuffer("Avoid stone", 10, 3, screenBuf, width);
    writeStringToBuffer("1.Play Game", 10, 5, screenBuf, width);
    writeStringToBuffer("2.How To Play", 10, 6, screenBuf, width);
    writeStringToBuffer("3.Exit", 10, 7, screenBuf, width);
}

void setGameHowToScreenBuffer(char* screenBuf, int width, int height)
{
    clearBuffer(screenBuf, width, height);
    writeStringToBuffer("Press Left & Right", 10, 3, screenBuf, width);
    writeStringToBuffer("Arrow Keys", 10, 4, screenBuf, width);
    writeStringToBuffer("To Avoid", 10, 5, screenBuf, width);
	writeStringToBuffer("1.Return Menu", 10, 7, screenBuf, width);
	writeStringToBuffer("2.Stay Here", 10, 8, screenBuf, width);
}

void setGameOverToScreenBuffer(char* screenBuf, int width, int height)
{
    clearBuffer(screenBuf, width, height);
    writeStringToBuffer("Exit", 10, 3, screenBuf, width);
    writeStringToBuffer("4. YES", 10, 5, screenBuf, width);
    writeStringToBuffer("5. NO", 10, 7, screenBuf, width);
}

void printScreenBuffer(const char* screenBuf)
{
    printf("%s\n", screenBuf);
    fflush(stdout);
}

int main()
{
    char screenBuf[38 * 10];
    int game_state = 1;
    int input = 0;

    setTitleToScreenBuffer(screenBuf, 38, 10);
    printScreenBuffer(screenBuf);

    while (game_state)
    {
        char input_str[10];
        fgets(input_str, sizeof(input_str), stdin);
        input = atoi(input_str);

        if (input == 3)
        {
            setGameOverToScreenBuffer(screenBuf, 38, 10);
            printScreenBuffer(screenBuf);

            fgets(input_str, sizeof(input_str), stdin);
            input = atoi(input_str);

            if (input == 4)
            {
                game_state = 0;
            }
            else if (input == 5)
            {
                setTitleToScreenBuffer(screenBuf, 38, 10);
                printScreenBuffer(screenBuf);
            }
        }
        else if (input == 2)
        {
            setGameHowToScreenBuffer(screenBuf, 38, 10);
            printScreenBuffer(screenBuf);
        }
        else if (input == 1)
        {
            setTitleToScreenBuffer(screenBuf, 38, 10);
            printScreenBuffer(screenBuf);
        }
    }

    return 0;
}
