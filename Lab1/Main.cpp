#include"House.h"
#include<stdio.h>
#include<conio.h>

int main()
{
	int flag;
	do {
		printf("1 - Input array of houses\n");
		printf("2 - Show all houses\n");
		printf("3 - Show houses with given amount of rooms\n");
		printf("4 - Show houses with given amount of rooms and given range of flats\n");
		printf("4 - Show houses with area greater than given\n");
		printf("0 - Exit\n");
		scanf_s("%d", &flag);

		House** house = new House * [50];
		switch (flag)
		{
		case 1:
			static int n;
			printf("Unput amount of houses: ");
			scanf_s("%d", &n);
			for (int i = 0; i < n; i++)
				house[i] = new House();
			break;
		case 2:
			for (int i = 0; i < n; i++)
				house[i]->show();
			break;
		case 3:
		case 4:
		case 0:
			for (int i = 0; i < n; i++) {
				delete house[i];
			}
			delete[]house;

			printf("\nPress any key!\n");
			return 0;
		default:
			printf("There are no that function");
			break;
		}
	} while (flag);
	

	printf("\nPress any key!\n");
	while (!_kbhit());

	return 0;
}


/*
	1. Замена cin на scanf
	2. Реализация 3-х методов
	3. Реализация меню
*/
