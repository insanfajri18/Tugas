#include<iostream>
using namespace std;

int main(){
    int nilai[]={23, 6, 89, 12, 45, 67, 9, 90, 54, 30};
    int a;
    for (a = 0; a <= 9; a++){
        if (nilai[0] < nilai[a]){
            nilai[0] = nilai[a];
        }
    }
    cout <<"Angka yang terbesar pada array nilai adalah = "<<nilai[0];

    for (a = 0; a <= 9; a++){
        if (nilai[0] > nilai[a]){
            nilai[0] = nilai[a];
        }
    }
    cout <<"\n\nAngka yang terkecil pada array nilai adalah = "<<nilai[0];

    return 0;
}