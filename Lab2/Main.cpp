#include<cstdio>
#include"Matrix.h"

int main()
{
	int n = 3;
	Matrix a(n), b(n);
	a.setMatrix(n);
	b.setMatrix(n);


	(a*b*a).show();

	return 0;
}