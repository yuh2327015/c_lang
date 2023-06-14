#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define MAX_ENHANCEMENT_LEVEL 10

int showLoadingScreen() {
    printf("강화 중입니다...");
    fflush(stdout);
    usleep(1000000);
    printf("\n");
}

int showMainMenu() {
    printf("메인 화면\n");
    printf("1. 게임 시작\n");
    printf("2. 게임 설명\n");
    printf("3. 게임 종료\n");
}

int showGameDescription() {
    printf("게임 설명\n");
    printf("엔터키를 누르면 강화가 되는 게임입니다.\n");
    printf("강화 레벨을 올리거나 강화에 실패하면 파괴 확률이 증가합니다.\n");
    printf("강화 레벨이 %d에 도달하면 최대 강화 레벨에 도달했다는 메시지가 출력됩니다.\n", MAX_ENHANCEMENT_LEVEL);
    printf("장비가 파괴되면 게임이 종료됩니다.\n");
}

int main() {
    srand(time(NULL));

    int enhancementLevel = 0;

    int successChance[] = { 95, 90, 85, 80, 75, 70, 60, 50, 30, 1 };
    int destructionChance[] = { 0, 0, 0, 0, 0, 1, 3, 5, 20, 30 };

    int choice;
    while (1) {
        showMainMenu();
        printf("선택하세요: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            while (1) {
                printf("-----------------------------------------\n");
                printf("| 현재 강화 레벨: %d\n", enhancementLevel);
                printf("| 성공 확률: %d%%\n", successChance[enhancementLevel]);
                printf("| 실패 확률: %d%%\n", 100 - successChance[enhancementLevel]);
                printf("| 파괴 확률: %d%%\n", destructionChance[enhancementLevel]);
                printf("| 강화하시겠습니까? (Enter 키로 강화):\n");
                printf("-----------------------------------------\n");

                getchar();  // 버퍼 비우기
                getchar();  // 엔터키 입력 대기

                showLoadingScreen();

                int result = rand() % 100;

                if (enhancementLevel < 5) {
                    if (result < successChance[enhancementLevel]) {
                        enhancementLevel++;
                        printf("강화 성공!\n");
                    }
                    else if (result >= successChance[enhancementLevel] && result < successChance[enhancementLevel] + destructionChance[enhancementLevel]) {
                        enhancementLevel = 0;
                        printf("장비가 파괴되었습니다!\n");
                        break;
                    }
                    else {
                        printf("강화 실패!\n");
                    }
                }
                else {
                    if (result < successChance[enhancementLevel]) {
                        enhancementLevel++;
                        printf("강화 성공!\n");
                    }
                    else if (result >= successChance[enhancementLevel] && result < successChance[enhancementLevel] + destructionChance[enhancementLevel]) {
                        enhancementLevel = 0;
                        printf("장비가 파괴되었습니다!\n");
                        break;
                    }
                    else {
                        enhancementLevel--;
                        printf("강화 실패!\n");

                        if (enhancementLevel < 0) {
                            printf("장비가 파괴되었습니다!\n");
                            break;
                        }
                    }
                }

                if (enhancementLevel >= MAX_ENHANCEMENT_LEVEL) {
                    printf("최대 강화 레벨에 도달했습니다!\n");
                    break;
                }
            }
            break;
        case 2:
            showGameDescription();
            getchar();  // 버퍼 비우기
            getchar();  // 엔터키 입력 대기
            break;
        case 3:
            printf("게임을 종료합니다.\n");
            return 0;
        default:
            printf("잘못된 선택입니다. 다시 선택하세요.\n");
            break;
        }
    }

    return 0;
}
