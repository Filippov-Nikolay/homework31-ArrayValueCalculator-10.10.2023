#include <iostream>
#include <string>
#include "ArrayValueCalculator.h"
#include "ArrayDataException.h"

using namespace std;

int ArrayValueCalculator::doCalc(string** a, int r, int c) {
	int sum = 0;

	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) {
			for (int k = 0; k < a[i][j].length(); k++) 
				if (!isdigit(a[i][j][k]))
					throw ArrayDataException(" - Index. Can't convert a string to int!", i, j);
			sum += stoi(a[i][j]);
		}
	
	return sum;
}