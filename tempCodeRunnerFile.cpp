#include<iostream>
using namespace std;
int main()
{
    int pilih;
    string mobil;

    cout <<"Tentukan pilihanmu skrg : "<<endl;
    cout <<"1.avanza"<<endl;
    cout <<"2.jazz"<<endl;
    cout <<"3.brio"<<endl;
    cout <<"4.lambogini"<<endl;
    cout <<"pilihanku adalah : ";
    cin >>pilih;

    switch(pilih){
        case 1:
        mobil ="1.avanza";
        break;
        case 2:
        mobil ="2.jazz";
        break;
        case 3:
        mobil = "3.brio";
        break;
        case 4:
        mobil = "4.lambogini";
        break;
        default:
        mobil = "tidak punya mobil";
        break;
    } cout <<"pilihan saya adalah : "<<mobil;

}