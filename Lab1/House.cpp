#include"House.h"
#include<stdio.h>
#include<conio.h>
#include<iostream>

int House::count = 0;

House::House()
{
	printf("House %d:\n", count + 1);
	printf("Input address: ");
	std::cin >> this->address;
	printf("Input floor: ");
	std::cin >> this->floor;
	printf("Input area of flat: ");
	std::cin >> this->flatArea;
	printf("Input count of rooms: ");
	std::cin >> this->roomCount;
	printf("\n");
	count++;
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
	//printf("Flat: %d\n", this->count);
	printf("Address: %s\n", this->address);
	printf("Floor: %d\n", this->floor);
	printf("Count of rooms: %d\n", this->roomCount);
	printf("Area: %f\n\n", this->flatArea);
	
}