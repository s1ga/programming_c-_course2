class Matrix
{
private:
	double** matrix;
	int n; // matrix dimension
public:
	Matrix(double** matrix);
	Matrix(int n);
	Matrix(const Matrix& obj);
	~Matrix();
	void show();
	friend Matrix operator+(Matrix a, Matrix b);
	friend Matrix operator-(Matrix a, Matrix b);
	friend Matrix operator*(Matrix a, Matrix b);
	Matrix& operator=(Matrix& b);
};
