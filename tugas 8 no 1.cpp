#include <iostream>
using namespace std;

int main() {
  int a, b, x[300][300], y[300][300], sum[300][300], i, j;
  cout << "Masukkan Jumlah Baris : ";
  cin >> a;
  cout << "Masukkan Jumlah Kolom : ";
  cin >> b;

  cout << "Masukkan matriks pertama: " << endl;
  for (i = 0; i < a; i++)
    for (j = 0; j < b; j++) {
      cout << "Matriks a " << i + 1 << j + 1 << " : ";
      cin >> x[i][j];
    }
  cout<<endl;
  cout<< "Masukkan matriks kedua: " << endl;
  for (i = 0; i < a; i++)
    for (j = 0; j < b; j++) {
      cout << "Matriks b " << i + 1 << j + 1 << " : ";
      cin >> y[i][j];
    }
  cout<<endl;
    for (i = 0; i < a; i++)
    for (j = 0; j < b; j++)
      sum[i][j] = x[i][j] + y[i][j];
      cout << "Hasil penjumlahan matriks : " << endl;
      for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
      cout << sum[i][j] << " ";
      if (j == b - 1)
      cout<<endl;
    }
  }
  for (i = 0; i < a; i++)
    for (j = 0; j < b; j++)
      sum[i][j] = x[i][j] - y[i][j];
      cout << "Hasil pengurangan matriks :" << endl;
      for (i = 0; i < a; ++i) {
        for (j = 0; j < b; ++j) {
      cout << sum[i][j] << " ";
      if (j == b - 1)
      cout<<endl;
    }
  }
  for (i = 0; i < a; i++)
    for (j = 0; j < b; j++)
      sum[i][j] = x[i][j] * y[i][j];
      cout << "Hasil Perkalian matriks : " << endl;
      for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
      cout << sum[i][j] << " ";
      if (j == b - 1)
      cout<<endl;
    }
  }
return 0;
}