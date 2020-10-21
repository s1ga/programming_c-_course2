#include<cstdio>
#include<cmath>
#include"Cargo.h"

// setting plane params in constructor
Plane::Plane() : minWeight(10000), minDistance(1000) {
	this->speed = 900;
	this->costPerKm = 0.8;
};

// setting train params in constructor
Train::Train() : minDistance(250) {
	this->speed = 50;
	this->costPerKm = 0.07;
}

// setting car params in constructor
Car::Car() : maxWeight(15000) {
	this->speed = 90;
	this->costPerKm = 0.1;
}

// set distance of route
float Cargo::setDistance() {
	float distance;
	printf("Input distance of your route: ");
	scanf_s("%f", &distance);
	return distance;
}

//get speed of transport
float Cargo::getSpeed() {
	return this->speed;
}

// get time of route with 2 signs precision
float Cargo::getTime(float distance) {
	float time = distance / this->speed;
	return round(time * 100) / 100;
}

// get cost of route with 2 signs precision
float Cargo::getCost(float distance) {
	float cost = distance * this->costPerKm;
	return round(cost * 100) / 100;
}

//bool Cargo::checkConditions(float minWeight = 0, float maxWeight = 0, float minDistance = 0) {
//	bool flag = false;
//
//	//checking for weight
//	if (minWeight && maxWeight) {
//		if (this->min)
//	}
//	else {
//		flag = true;
//	}
//
//	//checking for distance
//
//
//	return flag;
//}