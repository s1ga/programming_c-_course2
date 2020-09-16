#include"House.h"
#include<stdio.h>
#include<conio.h>

int main()
{
	int flag;
	House** house = new House * [50];
	do {
		printf("1 - Input array of houses\n");
		printf("2 - Show all houses\n");
		printf("3 - Show houses with given amount of rooms\n");
		printf("4 - Show houses with given amount of rooms and given range of floors\n");
		printf("5 - Show houses with area greater than given\n");
		printf("0 - Exit\n");
		printf("Input funciton: ");
		scanf_s("%d", &flag);
		printf("\n");

		switch (flag)
		{
		case 1:
			static int housesCount;
			printf("Input amount of houses: ");
			scanf_s("%d", &housesCount);
			for (int i = 0; i < housesCount; i++) {
				house[i] = new House();
			}
			break;
		case 2:
			for (int i = 0; i < housesCount; i++)
				house[i]->show();
			break;
		case 3:
			int rooms;
			printf("Input amount of rooms: ");
			scanf_s("%d", &rooms);
			printf("Houses with given amount of rooms: \n\n");
			for (int i = 0; i < housesCount; i++) {
				house[i]->getFlat(rooms);
			}
			break;
		case 4:
			int floor1, floor2;
			printf("Input amount of rooms: ");
			scanf_s("%d", &rooms);
			printf("Input range of floors: ");
			scanf_s("%d%d", &floor1, &floor2);
			printf("Houses with given amount of rooms and range of floors: \n\n"); 
			for (int i = 0; i < housesCount; i++) {
				house[i]->getFlat(rooms, floor1, floor2);
			}
			break;
		case 5:
			float area;
			printf("Input area of flat: ");
			scanf_s("%f", &area);
			printf("Houses with area more than given: \n\n");
			for (int i = 0; i < housesCount; i++) {
				house[i]->getFlat(area);
			}
			break;
		case 0:
			for (int i = 0; i < housesCount; i++) {
				delete house[i];
			}
			delete[]house;

			return 0;
		default:
			printf("There are no such function\n\n");
			break;
		}
	} while (flag);
	

	return 0;
}


/*
	1. Замена cin на scanf
	2. Реализация 3-х методов
	3. Реализация меню
*/
