jawab

1. sebelum syntax cout yang benar adalah std:cout atau menambahkan "using namespace std;" didalam header 
2. tidak ada tanda petik di "Programku yang pertama" karena saat ingin meng-outputkan string apa adanya wajib menggunakan tanda petik
3. statement cout tidak ditutup menggunakan titik koma [ "<< programku yang pertama"; ]

program yang benar 

#include <iostream>
using namespace std;

int main()
{
 cout << "Programku yang pertama";
 return 0;
}