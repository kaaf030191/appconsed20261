#include<iostream>

#include "Matrix.h"
#include "Helper.h"

int main (int argc, char *argv[]) {
	Matrix firstMat;
	Matrix secondMat;
	Matrix resultMat;
	Helper helper;
	
	firstMat.registerData();
	secondMat.registerData();
	
	helper.addMatrix(firstMat, secondMat, resultMat);
	
	firstMat.showData();
	secondMat.showData();
	
	resultMat.showData();
	
	return 0;
}
