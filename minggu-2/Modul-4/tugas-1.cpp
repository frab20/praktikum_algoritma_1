// program untuk menghasilkan output 
#include <iostream>
#include <iomanip>
using namespace std;


int main(){
	
	char nama[50], nim[10], plug[20];
	
	cout << "Masukan :" << endl;
	cout << "Nama \t: "; cin.getline(nama,50);
	cout << "Nim \t: "; cin.getline(nim,10);
	cout << "Plug \t: "; cin.getline(plug,20);
	
	cout << "\ninilah data Anda : " << endl;
	cout << "Nama \t: " << nama << endl;
	cout << "Nim \t: " << nim << endl;
	cout << "Plug \t: " << plug << endl;
	
	cout << "\nDalam Bentuk tabel :" << endl;
	cout << "=========================================================" << endl;
	cout << "       Nim     |          Nama           |      plug     " << endl;
	cout << "=========================================================" << endl;
	cout << setw(12) << nim << setw(4) <<"|" <<setw(17) << nama << setw(9) <<"|"<< setw(11) << plug << endl;
}
