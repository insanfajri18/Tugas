#include <iostream>
using namespace std;
int pangkat(int x, int y);
int main (){
  int x, y;
  cout << "MENGHITUNG PANGKAT DENGAN FUNGSI REKURSIF" << endl;
    cout<<endl;
  cout << "Masukkan Nilai X = ";
  cin >> x;
  cout << "Masukkan Nilai Y = ";
  cin >> y;
  cout << x << " Dipangkatkan " << y << " = " << pangkat(x, y) << endl;
}
int pangkat(int x, int y){
  if (y==0)
    return 1;
  else
    return x*pangkat(x, y-1);
}