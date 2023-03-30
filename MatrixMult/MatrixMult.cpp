// MatrixMult.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

#define		SIZE	2

float A[2][2] = { {1.0, 2.0},{3.0, 4.0} };
float B[2][2] = { {4.0, 3.0},{2.0, 1.0} };
float C[2][2]{};

void MatrixMult()
{
	for (int i = 0; i <= SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			for (int k = 0; k <= SIZE; k++)
				C[i][j] = C[i][j] + A[i][k] * B[k][j];

}

int main() {

	MatrixMult();
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++)
			printf("%0.2f ", C[i][j]);
		printf("\n");
	}
}