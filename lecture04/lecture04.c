#include <stdio.h>

int main()
{
	int hp = 30;
	int attack;
	
	printf("\n공격력을 입력하세요 : ");
	scanf("%d",&attack);

	printf("주인공의 공격력이 %d 입니다.\n",attack);
	hp-=attack;
	printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n",attack);
	if(hp>0)
	{
	printf("적이 %dHP를 남기고 주인공을 공격하여 주인공이 뒤져버렸습니다.\n",hp);
	printf("주인공 개약함\nYou Die\nGame Over");
	}
	else
	{
	printf("적의 잔여 HP : 0");
	printf("\n주인공이 적을 물리쳤습니다 !\n");
	printf("엔딩\n202327015우성윤\n 끝 ! Happy End");
	}
	return 0;
}
