// sqrt.cpp  -- pouziti funkce pro vypocet druhe odmocniny
#include <iostream>
using namespace std;
#include <cmath> // nebo math.h
int main()
{
	double cover;	// double pouziva pro realna cisla
	
	cout << "Kolik ctverecnich matru maji vase prosteradla?\n";
	cin >> cover;
	double side;		// vytvari dalsi promennou
	side = sqrt(cover);	// vola funkci, prirazuje navratovou hodnotu
	cout << "Vase prosteradla prykriji\n";
	cout << "ctverec o stranach " << side << " metru.\n";
	return 0;
}
