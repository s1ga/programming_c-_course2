#include<cstdio>
#include"Matrix.h"

Matrix squaredMatrix(Matrix** arr, int i)
{
	return *arr[i] = *arr[i] * *arr[i];
}


int main()
{
	int flag;
	Matrix** matrices = new Matrix * [4];
	do {
		printf("1 - Input array of matrices\n");
		printf("2 - Add matrices\n");
		printf("3 - Subtract matrices\n");
		printf("4 - Multiplicate matrices\n");
		printf("5 - Matrix assignment\n");
		printf("6 - Get squared matrix\n");
		printf("0 - Exit\n");
		printf("Input funciton: ");
		scanf_s("%d", &flag);
		printf("\n");

		switch (flag)
		{
		case 1:
			for (int i = 0; i < 3; i++) {
				matrices[i] = new Matrix();
			}
			matrices[3] = new Matrix(3);
			matrices[3]->setMatrix();
			break;
		case 2:
			printf("Sum: \n");
			(*matrices[0] + *matrices[1] + *matrices[3]).print();
			break;
		case 3:
			printf("Difference: \n");
			(*matrices[0] - *matrices[1] - *matrices[1]).print();
			break;
		case 4:
			printf("Product: \n");
			(*matrices[1] * *matrices[2]).print();
			break;
		case 5:
			printf("Old matrix: \n");
			matrices[0]->print();
			matrices[0] = matrices[1];
			printf("New matrix: \n");
			matrices[0]->print();
			break;
		case 6:
			printf("Old matrix: \n");
			matrices[1]->print();
			printf("Squared matrix: \n");
			squaredMatrix(matrices, 1);
			matrices[1]->print();
			break;
		case 0:
			for (int i = 0; i < 4; i++) {
				delete matrices[i];
			}
			delete[]matrices;

			return 0;
		default:
			printf("There are no such function\n\n");
			break;
		}
	} while (flag);

	return 0;
}