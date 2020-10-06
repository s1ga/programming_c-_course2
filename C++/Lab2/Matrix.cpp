#include"Matrix.h" 
#include<cstdio>
#include<cmath>

Matrix::Matrix()
{
	//set dimension of the matrix
	this->setDimension();

	// alloc memory for matrix
	this->matrix = new float* [this->n];
	for (int i = 0; i < this->n; i++) {
		this->matrix[i] = new float[this->n];
	}

	this->setMatrix();
}

Matrix::Matrix(int n) : n(n)
{
	// alloc memory for matrix
	this->matrix = new float* [this->n];
	for (int i = 0; i < this->n; i++) {
		this->matrix[i] = new float[this->n];
	}
}

Matrix::Matrix(const Matrix& obj)
{
	// copy constructor realization
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

void Matrix::setMatrix()
{	
	// input matrix
	printf("Dimension of the matrix: %d. Input matrix: \n", this->n);
	for (int i = 0; i < this->n; i++) {
		for (int j = 0; j < this->n; j++) {
			scanf_s("%f", &this->matrix[i][j]);
		}
	}
}

int Matrix::setDimension()
{
	printf("Input dimension of the matrix: ");
	scanf_s("%d", &this->n);
	return this->n;
}

int Matrix::getDimension()
{
	return this->n;
}


void Matrix::print()
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

double Matrix::matrixNorm()
{
	// vars for sum and max value for row(i) and column(j)
	double isum = 0, jsum = 0, imax = 0, jmax = 0;
	for (int i = 0; i < this->n; i++) {
		isum = 0;
		jsum = 0;
		for (int j = 0; j < this->n; j++) {
			isum += abs(this->matrix[i][j]); // sum for row
			jsum += abs(this->matrix[j][i]); // sum for column
		}
		
		// obtain max value for row and column
		if (imax < isum) {
			imax = isum;
		}
		if (jmax < jsum) {
			jmax = jsum;
		}
	}

	// obtain max value of matrix
	if (imax > jmax) {
		return imax;
	}
	else {
		return jmax;
	}
}

Matrix operator+(Matrix a, Matrix b)
{
	// checking matrix on dimension equality
	if (a.n != b.n) {
		printf("This matrices have different dimensions\n");
		return -1;
	}

	int n = a.n;
	Matrix c(n); // matrix constructor

	// obtain sum
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			c.matrix[i][j] = a.matrix[i][j] + b.matrix[i][j];
		}
	}

	return c;
}

Matrix operator-(Matrix a, Matrix b)
{
	// checking matrix on dimension equality
	if (a.n != b.n) {
		printf("This matrices have different dimensions\n");
		return -1;
	}

	int n = a.n;
	Matrix c(n); // matrix constructor

	// obtain subtraction
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			c.matrix[i][j] = a.matrix[i][j] - b.matrix[i][j];
		}
	}

	return c;
}

Matrix operator*(Matrix a, Matrix b)
{
	// checking matrix on dimension equality
	if (a.n != b.n) {
		printf("This matrices have different dimensions\n");
		return -1;
	}

	int n = a.n;
	Matrix c(n); // matrix constructor

	// obtain multiplication
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			c.matrix[i][j] = 0;
			for (int k = 0; k < n; k++) {
				c.matrix[i][j] += a.matrix[i][k] * b.matrix[k][j];
			}
		}
	}

	return c;
}

Matrix& Matrix::operator=(const Matrix& b)
{
	// = overload
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