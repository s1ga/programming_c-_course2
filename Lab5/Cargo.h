#include<iostream>

class Cargo {
protected: 
	double speed; //cargo transport speed in km/h
	double costPerKm; //cargo transport cost for 1 km
	double cost; //cost of route
	double time; //time of route
	double weight; //weight of cargo
	double distance; //distance of route
	double setDistance(); //setter for distance of route
	double setWeight(); // setter for weight of cargo
public:
	double getDistance(); //getter for distance of route
	double getWeight(); // getter for weight of cargo
	double getTime(); // getter for route time
	double getCost(); // getter for route cost
	double doubToOut(double number); //pretty output of double number
	virtual bool checkConditions(); // checks for transport conditions
	friend std::ostream& operator<< (std::ostream& out, const Cargo* cargo);//overload cout
	friend std::istream& operator>> (std::istream& in, Cargo* cargo);//overload cin
};

class Plane : public Cargo {
private:
	double minWeight; // min weight of route for using this transport
	double minDistance; // min distance of route for using this transport
public:
	Plane(); // default constructor
	bool checkConditions() override;
}; 

class Train : public Cargo {
private: 
	double minDistance; // min distance of route for using this transport
public:
	Train(); // default constructor
	bool checkConditions() override;
};

class Car : public Cargo {
private:
	double maxWeight; // max weight of route for using this transport
public:
	Car(); // default constructor
	bool checkConditions() override;
};

