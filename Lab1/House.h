#include<cstring>
class House 
{
private:
	int flatNum; //номер квартиры
	char address[50]; //адрес квартиры
	int floor; //этаж квартиры
	int roomCount; //кол-во комнат
	float flatArea; //площадь квартиры
	static int count; //счетчик
public:
	House();
	void show(); //все квартиры
	void getFlat(int rooms); //квартира с заданным числом комнат
	void getFlat(int rooms, int floor1, int floor2); //квартира с заданным числом комнат и диапазоном этажей
	void getFlat(float area); //квартира с > площадью
};