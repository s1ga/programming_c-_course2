class Matrix
{
private:
	float** matrix; // matrix
	int n; // matrix dimension
public:
	Matrix();
	Matrix(int n); // constructor
	Matrix(const Matrix& obj); // copy constructor 
	~Matrix(); // destructor
	void print(); // print matrix and dimension
	int setDimension();
	int getDimension();
	void setMatrix(); // setter for matrix
	//void setSquared(Matrix** arr, int i); // obtain square of matrix[i] 
	double matrixNorm(); //obtain norm of matrix
	friend Matrix operator+(Matrix a, Matrix b); // + operator overload
	friend Matrix operator-(Matrix a, Matrix b); // - operator overload
	friend Matrix operator*(Matrix a, Matrix b); // * operator overload
	Matrix& operator=(const Matrix& b); // = operator overload
};

/*
	2. ������� ������ �������� ������ Matrix � �������� ��� � �������, ������� �������� i-� ������� ����� ���������� �� � �������.
*/