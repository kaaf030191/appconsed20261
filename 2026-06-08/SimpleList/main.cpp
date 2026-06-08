#include<iostream>

#include "SimpleList.h"

int main (int argc, char *argv[]) {
	SimpleList simpleList;
	
	simpleList.insert(7);
	simpleList.insert(10);
	simpleList.insert(100);
	
	simpleList.show();
	
	return 0;
}
