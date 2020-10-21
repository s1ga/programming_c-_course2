class Cargo {
protected: 
	float speed;
	float costPerKm;
public:
	float setDistance();
	float getSpeed();
	float getTime(float distance);
	float getCost(float distance);
};

class Plane : public Cargo {
private:
	float minWeight;
	float minDistance;
public:
	Plane();
};

class Train : public Cargo {
private: 
	float minDistance;
public:
	Train();
};

class Car : public Cargo {
public:
	Car();
};

