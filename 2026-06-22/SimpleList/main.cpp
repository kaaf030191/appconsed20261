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
	bool increment = false;
	int quantityTemp = 0;
	
	product.id = 1;
	product.productName = "Coca Cola";
	product.stockQuantity = 10;
	product.price = 10;
	
	simpleList.insert(product);
	
	product.id = 2;
	product.productName = "Inka Cola";
	product.stockQuantity = 10;
	product.price = 12;
	
	simpleList.insert(product);
	
	product.id = 3;
	product.productName = "Kola Real";
	product.stockQuantity = 10;
	product.price = 8;
	
	simpleList.insert(product);
	
	do {
		selectedOption = menu.show();
		
		switch(selectedOption) {
		case 0:
			return 0;
			
		case 1:
			product.insert();
			if(simpleList.existsById(product.id)) {
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
			std::cout << "Ingrese el Id del producto que desea modificar: ";
			std::cin >> idTemp;
			
			std::cout << "Ingrese [1], para incrementar o [0], para decrementar: ";
			std::cin >> increment;
			
			std::cout << "Cantidad a modificar para el stock: ";
			std::cin >> quantityTemp;
			
			simpleList.modifyById(idTemp, increment, quantityTemp);
			
			std::cout << std::endl << "El producto fue " << (increment ? "incrementado" : "decrementado") << " en " << quantityTemp << " unidad(es)." << std::endl << std::endl;
			
			system("pause");

			break;
			
		case 5:
			std::cout << "Ingrese el Id del producto a eliminar: ";
			std::cin >> idTemp;
			
			simpleList.deleteById(idTemp);
			
			system("pause");
			
			break;
			
		case 6:
			break;
		}
	} while(selectedOption != 0);
	
	return 0;
}
