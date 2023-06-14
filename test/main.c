#include <stdio.h>
#include "screen.h"

int main()
{
	/*  width : 30    height : 10    ���� ���� : 2    ���ο��� :1 */
	char screenBuf[35 * 12 + 1];
	int width = 34;
	int height = 12;
	int isGamePlaying = 1;

	char input[10];

	while (isGamePlaying)
	{
		clearBuffer(screenBuf, width, height);

		setTitleToScreenBuffer(screenBuf, width, height); /* �̷������� ¥�ּ��� */

		printf("%s\ninput>", screenBuf);
		scanf("%s", input);

		if (input[0] == 'q')	/*q ������ ����*/
			isGamePlaying = 0;
	}

	return 0;
}
