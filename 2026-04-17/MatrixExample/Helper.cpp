#ifndef HELPER_CPP
#define HELPER_CPP

#include <iostream>

#include "Helper.h"

void Helper::addMatrix(Matrix firstMatrix, Matrix secondMatrix, Matrix &resultMatrix) {
	resultMatrix.rows = firstMatrix.rows;
	resultMatrix.columns = firstMatrix.columns;
	
	for(unsigned int i = 0; i < firstMatrix.rows; i++) {
		for(unsigned int j = 0; j < firstMatrix.columns; j++) {
			resultMatrix.data[i][j] = firstMatrix.data[i][j] + secondMatrix.data[i][j];
		}
	}
}

#endif
