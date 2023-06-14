#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define MAX_ENHANCEMENT_LEVEL 10

int showLoadingScreen() {
    printf("��ȭ ���Դϴ�...");
    fflush(stdout);
    usleep(1000000);
    printf("\n");
}

int showMainMenu() {
    printf("���� ȭ��\n");
    printf("1. ���� ����\n");
    printf("2. ���� ����\n");
    printf("3. ���� ����\n");
}

int showGameDescription() {
    printf("���� ����\n");
    printf("����Ű�� ������ ��ȭ�� �Ǵ� �����Դϴ�.\n");
    printf("��ȭ ������ �ø��ų� ��ȭ�� �����ϸ� �ı� Ȯ���� �����մϴ�.\n");
    printf("��ȭ ������ %d�� �����ϸ� �ִ� ��ȭ ������ �����ߴٴ� �޽����� ��µ˴ϴ�.\n", MAX_ENHANCEMENT_LEVEL);
    printf("��� �ı��Ǹ� ������ ����˴ϴ�.\n");
}

int main() {
    srand(time(NULL));

    int enhancementLevel = 0;

    int successChance[] = { 95, 90, 85, 80, 75, 70, 60, 50, 30, 1 };
    int destructionChance[] = { 0, 0, 0, 0, 0, 1, 3, 5, 20, 30 };

    int choice;
    while (1) {
        showMainMenu();
        printf("�����ϼ���: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            while (1) {
                printf("-----------------------------------------\n");
                printf("| ���� ��ȭ ����: %d\n", enhancementLevel);
                printf("| ���� Ȯ��: %d%%\n", successChance[enhancementLevel]);
                printf("| ���� Ȯ��: %d%%\n", 100 - successChance[enhancementLevel]);
                printf("| �ı� Ȯ��: %d%%\n", destructionChance[enhancementLevel]);
                printf("| ��ȭ�Ͻðڽ��ϱ�? (Enter Ű�� ��ȭ):\n");
                printf("-----------------------------------------\n");

                getchar();  // ���� ����
                getchar();  // ����Ű �Է� ���

                showLoadingScreen();

                int result = rand() % 100;

                if (enhancementLevel < 5) {
                    if (result < successChance[enhancementLevel]) {
                        enhancementLevel++;
                        printf("��ȭ ����!\n");
                    }
                    else if (result >= successChance[enhancementLevel] && result < successChance[enhancementLevel] + destructionChance[enhancementLevel]) {
                        enhancementLevel = 0;
                        printf("��� �ı��Ǿ����ϴ�!\n");
                        break;
                    }
                    else {
                        printf("��ȭ ����!\n");
                    }
                }
                else {
                    if (result < successChance[enhancementLevel]) {
                        enhancementLevel++;
                        printf("��ȭ ����!\n");
                    }
                    else if (result >= successChance[enhancementLevel] && result < successChance[enhancementLevel] + destructionChance[enhancementLevel]) {
                        enhancementLevel = 0;
                        printf("��� �ı��Ǿ����ϴ�!\n");
                        break;
                    }
                    else {
                        enhancementLevel--;
                        printf("��ȭ ����!\n");

                        if (enhancementLevel < 0) {
                            printf("��� �ı��Ǿ����ϴ�!\n");
                            break;
                        }
                    }
                }

                if (enhancementLevel >= MAX_ENHANCEMENT_LEVEL) {
                    printf("�ִ� ��ȭ ������ �����߽��ϴ�!\n");
                    break;
                }
            }
            break;
        case 2:
            showGameDescription();
            getchar();  // ���� ����
            getchar();  // ����Ű �Է� ���
            break;
        case 3:
            printf("������ �����մϴ�.\n");
            return 0;
        default:
            printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
            break;
        }
    }

    return 0;
}
