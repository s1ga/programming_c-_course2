#include"Matrix.h" 
#include<cstdio>
#define _CRT_SECURE_NO_WARNINGS

Matrix::Matrix(double** matrix)
{
	for (int i = 0; i < this->n; i++) {
		for (int j = 0; j < this->n; j++) {
			this->matrix[i][j] = matrix[i][j];
		}
	}
}

Matrix::Matrix(int n)
{
	this->n = n;
	this->matrix = new double* [this->n];
	for (int i = 0; i < this->n; i++) {
		this->matrix[i] = new double[this->n];
	}
}

Matrix::Matrix(const Matrix& obj)
{
	this->n = obj.n;
	this->matrix = new double* [this->n];

	for (int i = 0; i < this->n; i++) {
		this->matrix[i] = new double[this->n];
	}
	for (int i = 0; i < this->n; i++) {
		for (int j = 0; j < this->n; j++) {
			this->matrix[i][j] = obj.matrix[i][j];
		}
	}
}

Matrix::~Matrix()
{
	printf("Destruct");
	for (int i = 0; i < this->n; i++) {
		delete[]this->matrix[i];
	}

	delete[]this->matrix;
}

void Matrix::show()
{
	
}