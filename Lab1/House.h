class House 
{
private:
	char address[50]; //адрес квартиры
	int floor; //этаж квартиры
	int roomCount; //кол-во комнат
	float roomArea; //площадь квартиры
	static int count; //счетчик
public:
	House();
	void show(); //все квартиры
	//void get(); //заданная квартиры
	//void getFlat(int rooms, House arr); //квартира с заданным числом комнат
	//void getFlat(int rooms, int flat1, int flat2); //квартира с заданным числом комнат и диапазоном этажей
	//void getFlat(int area); //квартира с > площадью
};