class Cargo {
protected: 
	double speed; //cargo transport speed in km/h
	double costPerKm; //cargo transport cost for 1 km
public:
	double setDistance(); //setter for distance of route
	double setWeight(); // getter for speed of transport
	double getTime(double distance); // getter for route time
	double getCost(double distance); // getter for route cost
	double doubToOut(double number); //pretty output of double number
	virtual bool checkConditions(double weight, double distance); // checks for transport conditions
};

class Plane : public Cargo {
private:
	double minWeight; // min weight of route for using this transport
	double minDistance; // min distance of route for using this transport
public:
	Plane(); // default constructor
	bool checkConditions(double weight, double distance) override;
}; 

class Train : public Cargo {
private: 
	double minDistance; // min distance of route for using this transport
public:
	Train(); // default constructor
	bool checkConditions(double weight, double distance) override;
};

class Car : public Cargo {
private:
	double maxWeight; // max weight of route for using this transport
public:
	Car(); // default constructor
	bool checkConditions(double weight, double distance) override;
};

