class Matrix
{
private:
	float** matrix;
	int n; // matrix dimension
public:
	Matrix();
	Matrix(int n);
	Matrix(const Matrix& obj);
	~Matrix();
	void show();
	int setDimension();
	void setMatrix(int n);
	//Matrix getSquared(Matrix);
	friend Matrix operator+(Matrix a, Matrix b);
	friend Matrix operator-(Matrix a, Matrix b);
	friend Matrix operator*(Matrix a, Matrix b);
	Matrix& operator=(Matrix& b);
};

/*
	1. �������� ��� ����������� �������������
	3. ���������� ����� �������
	4. ������� ������ �������� ������ Matrix � �������� ��� � �������, ������� �������� i-� ������� ����� ���������� �� � �������.
*/