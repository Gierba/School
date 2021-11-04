#include <iostream>

using namespace std;

class Animal {
  public:
	static int s_count;
	
	Animal(){
		s_count++;
		cout << "\nIlo�� obiekt�w: " << s_count << endl;
	}
	
	~Animal(){
		s_count--;
		cout << "\nIlo�� obiekt�w: " << s_count << endl;
	}
	
};

int Animal::s_count=0;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	cout << "\nIlo�� obiekt�w: "<<Animal::s_count; //0
	
	Animal dog;
//	delete dog;
	Animal cat;
	
	cout << "\nIlo�� obiekt�w: "<<Animal::s_count; //2

	Animal *p_dog = new Animal();
	delete p_dog;

	return 0;
}
