#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int result1(int year, int month, int day) {
    int aaa = (1461 * (year + 4800 + (month - 14) / 12)) / 4 \
        + (367 * (month - 2 - 12 * ((month - 14) / 12))) / 12 \
        - (3 * ((year + 4900 + (month - 14) / 12) / 100)) / 4 \
        + day - 32075;
    int bbb = aaa % 7 + 1;
    return bbb;
}
int main(void) {
    char skrr[7][10] = { "������","ȭ����","������","�����","�ݿ���","�����","�Ͽ���" };
    int year = 0;
    int month = 0;
    int day = 0;
    int result;
    printf("Ư������ ���� ���ϴ� ���α׷�\n");
    printf("�⵵�� �� ���� �Է��մϴ�.\n");
    printf("�Էµ� ���ڴ� space bar�� �и��մϴ�\n");
    printf("���� 2005 5 1");

    printf("����� �Է�>> ");
    scanf("%d %d %d", &year, &month, &day);
    result = result1(year, month, day);
    if (result == 1) {
        printf("%s�Դϴ�", skrr[0]);
    }
    else if (result == 2) {
        printf("%s�Դϴ�", skrr[1]);
    }
    else if (result == 3) {
        printf("%s", skrr[2]);
    }
    else if (result == 4) {
        printf("%s�Դϴ�", skrr[3]);
    }
    else if (result == 5) {
        printf("%s�Դϴ�", skrr[4]);
    }
    else if (result == 6) {
        printf("%s�Դϴ�", skrr[5]);
    }
    else if (result == 0) {
        printf("%s�Դϴ�", skrr[6]);
    }

}