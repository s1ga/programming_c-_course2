#include"House.h"
#include<stdio.h>
#include<conio.h>
#include<iostream>

int House::count = 0;

House::House()
{
	printf("Input address: ");
	std::cin >> this->address;
	printf("Input floor: ");
	std::cin >> this->floor;
	printf("Input area of flat: ");
	std::cin >> this->roomArea;
	printf("Input count of rooms: ");
	std::cin >> this->roomCount;
	count++;
}

//void House::getFlat(int rooms)
//{
//
//}

//void House::getFlat()
//{
//
//}
//
//void House::getFlat()
//{
//
//}

void House::show()
{
	printf("\nFlat: %d\n", this->count);
	printf("Address: %s\n", this->address);
	printf("Floor: %d\n", this->floor);
	printf("Count of rooms: %d\n", this->roomCount);
	printf("Area: %f\n", this->roomArea);
}