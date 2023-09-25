#include <iostream>
using namespace std;
int main(){
   int A, T;
   string ulang;

  do{
 cout << "------proses menghitung luas segitiga----- \n";
 cout << "masukkan nilai alas: ";
 cin >> A;
 cout << "masukkan nilai tingi: ";
 cin >> T;
float L = 0.5 * A * T;
//bisa pakek type data float dan double;
 cout << "luas segitiga adalah : " << L << endl;
 cout << "apakah anda ingin menghitung kembali? <y/n> : ";
 cin >> ulang;
} while (ulang == "y");
cout <<" program telah selsai!!!\n";
}


