#include<cstdio>
#include<cmath>
#include"Cargo.h"

// setting plane params in constructor
Plane::Plane() : minWeight(10000), minDistance(1000)
{
	this->speed = 900;
	this->costPerKm = 3;
};

//cheking cargo and route conditions for Plane
bool Plane::checkConditions(double weight = 0, double distance = 0) 
{
	bool flag = false;

	if (weight && distance) {
		if (weight < this->minWeight) {
			printf("Your weight doesn't satisfy. Min weight is %.0fkg. You can choose another transport\n", this->minWeight);
		}
		else if (distance < this->minDistance) {
			printf("Your distance doesn't satisfy. Min distance is %.0fkm. You can choose another transport\n", this->minDistance);
		}
		else {
			printf("All conditions are followed\n");
			flag = true;
		}
	}
	else {
		printf("Please, input weight of your cargo and distance of route!\n");
	}

	return flag;
}

// setting train params in constructor
Train::Train() : minDistance(250)
{
	this->speed = 50;
	this->costPerKm = 0.35;
}

//cheking cargo and route conditions for Train
bool Train::checkConditions(double weight = 0, double distance = 0) 
{
	bool flag = false;

	if (distance) {
		if (distance >= this->minDistance) {
			printf("All conditions are followed\n");
			flag = true;
		}
		else {
			printf("Your distance doesn't satisfy. Min distance is %.0fkm. You can choose another transport\n", this->minDistance);
		}
	}
	else {
		printf("Please, input distance of your route!\n");
	}

	return flag;
}

// setting car params in constructor
Car::Car() : maxWeight(15000) 
{
	this->speed = 90;
	this->costPerKm = 0.4;
}

//cheking cargo and route conditions for Car
bool Car::checkConditions(double weight = 0, double distance = 0) 
{
	bool flag = false;

	if (weight) {
		if (weight <= this->maxWeight) {
			printf("All conditions are followed\n");
			flag = true;
		}
		else {
			printf("Your cargo is overweight. Max weight is %.0fkg. You can choose another transport\n", this->maxWeight);
		}
	}
	else {
		printf("Please, input weight of your cargo!\n");
	}

	return flag;
}

// set distance of route
double Cargo::setDistance() {
	double distance;
	printf("Input distance of your route in km: ");
	scanf_s("%lf", &distance);
	return doubToOut(distance);
}

//get speed of transport
double Cargo::setWeight() {
	double weight;
	printf("Input weight of your cargo in kg: ");
	scanf_s("%lf", &weight);
	return doubToOut(weight);
}

bool Cargo::checkConditions(double weight = 0, double distance = 0) 
{
	int flag = false;

	if (!weight && !distance) {
		printf("Distance and weight are required\n");
	}
	else {
		flag = true;
	}

	return flag;
}

// get time of route with 2 signs precision
double Cargo::getTime(double distance) 
{
	double time = distance / this->speed;
	return doubToOut(time);
}

// get cost of route with 2 signs precision
double Cargo::getCost(double distance) 
{
	double cost = distance * this->costPerKm;
	return doubToOut(cost);
}

double Cargo::doubToOut(double num)
{
	return round(num * 100) / 100;
}