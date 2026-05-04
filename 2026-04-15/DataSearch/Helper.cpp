#ifndef HELPER_CPP
#define HELPER_CPP

#include "Helper.h"

int Helper::linealSearch(int value) {
	unsigned int vectorLength = sizeof(myFirstVector) / sizeof(int);
	
	for(unsigned int i = 0; i < vectorLength; i++) {
		if(myFirstVector[i] == value) {
			return i;
		}
	}
	
	return -1;
}

int Helper::binarySerch(int startPosition, int endPosition, int value) {
	int midPosition = ((endPosition - startPosition) / 2) + startPosition;
	
	if(mySecondVector[midPosition] == value) {
		return midPosition;
	}
	
	if(startPosition == endPosition) {
		return -1;
	}
	
	if(mySecondVector[midPosition] < value) {
		startPosition = midPosition + 1;
	} else {
		endPosition = midPosition - 1;
	}
	
	return binarySerch(startPosition, endPosition, value);
}

#endif
