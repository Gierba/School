#include <iostream>

using namespace std;

class Worker {
  public:
	string name, surname;
	
	Worker();
	Worker(string pName, string pSurname);
	
	~Worker(){
		cout << "Definicja destruktora\n";
	}
	
	void getData();
};

Worker::Worker(){
	cout << "Konstruktor domy�lny\n";
}

Worker::Worker(string pName, string pSurname):
	name {pName},
	surname {pSurname}
	{
		cout << "Konstruktor parametryczny\n";
	}

void Worker::getData(){
	cout << "Imi� i nazwisko: " << name << " " <<surname << endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	Worker nowak = Worker("Janusz", "Nowak");
	nowak.getData();
	

	return 0;
}
