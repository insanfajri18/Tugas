#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main(){
  char x[50];
  char y[20];

  cout << "Kalimat 1 = ";
  cin >> x;
  cout << "Kalimat 2 = ";
  cin >> y;

  strcat(x,y);
  cout << "Menjadi : " << x << endl;
  getchar ();
}