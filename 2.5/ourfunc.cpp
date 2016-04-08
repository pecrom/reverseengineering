// ourfunc.cpp -- definovani vasi vlastni funkce
#include <iostream>
using namespace std;
void simon(int);		// funkcni prototyp pro simon()
int main()
{
	simon(3);		// volani funkce simon()
	cout << "Zadejte cele cislo: ";
	int count;
	cin >> count;
	simon(count);		// opetovne volani
	return 0;
}

void simon(int n)		// definice funkce simon()
{
	cout << "Simon rika, abyste se totknul prstu u nohou " << n << " krat.\n";
	// funkce void nepotrebuji prikaz return
}
