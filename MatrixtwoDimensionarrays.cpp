// MatrixtwoDimensionarrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a[2][2] = { {-1,0},{ 3,6 } };
	int b[2][2] = { {9,-3},{5,10} };
	int c[2][2];
	int i, j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << "\nThe value at ( " << i << "," << j << ") = " << a[i][j];
		}
		cout << "\n";
	}
	//Matrix B
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << "\nThe value at ( " << i << "," << j << ") = " << a[i][j];

		}
		cout << "\n";
	}
	//Add two Matrices and display
	cout << "\nThe resultant matrix is: ";
	cout << "\n======================== ";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			c[i][j] = a[i][j] + b[i][j];
			cout << "\nThe value at ( " << i << "," << j << ") = " << c[i][j];

		}
		cout << "\n";
	}


}