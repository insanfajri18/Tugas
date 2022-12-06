#include <iostream>
using namespace std;

int main() {
  int p, *bil;
  bil = &p;
  *bil= 200;
  
    cout << "Masukkan Nilai = ";
    cin >> *bil;
  
    cout << *bil<<" ";
    (*bil)++;
    cout << *bil<<" ";
    (*bil)--;
    cout << *bil <<endl;

  if ((*bil)%2==0){
    cout << *bil << " adalah Bilangan Genap" << endl;
  }
  else {
    cout << *bil << " adalah Bilangan Ganjil" << endl;
  }
  return 0;
}