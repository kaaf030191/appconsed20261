#ifndef HELPER_H
#define HELPER_H

class Helper {
public:
	int myFirstVector[5] = { 7, 8, 4, 2, 5 };
	int mySecondVector[10] = { 7, 8, 9, 11, 15, 20, 23, 34, 667, 1233 };
	
	int linealSearch(int value);
	int binarySerch(int startPosition, int endPosition, int value);
};

#endif
