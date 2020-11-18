#include<cstdio>
#include<iomanip>
#include<cmath>
#include"Cargo.h"

// setting plane params in constructor
Plane::Plane() : minWeight(10000), minDistance(1000)
{
	this->speed = 900;
	this->costPerKm = 3;
};

//cheking cargo and route conditions for Plane
bool Plane::checkConditions() 
{
	bool flag = false;

	if (this->weight && this->distance) {
		if (this->weight < this->minWeight) {
			printf("Your weight doesn't satisfy. Min weight is %.0fkg. You can choose another transport\n", this->minWeight);
		}
		else if (this->distance < this->minDistance) {
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
bool Train::checkConditions() 
{
	bool flag = false;

	if (this->distance) {
		if (this->distance >= this->minDistance) {
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
bool Car::checkConditions() 
{
	bool flag = false;

	if (this->weight) {
		if (this->weight <= this->maxWeight) {
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
	printf("Input distance of your route in km: ");
	scanf_s("%lf", &this->distance); 
	return doubToOut(this->distance);
}

//get speed of transport
double Cargo::setWeight() {
	printf("Input weight of your cargo in kg: ");
	scanf_s("%lf", &this->weight);
	return doubToOut(this->weight);
}

bool Cargo::checkConditions() 
{
	int flag = false;

	if (!this->weight && !this->distance) {
		printf("Distance and weight are required\n");
	}
	else {
		flag = true;
	}

	return flag;
}

// get distance of route
double Cargo::getDistance() {
	return this->distance;
}

// get weight of route
double Cargo::getWeight() {
	return this->weight;
}

// get time of route with 2 signs precision
double Cargo::getTime() 
{
	this->time = this->distance / this->speed;
	return doubToOut(this->time);
}

// get cost of route with 2 signs precision
double Cargo::getCost() 
{
	this->cost= this->distance * this->costPerKm;
	return doubToOut(this->cost);
}

double Cargo::doubToOut(double num)
{
	return round(num * 100) / 100;
}

//overload cout 
std::ostream& operator<< (std::ostream& out, const Cargo* cargo)
{
	out << "Route time: " << std::fixed << std::setprecision(2) << cargo->time << " hours" << std::endl
		<< "Cost: " << cargo->cost << "$" << std::endl;

	return out;
}

//overload cin
std::istream& operator>> (std::istream& in, Cargo* cargo)
{
	cargo->setDistance();
	cargo->setWeight();
	return in;
}
