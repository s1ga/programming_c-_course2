#include"Matrix.h" 
#include<cstdio>

Matrix::Matrix(int n)
{
	this->n = n;
	this->matrix = new float* [this->n];
	for (int i = 0; i < this->n; i++) {
		this->matrix[i] = new float[this->n];
	}
}

Matrix::Matrix(const Matrix& obj)
{
	this->n = obj.n;
	this->matrix = new float* [this->n];

	for (int i = 0; i < this->n; i++) {
		this->matrix[i] = new float[this->n];
	}

	for (int i = 0; i < this->n; i++) {
		for (int j = 0; j < this->n; j++) {
			this->matrix[i][j] = obj.matrix[i][j];
		}
	}
}

Matrix::~Matrix()
{
	//printf("Destruct\n");
	for (int i = 0; i < this->n; i++) {
		delete[]this->matrix[i];
	}

	delete[]this->matrix;
}

void Matrix::setMatrix(int n)
{
	if (this->n != n) {
		printf("Error!");
		return;
	}

	this->n = n;
	printf("Dimension of the matrix: %d. Input matrix: \n", this->n);
	for (int i = 0; i < this->n; i++) {
		for (int j = 0; j < this->n; j++) {
			scanf_s("%f", &this->matrix[i][j]);
		}
	}
}

void Matrix::show()
{
	printf("\nDimension of the matrix: %d\n", this->n);
	printf("Matrix:\n");

	for (int i = 0; i < this->n; i++) {
		for (int j = 0; j < this->n; j++) {
			printf("%.2f ", this->matrix[i][j]);
		}
		printf("\n");
	}
}

//int Matrix::setDimension()
//{
//	printf("Input dimension of the matrix: ");
//	scanf_s("%d", &this->n);
//	return this->n;
//}

Matrix operator+(Matrix a, Matrix b)
{
	if (a.n != b.n) {
		printf("This matrices have different dimensions\n");
		return -1;
	}

	int n = a.n;
	Matrix c(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			c.matrix[i][j] = a.matrix[i][j] + b.matrix[i][j];
		}
	}

	return c;
}

Matrix operator-(Matrix a, Matrix b)
{
	if (a.n != b.n) {
		printf("This matrices have different dimensions\n");
		return -1;
	}

	int n = a.n;
	Matrix c(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			c.matrix[i][j] = a.matrix[i][j] - b.matrix[i][j];
		}
	}

	return c;
}

Matrix operator*(Matrix a, Matrix b)
{
	if (a.n != b.n) {
		printf("This matrices have different dimensions\n");
		return -1;
	}

	int n = a.n;
	Matrix c(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			c.matrix[i][j] = 0;
			for (int k = 0; k < n; k++) {
				c.matrix[i][j] += a.matrix[j][k] * b.matrix[k][j];
			}
		}
	}

	return c;
}

Matrix& Matrix::operator=(Matrix& b)
{
	this->n = b.n;
	this->matrix = new float* [this->n];

	for (int i = 0; i < this->n; i++) {
		this->matrix[i] = new float[this->n];
	}

	for (int i = 0; i < this->n; i++) {
		for (int j = 0; j < this->n; j++) {
			this->matrix[i][j] = b.matrix[i][j];
		}
	}

	return *this;
}