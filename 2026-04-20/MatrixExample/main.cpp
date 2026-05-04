#include<iostream>

#include "Matrix.h"
#include "Helper.h"

int main (int argc, char *argv[]) {
	Matrix firstMat;
	Matrix secondMat;
	Matrix resultMat;
	Helper helper;
	
	/*firstMat.registerData();
	secondMat.registerData();
	
	helper.addMatrix(firstMat, secondMat, resultMat);
	
	firstMat.showData();
	secondMat.showData();
	
	resultMat.showData();*/
	
	unsigned int option = 0;
	
	do {
		option = helper.showMenu();
		
		switch(option) {
			case 1: 
				firstMat.registerData();
				
				break;
				
			case 2:
				secondMat.registerData();
				
				break;
			
			case 3:
				firstMat.showData();
				secondMat.showData();
				
				break;
			
			case 4:
				helper.addMatrix(firstMat, secondMat, resultMat);
				
				firstMat.showData();
				secondMat.showData();
				
				resultMat.showData();
				
				break;
			
			case 5:
				firstMat.showPrimarySlanting();
				
				break;
			
			case 6:
				secondMat.showSecondarySlanting();
				
				break;
		}
	} while(option != 0);
	
	return 0;
}
