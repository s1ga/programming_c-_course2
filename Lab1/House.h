class House 
{
private:
	char address[50]; //����� ��������
	int floor; //���� ��������
	int roomCount; //���-�� ������
	float roomArea; //������� ��������
	static int count; //�������
public:
	House();
	void show(); //��� ��������
	//void get(); //�������� ��������
	//void getFlat(int rooms, House arr); //�������� � �������� ������ ������
	//void getFlat(int rooms, int flat1, int flat2); //�������� � �������� ������ ������ � ���������� ������
	//void getFlat(int area); //�������� � > ��������
};