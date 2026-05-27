#include<iostream>

void addValueToVector(int *x, unsigned int length) {
	for(unsigned int i = 0; i < length; i++) {
		*(x + i) = *(x + i) + 5;
	}
}

void addVector(int *vectorOne, int *vectorTwo, unsigned int length, int *vectorResult) {
	for(unsigned int i = 0; i < length; i++) {
		*(vectorResult + i) = *(vectorOne + i) + *(vectorTwo + i);
	}
}

int main (int argc, char *argv[]) {
// Primera parte
//	int tempVector[5] = { 10, 20, 30, 40, 50 };
//	
//	int *myVector = nullptr;
//	
//	myVector = &tempVector[0];
//	
//	for(unsigned int i = 0; i < 5; i++) {
//		std::cout << *(myVector + i) << std::endl;
//	}
	
// Segunda parte
//	int *pointerOne = new int[3];
//	
//	*pointerOne = 1;//equivalente a "ponter[0] = 1";
//	*(pointerOne + 1) = 10;//equivalente a "ponter[1] = 10";
//	*(pointerOne + 2) = 20;
//	
//	addValueToVector(pointerOne, 3);
//	
//	for(unsigned int i = 0; i < 3; i++) {
//		std::cout << *(pointerOne + i) << std::endl;
//	}
//	
//	std::cout << "---------------------------" << std::endl;
//	
//	int *pointerTwo = new int[3];
//	
//	for(unsigned int i = 0; i < 3; i++) {
//		std::cout << "pointerTwo[" << i << "]: ";
//		std::cin >> *(pointerTwo + i);
//	}
//	
//	int *pointerResult = new int[3];
//	
//	addVector(pointerOne, pointerTwo, 3, pointerResult);
//	
//	std::cout << "---------------------------" << std::endl;
//	
//	for(unsigned int i = 0; i < 3; i++) {
//		std::cout << "pointerResult[" << i << "]: " << *(pointerResult + i) << std::endl;
//	}
//	
//	delete[] pointerOne;
//	delete[] pointerTwo;
//	delete[] pointerResult;
	
// Tercera parte
	int **matrix = new int*[2];
	
	for(unsigned int i = 0; i < 2; i++) {
		*(matrix + i) = new int[3];
	}
	
	//Todo lo anterior es equivalente a "int matrix[2][3]";
	
	*(*(matrix + 0) + 0) = 1;//equivalente a "matrix[0][0] = 1"
	*(*(matrix + 0) + 1) = 2;//equivalente a "matrix[0][1] = 2"
	*(*(matrix + 0) + 2) = 3;//equivalente a "matrix[0][2] = 3"
	
	*(*(matrix + 1) + 0) = 4;//equivalente a "matrix[1][0] = 4"
	*(*(matrix + 1) + 1) = 5;//equivalente a "matrix[1][1] = 5"
	*(*(matrix + 1) + 2) = 6;//equivalente a "matrix[1][2] = 6"
	
	for(unsigned int i = 0; i < 2; i++) {
		for(unsigned int j = 0; j < 3; j++) {
			std::cout << *(*(matrix + i) + j) << "\t";
		}
		
		std::cout << std::endl;
	}
	
	for(unsigned int i = 0; i < 2; i++) {
		delete[] *(matrix + i);
	}
	
	delete[] matrix;
	
	return 0;
}
