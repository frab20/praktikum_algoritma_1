//Menghitung luas permukaan kerucut
#include<iostream>
using namespace std;
#define PHI 3.14

int main(){
	
	double r,s;
	double LAlas , LSelimut; 
	 
	 cout << "masukan jari jari (meter): "; cin >> r;
	 cout << "masukan sisi miring kerucut (meter): "; cin >> s;
	 
	 LAlas = PHI*r*r;
	 LSelimut = PHI*r*s;
	 
	 cout << "\n\n=================================================" << endl;
	 cout << "\t\tKerucut" << endl;
	 cout << "=================================================" << endl;
	 cout << "Jari jari : " << r << " meter" << endl;
	 cout << "Sisi miring Kerucut: " << s << " meter" << endl;
	 cout << "Luas Permukaan Kerucut : " << LAlas + LSelimut << endl;
	 cout << "=================================================" << endl;
	 return 0;
	
}
