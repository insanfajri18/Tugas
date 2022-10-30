#include <iostream>
using namespace std;

int main(){
    int bilangan [100],b,bil,jumlah=0,a;

    cout <<"Masukkan jumlah bilangan = ";
    cin >> b;

    for (a=0;a<b;a++){
        cout <<"Masukkan Indeks ke- "<<a<<" : ";
        cin >> bilangan[a];
    }

    cout <<"\nDeretan bilangan = ";
    for (a=0;a<b;a++){
        cout <<bilangan[a]<< " ";
    }

    cout <<"\n\nMasukkan bilangan yang akan dicari : ";
    cin >>bil;

    for (a=0;a<b;a++){
        if (bilangan[a] == bil){
            cout <<"Bilangan " <<bil<< " ditemukan pada indeks ke : " <<a;
        }
    }

    for (a=0;a<b;a++){
        if (bilangan[a] == bil){
            jumlah++;
        }
    }
    cout <<"\nBilangan "<<bil<< " ditemukan sebanyak "<<jumlah<<" kali";

    return 0;

}