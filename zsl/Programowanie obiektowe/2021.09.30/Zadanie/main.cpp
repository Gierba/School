#include <iostream>

using namespace std;

class Student {
  public:
    static string s_class;
    static string s_profession;
    string name;
    string surname;

    static void show_class_profession()
    {
        cout << "Klasa: " << s_class <<
        endl << "Zaw�d: " << s_profession << endl;
    }

    void show_name_surname(string name, string surname)
    {
        cout << "Imi�: " << name <<
        endl << "Nazwisko: " << surname << endl;
    }
};

string Student::s_class="2pT";
string Student::s_profession="Programista";

int main()
{
    setlocale(LC_CTYPE,"polish");
    Student uczen;
    uczen.show_name_surname("Piotr","Gierba");
    uczen.show_class_profession();



    /*zdefiniuj klas� ucze� zawieraj�c� 2 zmienne klasowe (static) s_klasa, s_zawod.
    Zmienniej s_klasa przypisz nazw� swojej klasy.Zmiennej s_zawod przypisz zawod kt�rym si� kszta�cisz.
    Zdefiniuj zmienne instancyjne Imi� i nazwisko.
    Zdefiniuj metod� statyczn� wy�wietlaj�c� zaw�d i klas�.
    Zdefiniuj metod� cz�onkowsk� wy�wietlaj�ce i ustawiaj�ce dane dla zmiennych cz�onkowskich*/
    return 0;
}
