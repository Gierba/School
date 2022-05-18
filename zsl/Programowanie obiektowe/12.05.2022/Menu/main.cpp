#include <iostream>
#include "CSquare.h"
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "polish");
	
	int choice;
	
	do
	{
		cout << "Menu:\n0. Wyj�cie\n1. Program 1\nWyb�r opcji:";
		cin >> choice;
		
		switch(choice){
		case 0:
			cout << "Dzi�kujemy!\n\n";
		return 0;
		case 1:
			{
				cout << "Wybra�e� program 1\n\n";
				CSquare square;
				square.setSide(10.0);
				cout << "D�ugo�� boku: " << square.getSide() << endl;
				cout << "Obw�d kwadratu: " << square.perimeter() << endl;
				cout << "Obw�d kwadratu: " << square.area() << endl;
				break;
			}
		default:
			cout << "B��dny numer opcji!\n\n";
			choice=0;
		}
		break;	
	}
	while(choice != 0);
	
	return 0;
}
