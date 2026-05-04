#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
public:
	unsigned int rows;
	unsigned int columns;
	
	int data[100][100];
	
	void registerData();
	void showData();
};

#endif
