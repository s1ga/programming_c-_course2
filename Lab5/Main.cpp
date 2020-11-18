#include<cstdio>
#include<iostream>
#include<cstring>
#include"Cargo.h"

int main()
{
	Car* car = new Car;
	Train* train = new Train;
	Plane* plane = new Plane;

	double weight, distance;

	int flag;
	printf("\nChoose the transport:\n");
	do {
		printf("\n1. Plane\n");
		printf("2. Car\n");
		printf("3. Train\n");
		printf("0 - Exit\n");
		printf("Input transport: ");
		scanf_s("%d", &flag);

		switch (flag)
		{
		case 1:
			std::cin >> plane;
			weight = plane->getWeight(),
			distance = plane->getDistance();

			if (plane->checkConditions()) {
				plane->getCost();
				plane->getTime();
				std::cout << plane << std::endl;
			}
			break;
		case 2:
			std::cin >> car;
			weight = car->getWeight(),
			distance = car->getDistance();

			if (car->checkConditions()) {
				car->getTime();
				car->getCost();
				std::cout << car << std::endl;
			}
			break;
		case 3:
			std::cin >> train;
			weight = train->getWeight(),
			distance = train->getDistance();

			if (train->checkConditions()) {
				train->getTime();
				train->getCost();
				std::cout << train << std::endl;
			}
			break;
		case 0:
			delete car;
			delete train;
			delete plane;
			return 0;
		default:
			printf("\nThere are no such transport\n\n");
			break;
		}
	} while (flag);
}