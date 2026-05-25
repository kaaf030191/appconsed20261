#include<iostream>

void modifyData1(int &a) {
	a = 10;
}

void modifyData2(int a) {
	a = 10;
}

int main (int argc, char *argv[]) {
	int x = 7, y = 7;
//	int *y = nullptr;
//	
//	y = &x;
//	
//	std::cout << &x << " = " << x << std::endl;
//	std::cout << y << " = " << *y << std::endl;
	
	modifyData1(x);
	modifyData2(y);
	
	std::cout << x << std::endl;
	std::cout << y << std::endl;
	
	int *z = new int();
	
	*z = 100;
	
	std::cout << z << " ... " << (z + 1) << " = " << *(z + 1) << " ... " << z << std::endl;
	
	z = z + 1;
	
	std::cout << z << " = " << *z << std::endl;
	
	z++;
	
	std::cout << z << " = " << *z << std::endl;
	
	z = z + 10;
	
	std::cout << z << " = " << *z << std::endl;
	
	for(unsigned int i = 0; i < 10000; i++) { // en este caso, en las iterciones, se está tratando de acceder a una posición restringida, por tanto, finaliza el programa con un código de error.
		std::cout << (z + i) << " = " << *(z + i) << std::endl;
	}
	
	delete z; // esta instrucción debe estar siempre para liberar memoria, respecto al puntero usado.
	
	return 0;
}
