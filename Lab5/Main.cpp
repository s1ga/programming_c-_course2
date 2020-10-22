#include<cstdio>
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
			weight = plane->setWeight(),
			distance = plane->setDistance();

			if (plane->checkConditions(weight, distance)) {
				printf("Route time: %.2lf hours\n", plane->getTime(distance));
				printf("Cost: %.2lf$\n", plane->getCost(distance));
			}
			break;
		case 2:
			weight = car->setWeight(),
			distance = car->setDistance();

			if (car->checkConditions(weight, distance)) {
				printf("Route time: %.2lf hours\n", car->getTime(distance));
				printf("Cost: %.2lf$\n", car->getCost(distance));
			}
			break;
		case 3:
			weight = train->setWeight(),
			distance = train->setDistance();

			if (train->checkConditions(weight, distance)) {
				printf("Route time: %.2lf hours\n", train->getTime(distance));
				printf("Cost: %.2lf$\n", train->getCost(distance));
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