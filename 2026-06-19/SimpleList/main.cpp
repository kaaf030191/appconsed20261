#include<iostream>

#include "Menu.h"
#include "SimpleList.h"
#include "Product.h"

int main (int argc, char *argv[]) {
	Menu menu;
	SimpleList simpleList;
	Product product;
	int selectedOption = -1;
	int idTemp = -1;
	
	do {
		selectedOption = menu.show();
		
		switch(selectedOption) {
		case 0:
			return 0;
			
		case 1:
			product.insert();
			if(simpleList.existsProductoById(product.id)) {
				std::cout << "El Id ingresado ya se encuentra registrado." << std::endl << std::endl;
				system("pause");
			} else {
				simpleList.insert(product);
			}
			
			break;
			
		case 2:
			simpleList.show();
			system("pause");
			
			break;
			
		case 3:
			std::cout << "Ingrese el Id buscado: ";
			std::cin >> idTemp;
			
			simpleList.showById(idTemp);
			system("pause");
			
			break;
			
		case 4:
			break;
			
		case 5:
			break;
			
		case 6:
			break;
		}
	} while(selectedOption != 0);
	
	return 0;
}
