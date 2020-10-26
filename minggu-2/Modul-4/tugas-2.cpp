#include <iostream>
using namespace std;

int main()
{
	
	double c, f, r, k;
	
	cout << "masukan suhu dalam celcius : " ; cin >> c;
	
	f = (9/5.0 * c) + 32;
	k = 273 + c;
	r = 4/5.0 * c;
	
	cout << "\nKoversi Suhu = " << c << " Celcius" << endl;
	cout << "==================================" << endl;
	cout << "Suhu Fahrenheit : " << f << "'F" << endl;
	cout << "Suhu Kelvin : " << k << "'K" << endl;
	cout << "Suhu Reamur : " << r << "'R" << endl;
	
	return 0;
	
}
