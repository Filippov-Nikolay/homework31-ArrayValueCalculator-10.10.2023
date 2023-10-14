#include <iostream>
#include <string>
#include "Exception.h"
#include "ArraySizeException.h"
#include "ArrayValueCalculator.h"
#include "ArrayDataException.h"

using namespace std;

int main() {
	setlocale(0, "");

	int row = 0;
	int column = 0;

	try {
		cout << "Введите размер двумерного массива" << endl;
		cout << "Кол-во строк: ";
		cin >> row;

		cout << "Кол-во столбцов: ";
		cin >> column;

		if (row > 4 || column > 4)
			throw ArraySizeException("Max size row/column 4");
		
		string** arr = new string * [row];

		for (int i = 0; i < row; i++)
			arr[i] = new string[column];

		cin.ignore();

		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				cout << "[" << i << "][" << j << "] = ";
				getline(cin, arr[i][j]);
			}
		}

		/*
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++)
				cout << arr[i][j] << " ";
			cout << endl;
		}
		*/

		ArrayValueCalculator obj;
		cout << obj.doCalc(arr, row, column) << endl;
	}
	catch (ArraySizeException exception) {
		cout << exception.GetMessage() << endl;
	}
	catch (ArrayDataException exception) {
		cout << exception.GetMessage() << endl;
	}
    
    return 0;
}