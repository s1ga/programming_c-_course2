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
	friend Matrix operator+(Matrix a, Matrix b);
	friend Matrix operator-(Matrix a, Matrix b);
	friend Matrix operator*(Matrix a, Matrix b);
	Matrix& operator=(Matrix& b);
};

/*
	1. Подумать над реализацией конструкторов
	2. Реализация умножения
	3. вычисления нормы матрицы
	4. Создать массив объектов класса Matrix и передать его в функцию, которая изменяет i-ю матрицу путем возведения ее в квадрат.
*/