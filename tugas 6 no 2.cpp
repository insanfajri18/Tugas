#include <ctype.h>
#include <iostream>
#include <string.h>
using namespace std;

int main() {
  char kalimat[60] = "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN";
  char kebalik[60];
  
  cout << kalimat << endl;
  
  for (int i = 0; i < strlen(kalimat); i++) {
    if (kalimat[i] >= 'a' && kalimat[i] <= 'z') {
      kebalik[i] = toupper(kalimat[i]);
    } else {
      kebalik[i] = tolower(kalimat[i]);
    }
  }
  cout << "\nKalimat Terbalik = " << endl;
  int x = strlen(kalimat);
  for (int i = x - 1; i >= 0; i--) {
    cout << kebalik[i];
  }
  return 0;
}