#include"House.h"
#include<stdio.h>
#include<iostream>

int House::count = 1;

House::House() : flatNum(this->count)
{
	printf("House %d:\n", this->count++);
	printf("Input address: ");
	std::cin >> this->address;
	//scanf_s("%c", &this->address);
	printf("Input floor: ");
	scanf_s("%d", &this->floor);
	printf("Input area of flat: ");
	scanf_s("%f", &this->flatArea);
	printf("Input count of rooms: ");
	scanf_s("%d", &this->roomCount);
	printf("\n");
}

void House::getFlat(int rooms)
{
	if (this->roomCount == rooms)
	{
		this->show();
	} 
}

void House::getFlat(int rooms, int floor1, int floor2)
{
	if (this->roomCount == rooms && this->floor >= floor1 && this->floor <= floor2)
	{
		this->show();
	}
}

void House::getFlat(float area)
{
	if (this->flatArea > area)
	{
		this->show();
	}
}

void House::show()
{
	printf("Flat: %d\n", this->flatNum);
	printf("Address: %s\n", this->address);
	printf("Floor: %d\n", this->floor);
	printf("Count of rooms: %d\n", this->roomCount);
	printf("Area: %f\n\n", this->flatArea);
}