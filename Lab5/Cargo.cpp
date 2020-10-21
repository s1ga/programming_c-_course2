#include<cstdio>
#include<cmath>
#include"Cargo.h"

Plane::Plane() : minWeight(5000), minDistance(1000) {
	this->speed = 900;
	this->costPerKm = 0.2;
};

Train::Train() : minDistance(250)

float Cargo::setDistance() {
	float distance;
	printf("Input distance of your route: ");
	scanf_s("%f", &distance);
	return distance;
}

float Cargo::getSpeed() {
	return this->speed;
}

float Cargo::getTime(float distance) {
	float time = distance / this->speed;
	return round(time * 100) / 100;
}

float Cargo::getCost(float distance) {
	float cost = distance * this->costPerKm;
	return round(cost * 100) / 100;
}