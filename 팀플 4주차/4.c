#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>

int main(void) {
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	char user[20];
	int year = 0;
	int month = 0;
	int day = 0;
	printf("������ϰ� ����,��, �����̰��");
	
	printf("�ֹ� ��Ϲ�ȣ 13�ڸ� ��ĭ���� �Է��ϰ� Enter");
	printf("�ֹι�ȣ>>");
	for (int i = 0; i < 13; i++)
	{
		user[i] = _getch();
		if (i < 6) {
			printf("%c", user[i]);
		}
		else if (i == 6) {
			printf("-*");
		}
		else {
			printf("*");
		}
		
	}
	for (int i = 0; i < 13; i++) {
		printf("%c", user[i]);
	}
	printf("\nnow: %d�� %d�� %d�� \n",tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
	for (int i = 0; i < 13; i++) {
		if (i == 7) {
			if (strcmp(user[i],"1") == 0 || (strcmp(user[i],"2")) == 0){
				printf("ddddd");
				year = atoi(user[0]);
				year *= 10;
				year += atoi(user[1]);
				year += 1900;
				printf("%d",year);
			}
			else {
				printf("tlqkffff");
				year = atoi(user[0]);
				year *= 10;
				year += atoi(user[1]);
				year += 2000;
				printf("%d",year);
			}
		}
	}
	if (user[2] == "0") {

		month = atoi(user[3]);
		printf("eeee");
	}
	else if (user[2] == 1) {
		month = atoi(user[2]) * 10 + atoi(user[3]);
	}
	if (user[4] > 0) {
		day = atoi(user[4]) * 10 + atoi(user[5]);
	}
	else {
		day = atoi(user[5]);
	}
	
	printf("\n������� : %d %d %d", year, month, day);


}