#include<cstring>
class House 
{
private:
	int flatNum; //����� ��������
	char address[50]; //����� ��������
	int floor; //���� ��������
	int roomCount; //���-�� ������
	float flatArea; //������� ��������
	static int count; //�������
public:
	House();
	void show(); //��� ��������
	void getFlat(int rooms); //�������� � �������� ������ ������
	void getFlat(int rooms, int floor1, int floor2); //�������� � �������� ������ ������ � ���������� ������
	void getFlat(float area); //�������� � > ��������
};