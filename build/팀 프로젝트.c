\n주소 >> ");
		scanf("%s", place);
		printf("\n전회번호 >> ");
		scanf("%s", phonenum);

		strcpy(asddd.name[i], name);
		strcpy(asddd.place[i], place);
		strcpy(asddd.phonenum[i], phonenum);
		

		printf("%s %s %s", asddd.name[i], asddd.place[i], asddd.phonenum[i]);
	}
	while (1) {
		printf("\n찾으실 사용자 이름을 입력>>");
		scanf("%s", name);
		for (int i = 0; i < 5; i++)
		{
			if (strcmp(name, asddd.name[i]) == 0) {
				printf("%s %s %s", asddd.name[i], asddd.place[i], asddd.phonenum[i]);
				printf("\n수정하실 주소입력>>");
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
		printf("종료할려면 3입력?");
		scanf("%d", &skrr);
		if (skrr == 3) {
			for (int i = 0; i < 5; i++) {
				fprintf(sp, "%s  %s  %s \n", asddd.name[i], asddd.place[i], asddd.phonenum[i]);
			}
			break;
			fclose(sp);
		}
		else {
			continue;
		}
	}



}
	

