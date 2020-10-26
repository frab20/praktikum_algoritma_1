jawab

1. sebelum syntax cout yang benar adalah std:cout atau menambahkan "using namespace std;" didalam header 
2. tidak ada tanda petik di "Programku yang pertama" karena saat ingin meng-outputkan string apa adanya wajib menggunakan tanda petik
3. tidak ditutup statement cout "<< programku yang pertama"; dengan titik koma karena wajib ditutup disetiap statement

program yang benar 

#include <iostream>
using namespace std;

int main()
{
 cout << "Programku yang pertama";
 return 0;
}