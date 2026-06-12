#include<iostream>

#include "CircularList.h"

int main (int argc, char *argv[]) {
	CircularList circularList;
	
	circularList.insert();
	
	std::cout << std::endl;
	
	circularList.show();
	
	return 0;
}
