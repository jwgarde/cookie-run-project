#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
typedef struct _gud
{
	char name[5][20] ;
	char place[5][20];
	char phonenum[5][11];

}GUD;
int main(void) {
	GUD asddd;
	char place[20];
	int skrr = 0;
	char name[20];
	char phonenum[20];
	FILE  *fp = fopen("�ù�.txt", "r+");

	for (int i = 0; i < 5; i++) {
		strcpy(asddd.name[i], "");
		strcpy(asddd.place[i], "");
		strcpy(asddd.phonenum[i], "");
	}
	for (int i = 0; i < 5; i++) {
		fscanf(fp, "%s %s %s", asddd.name[i], asddd.place[i], asddd.phonenum[i]);
	}
	for (int i = 0; i < 5; i++) {
		if (strcmp(asddd.name[i],"") != 0) {
			printf("%s %s %s", asddd.name[i], asddd.place[i], asddd.phonenum[i]);
		}
	}
	fclose(fp);

	FILE* sp = fopen("�ù�.txt", "w");
	for (int i = 0; i < 5; i++) {

		printf("\n\n�̸� >> ");
		scanf("%s", name);
		printf("\n�ּ� >> ");
		scanf("%s", place);
		printf("\n��ȭ��ȣ >> ");
		scanf("%s", phonenum);

		strcpy(asddd.name[i], name);
		strcpy(asddd.place[i], place);
		strcpy(asddd.phonenum[i], phonenum);
		

		printf("%s %s %s", asddd.name[i], asddd.place[i], asddd.phonenum[i]);
	}
	while (1) {
		printf("\nã���� ����� �̸� �Է�>>");
		scanf("%s", name);
		for (int i = 0; i < 5; i++)
		{
			if (strcmp(name, asddd.name[i]) == 0) {
				printf("%s %s %s", asddd.name[i], asddd.place[i], asddd.phonenum[i]);
				printf("\n�����Ͻ� �ּ� �Է�>>");
				scanf("%s", place);
				strcpy(asddd.place[i], place);
				printf("\n�����Ͻ� ��ȭ��ȣ �Է�>>");
				scanf("%s", phonenum);
				strcpy(asddd.phonenum[i], phonenum);
				printf("%s %s %s", asddd.name[i], asddd.place[i], asddd.phonenum[i]);
				break;
			}
			else {
				continue;
			}
		}
		printf("���� �ϽǷ��� 3�� �Է����ּ��� or ���ư��Ƕ�� 1");
		scanf("%d", &skrr);
		if (skrr == 3) {
			for (int i = 0; i < 5; i++) {
				fprintf(sp, "%s  %s  %s \n", asddd.name[i], asddd.place[i], asddd.phonenum[i]);
			}
			break;
			fclose(sp);
		}
		else if(skrr == 1) {
			continue;
		}
	}



}
	

