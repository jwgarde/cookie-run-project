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
	FILE  *fp = fopen("시발.txt", "r+");

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

	FILE* sp = fopen("시발.txt", "w");
	for (int i = 0; i < 5; i++) {

		printf("\n\n이름 >> ");
		scanf("%s", name);
		printf("\n주소 >> ");
		scanf("%s", place);
		printf("\n전화번호 >> ");
		scanf("%s", phonenum);

		strcpy(asddd.name[i], name);
		strcpy(asddd.place[i], place);
		strcpy(asddd.phonenum[i], phonenum);
		

		printf("%s %s %s", asddd.name[i], asddd.place[i], asddd.phonenum[i]);
	}
	while (1) {
		printf("\n찾으실 사용자 이름 입력>>");
		scanf("%s", name);
		for (int i = 0; i < 5; i++)
		{
			if (strcmp(name, asddd.name[i]) == 0) {
				printf("%s %s %s", asddd.name[i], asddd.place[i], asddd.phonenum[i]);
				printf("\n수정하실 주소 입력>>");
				scanf("%s", place);
				strcpy(asddd.place[i], place);
				printf("\n수정하실 전화번호 입력>>");
				scanf("%s", phonenum);
				strcpy(asddd.phonenum[i], phonenum);
				printf("%s %s %s", asddd.name[i], asddd.place[i], asddd.phonenum[i]);
				break;
			}
			else {
				continue;
			}
		}
		printf("종료 하실려면 3을 입력해주세요 or 돌아가실라면 1");
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
	

