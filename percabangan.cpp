#include <iostream>
using namespace std;
int main(){
    string a;
    cout<<"persimpangan lampu merah : ";
    cin >> a;
    
    if(a=="merah")//kondisi 1;//pilihan 1
    {
       cout <<"berhenti" << endl;
    }
    else if(a=="kuning")//kondisi 2;//pilihan 2
    {
       cout <<"siap siap jalan";
    }
    else if(a=="hijau")//kodisi 3;//pilihan 3
    {
        cout<<"selamat jalan";
    }
    else//pengecualian
    {
       cout<<"warna lampu tidak tersedia";
    }
}