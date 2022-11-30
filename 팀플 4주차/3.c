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
    char skrr[7][10] = { "월요일","화요일","수요일","목요일","금요일","토요일","일요일" };
    int year = 0;
    int month = 0;
    int day = 0;
    int result;
    printf("특정일의 요일 구하는 프로그램\n");
    printf("년도와 월 일을 입력합니다.\n");
    printf("입력될 숫자는 space bar로 분리합니다\n");
    printf("예로 2005 5 1");

    printf("년월일 입력>> ");
    scanf("%d %d %d", &year, &month, &day);
    result = result1(year, month, day);
    if (result == 1) {
        printf("%s입니다", skrr[0]);
    }
    else if (result == 2) {
        printf("%s입니다", skrr[1]);
    }
    else if (result == 3) {
        printf("%s", skrr[2]);
    }
    else if (result == 4) {
        printf("%s입니다", skrr[3]);
    }
    else if (result == 5) {
        printf("%s입니다", skrr[4]);
    }
    else if (result == 6) {
        printf("%s입니다", skrr[5]);
    }
    else if (result == 0) {
        printf("%s입니다", skrr[6]);
    }

}