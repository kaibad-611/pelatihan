#include<iostream>
using namespace std;
int main()
{
    int pilih;
    string kerjaan;

    cout << "pilihlah salah satu kerjaan : "<<endl;
    cout << "1.miliyarder"<<endl;
    cout << "2. pembisnis"<<endl;
    cout <<"3.pengacara"<<endl;
    cout << "4.presiden"<<endl;
    cout << "tentukan pilihanmu: ";
    cin >>pilih;

 switch(pilih){
    case 1:
    kerjaan = "miliarder";
    break;
    case 2:
    kerjaan = "pembisnis";
    break;
    case 3:
    kerjaan ="pengacara";
    break;
    case 4:
    kerjaan ="presiden";
    break;
    default :
    kerjaan = "nganggur";
    break; 
    }
    cout << "kerjaan saya adalah : " << kerjaan;
}