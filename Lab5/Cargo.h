class Cargo {
protected: 
	float speed = 0; //cargo transport speed in km/h
	float costPerKm = 0; //cargo transport cost for 1 km
public:
	float setDistance(); //setter for distance of route
	float getSpeed(); // getter for speed of transport
	float getTime(float distance); // getter for route time
	float getCost(float distance); // getter for route cost
	//virtual bool checkConditions(float minWeight, float maxWeight, float minDistance); // checks for transport conditions
};

class Plane : public Cargo {
private:
	float minWeight; // min weight of route for using this transport
	float minDistance; // min distance of route for using this transport
public:
	Plane(); // default constructor
}; 

class Train : public Cargo {
private: 
	float minDistance; // min distance of route for using this transport
public:
	Train(); // default constructor
};

class Car : public Cargo {
private:
	float maxWeight; // max weight of route for using this transport
public:
	Car(); // default constructor
};

